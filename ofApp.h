#pragma once

#include "ofMain.h"

#include "pageOne.h"
#include "myDrawing.h"
#include "ofxOsc.h"


#define HOST_1 "192.168.0.40" //add 14 hosts with space for theis IP
//#define HOST_2 "172.20.10.7"
#define HOST_3 "192.168.0.42"
#define HOST_5 "192.168.0.44"
//#define HOST_1 "172.20.10.7"
#define PORT 8000


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    myDrawing myDrawing;
    
    pageOne pageOne; 
    int page;
    ofImage instrOne;
    ofImage instrTwo;
    ofImage rec;
    ofImage button1;
    ofImage button2;
    ofImage button3;
    ofImage colGA;
    ofImage persGS;
    
    
    ofxOscReceiver receiver;
    deque<string> messageBuffer;
    int maxBufferSize=20;
    int accelX,accelY,accelZ;
    int size;
    vector <ofPoint> positions;
    float X1,Y1,Z1,X2,Y2,Z2,X3,Y3,Z3,X4,Y4,Z4,X5,Y5,Z5,X6,Y6,Z6,X7,Y7,Z7,X8,Y8,Z8,X9,Y9,Z9,X10,Y10,Z10,X11,Y11,Z11,X12,Y12,Z12,X13,Y13,Z13,X14,Y14,Z14;
    
    

   int  numOfClicks,modOfClicks;
    
    ofxOscSender sender;
    
    int startTime;
    bool timerEnd;
    int endTime;
    int count;
    int width;
    
    int mode, lastmode;
    
    
    int pageUno;
    
    int drawscr;
    int receive; 
    
    ofEasyCam cam;
    
    ofImage img, img2, img3, img4, img5;
    
    vector<ofImage> screensht;
    
    int dataBuffer;
    int ind,ind2,ind3,ind4,ind5,ind6,ind7,ind8,ind9,ind10,ind11,ind12,ind13,ind14;
    vector<float> varX;
    vector<float> varY;
    vector<float> varZ;
    vector<float> varX2;
    vector<float> varY2;
    vector<float> varZ2;
    vector<float> varX3;
    vector<float> varY3;
    vector<float> varZ3;
    vector<float> varX4;
    vector<float> varY4;
    vector<float> varZ4;
    vector<float> varX5;
    vector<float> varY5;
    vector<float> varZ5;
    vector<float> varX6;
    vector<float> varY6;
    vector<float> varZ6;
    vector<float> varX7;
    vector<float> varY7;
    vector<float> varZ7;
    vector<float> varX8;
    vector<float> varY8;
    vector<float> varZ8;
    vector<float> varX9;
    vector<float> varY9;
    vector<float> varZ9;
    vector<float> varX10;
    vector<float> varY10;
    vector<float> varZ10;
    vector<float> varX11;
    vector<float> varY11;
    vector<float> varZ11;
    vector<float> varX12;
    vector<float> varY12;
    vector<float> varZ12;
    vector<float> varX13;
    vector<float> varY13;
    vector<float> varZ13;
    vector<float> varX14;
    vector<float> varY14;
    vector<float> varZ14;
  
};

