#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    numOfClicks=0;
    //modOfClicks=0;
    ofBackground(255);
    page=0;
    //page=1;
    instrOne.load("gait_screen-images-01.png");
    instrTwo.load("gait_image_lowres-03.png");
    
    
    receiver.setup(PORT);
    sender.setup(HOST_1, PORT);
}

//--------------------------------------------------------------
void ofApp::update(){

    
//    if (modOfClicks==0){//(page==3){
//
//        startTime=ofGetElapsedTimeMillis();
//    }
    
    
    if (messageBuffer.size()>maxBufferSize) messageBuffer.pop_back();
    
    // check for waiting messages
    while(receiver.hasWaitingMessages()){
        // get the next message
        ofxOscMessage m;
        receiver.getNextMessage(m);
        cout << m.getAddress()  << endl;
        
        // fader
        if (m.getAddress() == "/host_1"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X = m.getArgAsFloat(0);
            Y = m.getArgAsFloat(1);
            Z = m.getArgAsFloat(2);
//            ofMap(X,-1.,1.,0,ofGetWidth());
//            ofMap(Y,-1.,1.,0,ofGetHeight());
            cout<<X<<endl;
            cout<<Y<<endl;
            cout<<Y<<endl;
            }
        else if (m.getAddress() == "/host_2"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X = m.getArgAsFloat(0);
            Y = m.getArgAsFloat(1);
            Z = m.getArgAsFloat(2);
            //            ofMap(X,-1.,1.,0,ofGetWidth());
            //            ofMap(Y,-1.,1.,0,ofGetHeight());
            cout<<X<<endl;
            cout<<Y<<endl;
            cout<<Y<<endl;
        }
        
        else {
            // unrecognized message: display on the bottom of the screen
            messageBuffer.push_front(m.getAddress() + ": UNRECOGNIZED MESSAGE");
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //BUTTONS
    //cout << page<< endl;
        // start button
        ofSetColor(255,0,0);
        ofDrawRectangle(0, ofGetHeight()-40, ofGetWidth()/4, ofGetHeight());
        //next button page2
        ofSetColor(0,0,200);
        ofDrawRectangle(ofGetWidth()/4, ofGetHeight()-40, ofGetWidth()/2, 40);
        //next button page3
        ofSetColor(0,255,100);
        ofDrawRectangle(ofGetWidth()/2, ofGetHeight()-40, 3*ofGetWidth()/4, 40);
        // next button to program
        ofSetColor(100,155,0);
        ofDrawRectangle(3*ofGetWidth()/4, ofGetHeight()-40, ofGetWidth(), 40);
    
    if (page==0){
        ofSetBackgroundAuto(true);
        pageOne.draw();
    }
    //CHANGE OF SCENES
    
    modOfClicks=numOfClicks%3;
    

    
       // if (page==1){
        if (modOfClicks==1){
            //pageTwo.draw(page);
            ofSetColor(255);
            instrOne.resize(ofGetWidth(),ofGetHeight()-40);
            instrOne.draw(0,0);
            
         }
    
    
        else if (modOfClicks==2){//(page==2){
            ofSetColor(255);
            instrTwo.resize(ofGetWidth(),ofGetHeight()-40);
            instrTwo.draw(0,0);
        }


        else if (modOfClicks==0){//(page==3){
            
           // startTime=ofGetElapsedTimeMillis();
            
            if (ofGetElapsedTimeMillis()<startTime+8000 ){
                ofPushMatrix();
                ofSetColor(255);
                ofSetBackgroundAuto(false);
                myDrawing.draw(X,Y,Z);
                ofPopMatrix();
                 cout << ofGetElapsedTimeMillis()<<endl;
                cout<< startTime+8000<< endl;
                
            }
            else if (ofGetElapsedTimeMillis()==startTime+8010){
                pageOne.takeScreenshot(1);
                cout<< 30<< endl;
                cout << ofGetElapsedTimeMillis()<<endl;
                
            }
            else if (ofGetElapsedTimeMillis()>startTime+8010 && ofGetElapsedTimeMillis()<startTime+16000){
                ofSetBackgroundAuto(true);
               // mydrawing.draw(X,Y,Z);
                
                cout<< 30<< endl;
                 cout << ofGetElapsedTimeMillis()<<endl;
                
            }
           else if (ofGetElapsedTimeMillis()>startTime+16010 && ofGetElapsedTimeMillis()<startTime+32000){
                ofSetBackgroundAuto(true);
                pageOne.draw();
               cout<< 40<< endl;
                 cout << ofGetElapsedTimeMillis()<<endl;
            }
        }
    //cout<< page<< endl;
    cout << ofGetElapsedTimeMillis()<<endl;
    cout << startTime <<endl;

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='s'){
        pageOne.takeScreenshot(1);
    }
    if (key==' '){
        numOfClicks++;
        //if (modOfClicks==0){//(page==3){

            startTime=ofGetElapsedTimeMillis();
        //}
    }
    
    if (key=='a'){
        ofxOscMessage m;
        m.setAddress("/test");
        m.addIntArg(1);
//        m.addFloatArg(3.5f);
//        m.addStringArg("hello");
//        m.addFloatArg(ofGetElapsedTimef());
        sender.sendMessage(m, false);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    //BUTTONS
    
    /* page0 default shows vectors
     page1 two choises
     page2 instructions 1
     page3 instructions 2
     page4 visualization program*/
    
    
    //page0start
    if ( ofGetMouseX()>0 && ofGetMouseX()<ofGetWidth()/4 && ofGetMouseY()>ofGetHeight()-40 && ofGetMouseY()<ofGetHeight()){
        page=1;// moves to two choises
    }
//    if (page==1){
//        //any of the two boxes moves to page 2 instr.1
//    }
    
    //page2 image instr 1
    if (ofGetMouseX()>ofGetWidth()/4 && ofGetMouseX()<ofGetWidth()/2 && ofGetMouseY()>ofGetHeight()-40 && ofGetMouseY()<ofGetHeight()){
        page=2;
    }
    //page3 image
    if (ofGetMouseX()>ofGetWidth()/2 && ofGetMouseX()<3*ofGetWidth()/4 && ofGetMouseY()>ofGetHeight()-40 && ofGetMouseY()<ofGetHeight()){
        page=3;
    }
    //page4 program
    if (ofGetMouseX()>3*ofGetWidth()/4  && ofGetMouseY()>ofGetHeight()-40 && ofGetMouseY()<ofGetHeight()){
        page=4;
        
    }
    if (ofGetMouseX()>0 && ofGetMouseX()<ofGetWidth()/4  && ofGetMouseY()>0 && ofGetMouseY()<40){
        page=0;
        
    }
    
  
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
