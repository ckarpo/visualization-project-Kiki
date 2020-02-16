#include "MPU9250.h"
#include <ArduinoOSC.h>
 
#define device_id 5  // CHANGE DEVICE ID FOR EACH SENSOR !!
 
const char* ssid = "Kiki-Sensors";
const char* pwd  = "m6cLhPv4xykw"; 
const char* host = "192.168.0.56";  // IP OF THE SERVER (MAC MINI)
const int   port = 8000;
 
float acc_x,acc_y,acc_z;
//float gyr_x,gyr_y,gyr_z;
float acc_x_bias,acc_y_bias,acc_z_bias;//new
float gyr_x,gyr_y,gyr_z;

bool start = false;
 
String osc_addr = "/host_" + String(device_id);
 
MPU9250 IMU(i2c0, 0x68);
 
OscWiFi osc;
 
void setup()
{
    Serial.begin(115200);
   
    WiFi.begin(ssid,pwd);

    while(WiFi.status() != WL_CONNECTED) {
        Serial.print(".");
        delay(500);
    }
 
    Serial.print("WiFi connected - IP address: ");
    Serial.println(WiFi.localIP());
   
    delay(100);
 
    IMU.begin();
    IMU.setAccelRange(MPU9250::ACCEL_RANGE_8G);
    IMU.setGyroRange(MPU9250::GYRO_RANGE_250DPS);
    IMU.setDlpfBandwidth(MPU9250::DLPF_BANDWIDTH_92HZ);
   
    delay(100);
 
    osc.begin(port);
    osc.parse();
        osc.send(host, port, osc_addr, acc_x, acc_y, acc_z, gyr_x, gyr_y, gyr_z);
    osc.subscribe("/inf", [](OscMessage& m)
    {
        

Serial.println("OSC Received");
        Serial.println(m.arg<int>(0));
        
        if (m.arg<int>(0) == true) {
            calibrate(10);
            start = true;
        }
        else if (m.arg<int>(0) == false) {
            start = false;
        }
    });
}
 
void loop()
{
    IMU.readSensor();
   
      acc_x = IMU.getAccelX_mss() - IMU.getAccelBiasX_mss();
      acc_y = IMU.getAccelY_mss() - IMU.getAccelBiasY_mss();
      acc_z = IMU.getAccelZ_mss() - IMU.getAccelBiasZ_mss();

    Serial.println(acc_x);
    Serial.println(acc_y);
 
    gyr_x = IMU.getGyroX_rads();
    gyr_y = IMU.getGyroY_rads();
    gyr_z = IMU.getGyroZ_rads();
 
    osc.parse();
    osc.send(host, port, osc_addr, acc_x, acc_y, acc_z, gyr_x, gyr_y, gyr_z);
 
    delay(70);
 
}
void calibrate (int averaging) {

  for (int i = 0; i <= averaging; i++) {
      acc_x_bias += IMU.getAccelX_mss();
      acc_y_bias += IMU.getAccelY_mss();
      acc_z_bias += IMU.getAccelZ_mss();
      delay(100);
  }

  acc_x_bias = acc_x_bias / averaging;
  acc_y_bias = acc_y_bias / averaging;
  acc_z_bias = acc_z_bias / averaging;
      
}
