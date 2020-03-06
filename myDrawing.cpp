#include "myDrawing.h"



//--------------------------------------------------------------
void myDrawing::setup(){
    //ofBackground(0);
    otipeis=false;
     cam.setDistance(1000);
}

//--------------------------------------------------------------
void myDrawing::update(){

}
void myDrawing::debugDraw(int posX,int posY){
    ofSetColor(255);
    ofDrawCircle(posX,posY,50);
}
//--------------------------------------------------------------
void myDrawing::draw1(int posX,int posY,int posZ){
    
//Sensor 1 Forehead
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(178, 177, 177);
    ofNoFill();
        //ofDrawCircle(posX, posY, 10);
    locX =ofClamp(posX,-3., 3.);
    locY =ofClamp(posY,-0.07, 0.07);
    //bool yo=ofInRange(locX*40.+ofGetWidth()/2, 0, 1000);
    //cout<< yo<< endl;
    ofDrawBox(locX*40.,posY*40.,posZ*100, 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
    //cout<< posX<< endl;
}
void myDrawing::draw2(int posX,int posY,int posZ){

 //Sensor2 Left Thumb
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(216, 119, 3);
    ofNoFill();
    ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
}
void myDrawing::draw3(int posX,int posY,int posZ){
    
    //Sensor3 Left Low Arm
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(221, 79, 0);
    ofNoFill();
    ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
}
void myDrawing::draw4(int posX,int posY,int posZ){

    //Sensor04: Left Up Arm
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(255, 0, 0);
    ofNoFill();
    ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
}

void myDrawing::draw5(int posX,int posY,int posZ){


    //Sensor05: Right Thumb
    ofPushMatrix();
    ofPushStyle();
    ofSetColor(20, 239, 239);
    ofNoFill();
    ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
    ofPopStyle();
    ofPopMatrix();
}
void myDrawing::draw6(int posX,int posY,int posZ){

        //Sensor06:  Right Low Arm
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(0, 92, 255);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
void myDrawing::draw7(int posX,int posY,int posZ){

        //Sensor07: Right Up Arm
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(23, 23, 173);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
void myDrawing::draw8(int posX,int posY,int posZ){

        //Sensor08: Back Up Torso
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(189, 0, 251);
        ofNoFill();
        ofDrawBox(posX*20,posY*20.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
   // cout<< posX*20.+ofGetWidth()/2 <<endl;
   // cout<< posY*20.+ofGetHeight()/2 << endl;
}
void myDrawing::draw9(int posX,int posY,int posZ){

        //Sensor09: Left Thigh 

        ofPushMatrix();
        ofPushStyle();
        ofSetColor(229, 218, 140);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
}
void myDrawing::draw10(int posX,int posY,int posZ){


        //Sensor10: Left Calve
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(255, 212, 0);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
void myDrawing::draw11(int posX,int posY,int posZ){


        //Sensor11: Left Foot
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(255, 255, 0);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
void myDrawing::draw12(int posX,int posY,int posZ){


        //Sensor12: Right Thigh
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(0, 77, 71);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
}
void myDrawing::draw13(int posX,int posY,int posZ){


        //Sensor13: Right Calve
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(78, 122, 15);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
void myDrawing::draw14(int posX,int posY,int posZ){


        //Sensor14: Right Foot
        ofPushMatrix();
        ofPushStyle();
        ofSetColor(64, 229, 23);
        ofNoFill();
        ofDrawBox(posX*50.,posY*50.,posZ*100, 10, 10, 10);
        ofPopStyle();
        ofPopMatrix();
}
