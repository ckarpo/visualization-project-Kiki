#pragma once

#include "ofMain.h"

#include "pageOne.h"
#include "myDrawing.h"
#include "ofxOsc.h"


#define HOST_1 "172.20.10.7" //add 14 hosts with space for theis IP
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
    
    ofxOscReceiver receiver;
    deque<string> messageBuffer;
    int maxBufferSize=20;
    int accelX,accelY,accelZ;
    int size;
    vector <ofPoint> positions;
    float X,Y,Z;
    
    

   int  numOfClicks,modOfClicks;
    
    ofxOscSender sender;
    
    int startTime; 
    
};
