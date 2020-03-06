#include "pageOne.h"

//--------------------------------------------------------------
void pageOne::setup(){
    //ofBackground(0);
   // ofSetBackgroundAuto(false);
    save=0;
    nai=false;
    img.load("blah1.png");
    baner1.load("Screen01_Title-24.png");
   // baner2.load();
    numOfDrawing=0;
    lastNoD=0;
    

}

//--------------------------------------------------------------
void pageOne::update(){

}

//--------------------------------------------------------------
void pageOne::draw(int i ){
    
    
    if (i==1){
                int imgwidth= ofGetWidth()/5;
                //baner1.draw(0,0);
                for (int i=0; i<numOfDrawing; i++){
                    ofPushMatrix();
                    //ofPushStyle();
                    int imgWidth=image[i].getWidth();
                        ofSetColor(255);
                        ofScale(0.2,0.2);
                        image[i].draw(i*imgWidth,100);
                    
                    //ofPopStyle();
                    ofPopMatrix();
               
                }
        

    }
    //myDrawing[numOfDrawing].draw(mouseX,mouseY);
}
void pageOne::drawFullscreen(){
 for (int i=0; i<numOfDrawing; i++){
     ofSetColor(255);
     image[i].draw(0,0);
     
 }

    
}


//--------------------------------------------------------------
void pageOne::takeScreenshot(int key){
    if (key==1){
        
        save=numOfDrawing;//axristo?
        numOfDrawing++;
        //cout<<numOfDrawing<<endl;
        
        screenshot.grabScreen(0, 0, ofGetWidth(), ofGetHeight()-190);
        image.push_back(screenshot);
        
        //  screenshot.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
        screenshot.save("blah"+ofToString(numOfDrawing)+ofToString(ofGetTimestampString())+".png");
        
    }
}

