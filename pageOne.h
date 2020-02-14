#pragma once

#include "ofMain.h"
#include "myDrawing.h"

class pageOne : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    void takeScreenshot(int key);

    
   vector<myDrawing> myDrawing;
    int numOfDrawing;
    int lastNoD;
    int save;
    ofImage screenshot;
    ofImage img;
    bool nai;
    vector<ofImage> image;
    //ofImage image;
    deque<ofImage> imgBuffer; 
};
