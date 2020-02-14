#include "pageOne.h"

//--------------------------------------------------------------
void pageOne::setup(){
    ofBackground(255);
    ofSetBackgroundAuto(false);
    save=0;
    nai=false;
    //image.load("blah.png");
    numOfDrawing=0;
    lastNoD=0;
    
   // for (int i=0; i<numOfDrawing; i++){
    // image[numOfDrawing].load("blah"+ofToString(numOfDrawing)+".png");
  //img.load("blah"+ofToString(numOfDrawing)+".png");
   //}
    
}

//--------------------------------------------------------------
void pageOne::update(){
//    if (numOfDrawing!=lastNoD){
//        imgBuffer.push_front(image[numOfDrawing]);
//    }
   // for (int i=0; i<numOfDrawing; i++){
}

//--------------------------------------------------------------
void pageOne::draw(){
    int imgwidth= ofGetWidth()/5;
    
    
                for (int i=0; i<numOfDrawing; i++){
                    ofPushMatrix();
                    ofPushStyle();
                    int imgWidth=image[i].getWidth();
                        ofSetColor(255);
                        ofScale(0.2,0.2);
                        image[i].draw(i*imgWidth,0);
                    
                    ofPopStyle();
                    ofPopMatrix();
               
                }
    
  
    //myDrawing[numOfDrawing].draw(mouseX,mouseY);
}
//--------------------------------------------------------------
void pageOne::takeScreenshot(int key){
    if (key==1){
        
        save=numOfDrawing;//axristo?
        numOfDrawing++;
        cout<<numOfDrawing<<endl;
        
        screenshot.grabScreen(0, 0, ofGetWidth(), ofGetHeight()-40);
        image.push_back(screenshot);
        
        //  screenshot.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        //screenshot.save("blah"+ofToString(numOfDrawing)+".png");
        
    }
}
