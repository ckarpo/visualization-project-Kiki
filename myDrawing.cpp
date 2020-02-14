#include "myDrawing.h"



//--------------------------------------------------------------
void myDrawing::setup(){
    ofBackground(255);
    otipeis=false;
     cam.setDistance(1000);
}

//--------------------------------------------------------------
void myDrawing::update(){

}

//--------------------------------------------------------------
void myDrawing::draw(int posX,int posY,int posZ){
    //int pos2X,int pos2Y, int pos2Z, int pos3X,int pos3Y, int pos3Z,int pos4X,int pos4Y, int pos4Z,int pos5X,int pos5Y, int pos5Z,int pos6X,int pos6Y, int pos6Z,int pos7X,int pos7Y, int pos7Z,int pos8X,int pos8Y, int pos8Z,int pos9X,int pos9Y, int pos9Z,int pos10X,int pos10Y, int pos10Z,int pos11X,int pos11Y, int pos11Z,int pos12X,int pos12Y, int pos12Z,int pos13X,int pos13Y, int pos13Z,int pos14X,int pos14Y, int pos14Z)
//Sensor 1 Forehead
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(178, 177, 177);
    ofNoFill();
        //ofDrawCircle(posX, posY, 10);
    ofDrawBox(posX*50.+200,posY*50.+200,posZ*50., 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
    cout<< posX<< endl;
    
// //Sensor2 Left Thumb
//    ofPushMatrix();
//    ofPushStyle();
//    ofSetColor(216, 119, 3);
//    ofNoFill();
//    ofDrawBox(pos2X*100,pos2Y*100,pos2Z*100, 10, 10, 10);
//    ofPopStyle();
//    ofPopMatrix();
    
//    //Sensor3 Left Low Arm
//    ofPushMatrix();
//    ofPushStyle();
//    ofSetColor(221, 79, 0);
//    ofNoFill();
//    ofDrawBox(pos3X*100,pos3Y*100,pos3Z*100, 10, 10, 10);
//    ofPopStyle();
//    ofPopMatrix();
    
//    //Sensor04: Left Up Arm
//    ofPushMatrix();
//    ofPushStyle();
//    ofSetColor(255, 0, 0);
//    ofNoFill();
//    ofDrawBox(pos4X*100,pos4Y*100,pos4Z*100, 10, 10, 10);
//    ofPopStyle();
//    ofPopMatrix();
    
//    //Sensor05: Right Thumb
//    ofPushMatrix();
//    ofPushStyle();
//    ofSetColor(20, 239, 239);
//    ofNoFill();
//    ofDrawBox(pos5X*100,pos5Y*100,pos5Z*100, 10, 10, 10);
//    ofPopStyle();
//    ofPopMatrix();
    
    //    //Sensor06:  Right Low Arm
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(0, 92, 255);
    //    ofNoFill();
    //    ofDrawBox(pos6X*100,pos6Y*100,pos6Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor07: Right Up Arm
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(23, 23, 173);
    //    ofNoFill();
    //    ofDrawBox(pos7X*100,pos7Y*100,pos7Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor08: Back Up Torso
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(189, 0, 251);
    //    ofNoFill();
    //    ofDrawBox(pos8X*100,pos8Y*100,pos8Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor09: Left Thigh 
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(229, 218, 140);
    //    ofNoFill();
    //    ofDrawBox(pos9X*100,pos9Y*100,pos9Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor10: Left Calve
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(255, 212, 0);
    //    ofNoFill();
    //    ofDrawBox(pos10X*100,pos10Y*100,pos10Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor11: Left Foot
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(255, 255, 0);
    //    ofNoFill();
    //    ofDrawBox(pos11X*100,pos11Y*100,pos11Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor12: Right Thigh
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(0, 77, 71);
    //    ofNoFill();
    //    ofDrawBox(pos12X*100,pos12Y*100,pos12Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor13: Right Calve
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(78, 122, 15);
    //    ofNoFill();
    //    ofDrawBox(pos13X*100,pos13Y*100,pos13Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
    //    //Sensor14: Right Foot
    //    ofPushMatrix();
    //    ofPushStyle();
    //    ofSetColor(64, 229, 23);
    //    ofNoFill();
    //    ofDrawBox(pos14X*100,pos14Y*100,pos14Z*100, 10, 10, 10);
    //    ofPopStyle();
    //    ofPopMatrix();
    
}
