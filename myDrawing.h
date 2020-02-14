#pragma once

#include "ofMain.h"

class myDrawing {

    
	public:
   // myDrawing(); 
		void setup();
		void update();
		void draw(int posX,int posY, int posZ);
    
    
    bool otipeis;
    
    
    
    ofMesh mesh;
    
    ofEasyCam cam;
    
//    ofxOscReceiver receiver;
//    deque<string> messageBuffer;
//    int maxBufferSize=20;
    int accelX,accelY,accelZ;
    int size;
    vector <ofPoint> positions;
    float X,Y,Z;
    
    
};
