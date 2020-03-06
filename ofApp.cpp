#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.setDistance(2000);
    ofSetFrameRate(60);
//    ofSetVerticalSync(true);
//    ofEnableDepthTest();
    
    numOfClicks=0;
    //modOfClicks=0;
    ofBackground(0);
    page=0;
    //page=1;
    mode=0;
    lastmode=mode;
    
    instrOne.load("Screen02_full-24.png");
    instrTwo.load("Screen03_full-24.png");
    rec.load("Rec-Screen_title-24.png");
    button1.load("Screen01_Button-10-24.png");
    button2.load("Rec-Screen_button-24.png");
    button3.load("Review-Screen_button-24.png");
    colGA.load("Screen01_Title-24.png");
    persGS.load("Review-Screen_title-24.png");
    
    
    
    
    receiver.setup(PORT);
    sender.setup(HOST_5, PORT);
    drawscr=0;
    endTime=0;
    width=0;
    pageUno=1;
    
   
        for (int i=0; i<5; i++){
          
    
            img.load("blah"+ofToString(i+1)+"2020-02-20-10-53-21-552.png");
             img.load("blah"+ofToString(i+1)+"2020-02-20-10-55-01-284.png");
            
                screensht.push_back(img);
           }

    
    
    dataBuffer=600;
    ind=0;
    ind2=0;
    ind3=0;
    ind4=0;
    ind5=0;
    ind6=0;
    ind7=0;
    ind8=0;
    ind9=0;
    ind10=0;
    ind11=0;
    ind12=0;
    ind13=0;
    ind14=0;
    
    for (int i=0; i<dataBuffer; i++){
        varX.push_back(0);
        varY.push_back(0);
        varZ.push_back(0);
        varX2.push_back(0);
        varY2.push_back(0);
        varZ2.push_back(0);
        varX3.push_back(0);
        varY3.push_back(0);
        varZ3.push_back(0);
        varX4.push_back(0);
        varY4.push_back(0);
        varZ4.push_back(0);
        varX5.push_back(0);
        varY5.push_back(0);
        varZ5.push_back(0);
        varX6.push_back(0);
        varY6.push_back(0);
        varZ6.push_back(0);
        varX7.push_back(0);
        varY7.push_back(0);
        varZ7.push_back(0);
        varX8.push_back(0);
        varY8.push_back(0);
        varZ8.push_back(0);
        varX9.push_back(0);
        varY9.push_back(0);
        varZ9.push_back(0);
        varX10.push_back(0);
        varY10.push_back(0);
        varZ10.push_back(0);
        varX11.push_back(0);
        varY11.push_back(0);
        varZ11.push_back(0);
        varX12.push_back(0);
        varY12.push_back(0);
        varZ12.push_back(0);
        varX13.push_back(0);
        varY13.push_back(0);
        varZ13.push_back(0);
        varX14.push_back(0);
        varY14.push_back(0);
        varZ14.push_back(0);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    

    
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
            
            X1 = m.getArgAsFloat(0);
            Y1 = m.getArgAsFloat(1);
            Z1 = m.getArgAsFloat(2);

            if (ind <dataBuffer){
                varX[ind]=X1;
                varY[ind]=Y1;
                varZ[ind]=Z1;
                ind++;
            }

            
//            cout<<X1<<endl;
//            cout<<Y1<<endl;
//            cout<<Z1<<endl;
            }
        else if (m.getAddress() == "/host_2"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X2 = m.getArgAsFloat(0);
            Y2 = m.getArgAsFloat(1);
            Z2 = m.getArgAsFloat(2);
                if (ind2 <dataBuffer){
            
                    varX2[ind2]=X2;
                    varY2[ind2]=Y2;
                    varZ2[ind2]=Z2;
                    ind2++;
                    cout <<ind2<<endl;
                }
              
            
//            cout<<X2<<endl;
//            cout<<Y2<<endl;
//            cout<<Z2<<endl;
           
        }
        else if (m.getAddress() == "/host_3"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X3 = m.getArgAsFloat(0);
            Y3 = m.getArgAsFloat(1);
            Z3 = m.getArgAsFloat(2);
            if (ind3 <dataBuffer){
                varX3[ind3]=X3;
                varY3[ind3]=Y3;
                varZ3[ind3]=Z3;
                ind3++;
            }
//            cout<<X3<<endl;
//            cout<<Y3<<endl;
//            cout<<Z3<<endl;
        }
        else if (m.getAddress() == "/host_4"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X4 = m.getArgAsFloat(0);
            Y4 = m.getArgAsFloat(1);
            Z4 = m.getArgAsFloat(2);
            if (ind4 <dataBuffer){
                varX4[ind4]=X4;
                varY4[ind4]=Y4;
                varZ4[ind4]=Z4;
                ind4++;
            }
//            cout<<X4<<endl;
//            cout<<Y4<<endl;
//            cout<<Z4<<endl;
        }
        else if (m.getAddress() == "/host_5"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X5 = m.getArgAsFloat(0);
            Y5 = m.getArgAsFloat(1);
            Z5 = m.getArgAsFloat(2);
            if (ind5 <dataBuffer){
                varX5[ind5]=X5;
                varY5[ind5]=Y5;
                varZ5[ind5]=Z5;
                ind5++;
            }
//            cout<<X5<<endl;
//            cout<<Y5<<endl;
//            cout<<Z5<<endl;
        }
        else if (m.getAddress() == "/host_6"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X6 = m.getArgAsFloat(0);
            Y6 = m.getArgAsFloat(1);
            Z6 = m.getArgAsFloat(2);
            if (ind6 <dataBuffer){
                varX6[ind6]=X6;
                varY6[ind6]=Y6;
                varZ6[ind6]=Z6;
                ind6++;
            }
//            cout<<X6<<endl;
//            cout<<Y6<<endl;
//            cout<<Z6<<endl;
        }
        else if (m.getAddress() == "/host_7"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X7 = m.getArgAsFloat(0);
            Y7 = m.getArgAsFloat(1);
            Z7 = m.getArgAsFloat(2);
            if (ind7 <dataBuffer){
                varX7[ind7]=X7;
                varY7[ind7]=Y7;
                varZ7[ind7]=Z7;
                ind7++;
            }
//            cout<<X7<<endl;
//            cout<<Y7<<endl;
//            cout<<Z7<<endl;
        }
        else if (m.getAddress() == "/host_8"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X8 = m.getArgAsFloat(0);
            Y8 = m.getArgAsFloat(1);
            Z8 = m.getArgAsFloat(2);
            if (ind8 <dataBuffer){
                varX8[ind8]=X8;
                varY8[ind8]=Y8;
                varZ8[ind8]=Z8;
                ind8++;
            }
//            cout<<X8<<endl;
//            cout<<Y8<<endl;
//            cout<<Z8<<endl;
        }
        else if (m.getAddress() == "/host_9"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X9 = m.getArgAsFloat(0);
            Y9 = m.getArgAsFloat(1);
            Z9 = m.getArgAsFloat(2);
            if (ind9 <dataBuffer){
                varX9[ind9]=X9;
                varY9[ind9]=Y9;
                varZ9[ind9]=Z9;
                ind9++;
            }
//            cout<<X9<<endl;
//            cout<<Y9<<endl;
//            cout<<Z9<<endl;
        }
        else if (m.getAddress() == "/host_10"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X10 = m.getArgAsFloat(0);
            Y10 = m.getArgAsFloat(1);
            Z10 = m.getArgAsFloat(2);
            
            if (ind10 <dataBuffer){
                varX10[ind10]=X10;
                varY10[ind10]=Y10;
                varZ10[ind10]=Z10;
                ind10++;
            }
         
//            cout<<X10<<endl;
//            cout<<Y10<<endl;
//            cout<<Z10<<endl;
        }
        else if (m.getAddress() == "/host_11"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X11 = m.getArgAsFloat(0);
            Y11 = m.getArgAsFloat(1);
            Z11 = m.getArgAsFloat(2);
            
            if (ind11 <dataBuffer){
                varX11[ind11]=X11;
                varY11[ind11]=Y11;
                varZ11[ind11]=Z11;
                ind11++;
            }
           
//            cout<<X11<<endl;
//            cout<<Y11<<endl;
//            cout<<Z11<<endl;
        }
        else if (m.getAddress() == "/host_12"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X12 = m.getArgAsFloat(0);
            Y12 = m.getArgAsFloat(1);
            Z12 = m.getArgAsFloat(2);
            if (ind12 <dataBuffer){
                varX12[ind12]=X12;
                varY12[ind12]=Y12;
                varZ12[ind12]=Z12;
                ind12++;
            }
        
//            cout<<X12<<endl;
//            cout<<Y12<<endl;
//            cout<<Z12<<endl;
        }
        else if (m.getAddress() == "/host_13"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X13 = m.getArgAsFloat(0);
            Y13 = m.getArgAsFloat(1);
            Z13 = m.getArgAsFloat(2);
            if (ind13 <dataBuffer){
                varX13[ind13]=X13;
                varY13[ind13]=Y13;
                varZ13[ind13]=Z13;
                ind13++;
            }
//            cout<<X13<<endl;
//            cout<<Y13<<endl;
//            cout<<Y13<<endl;
        }
        else if (m.getAddress() =="/host_14"){
            accelX = m.getArgAsFloat(0);
            //-10. 10.
            
            X14 = m.getArgAsFloat(0);
            Y14 = m.getArgAsFloat(1);
            Z14 = m.getArgAsFloat(2);
            if (ind14 <dataBuffer){
                varX14[ind14]=X14;
                varY14[ind14]=Y14;
                varZ14[ind14]=Z14;
                ind14++;
            }
//            cout<<X14<<endl;
//            cout<<Y14<<endl;
//            cout<<Z14<<endl;
        }
        else {
            // unrecognized message: display on the bottom of the screen
            messageBuffer.push_front(m.getAddress() + ": UNRECOGNIZED MESSAGE");
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    

    
    
    modOfClicks=numOfClicks%5;
    //begining with display
    if (numOfClicks==0 ){
        //ofSetBackgroundAuto(true);
        ofPushMatrix();
        int but1Width=button1.getWidth();
        int but1Height=button1.getHeight();
        int colGaHeight=colGA.getHeight();
        button1.draw(ofGetWidth()-but1Width,ofGetHeight()-but1Height);
        colGA.draw(0,ofGetHeight()-colGaHeight);
        ofPopMatrix();
        ofSetColor(255);
        pageOne.draw(1);
        for (int i=0; i<5; i++){
            ofPushMatrix();
            ofPushStyle();
            int imgWidth=screensht[i].getWidth();
            int imgHeight=screensht[i].getHeight();
            ofSetColor(255);
            ofScale(0.2,0.2);
            screensht[i].draw(i*imgWidth,imgHeight);
            ofPopStyle();
            ofPopMatrix();
            //img.draw(0,0);
        }
    }
    //CHANGE OF SCENES
    
        //instrations page 1
    else if (modOfClicks==1){
          
            //pageUno=0;
          
            ofSetColor(255);
            instrOne.resize(ofGetWidth(),ofGetHeight());
            instrOne.draw(0,0);
        ind=0;
        ind2=0;
        ind3=0;
        ind4=0;
        ind5=0;
        ind6=0;
        ind7=0;
        ind8=0;
        ind9=0;
        ind10=0;
        ind11=0;
        ind12=0;
        ind13=0;
        ind14=0;
       


        
    }
    
    //instractions page2
    else if (modOfClicks==2){//(page==2){
            ofSetColor(255);
            instrTwo.resize(ofGetWidth(),ofGetHeight());
            instrTwo.draw(0,0);
            page = 3;
            
            ofxOscMessage m;
            m.setAddress("/inf");
            m.addIntArg(1);
            sender.sendMessage(m, false);

        for (int i=0; i<dataBuffer; i++){
            varX[i]=0;
            varY[i]=0;
            varZ[i]=0;
            varX2[i]=0;
            varY2[i]=0;
            varZ2[i]=0;
            varX3[i]=0;
            varY3[i]=0;
            varZ3[i]=0;
            varX4[i]=0;
            varY4[i]=0;
            varZ4[i]=0;
            varX5[i]=0;
            varY5[i]=0;
            varZ5[i]=0;
            varX6[i]=0;
            varY6[i]=0;
            varZ6[i]=0;
            varX7[i]=0;
            varY7[i]=0;
            varZ7[i]=0;
            varX8[i]=0;
            varY8[i]=0;
            varZ8[i]=0;
            varX9[i]=0;
            varY9[i]=0;
            varZ9[i]=0;
            varX10[i]=0;
            varY10[i]=0;
            varZ10[i]=0;
            varX11[i]=0;
            varY11[i]=0;
            varZ11[i]=0;
            varX12[i]=0;
            varY12[i]=0;
            varZ12[i]=0;
            varX13[i]=0;
            varY13[i]=0;
            varZ13[i]=0;
            varX14[i]=0;
            varY14[i]=0;
            varZ14[i]=0;
            
        }

       
    }

    //start Recording
    else if (modOfClicks==3 ){//(page==3){
            
            ofxOscMessage m;
            m.setAddress("/inf");
            m.addIntArg(0);
            sender.sendMessage(m, false);
        
        
            float spinX=sin(ofGetElapsedTimef()*.35f);
            float spinY=sin(ofGetElapsedTimef()*.075f);
            cam.begin();

            for (int i=0; i<dataBuffer; i++){
                ofPushMatrix();
                ofSetColor(0);

                myDrawing.draw1(varX[i],varY[i],varZ[i]);
                myDrawing.draw2(varX2[i],varY2[i],varZ2[i]);
                myDrawing.draw3(varX3[i],varY3[i],varZ3[i]);
                myDrawing.draw4(varX4[i],varY4[i],varZ4[i]);
                myDrawing.draw5(varX5[i],varY5[i],varZ5[i]);
                myDrawing.draw6(varX6[i],varY6[i],varZ6[i]);
                myDrawing.draw7(varX7[i],varY7[i],varZ7[i]);
                myDrawing.draw8(varX8[i],varY8[i],varZ8[i]);
                myDrawing.draw9(varX9[i],varY9[i],varZ9[i]);
                myDrawing.draw10(varX10[i],varY10[i],varZ10[i]);
                myDrawing.draw11(varX11[i],varY11[i],varZ11[i]);
                myDrawing.draw12(varX12[i],varY12[i],varZ12[i]);
                myDrawing.draw13(varX13[i],varY13[i],varZ13[i]);
                myDrawing.draw14(varX14[i],varY14[i],varZ14[i]);
                ofPopMatrix();
            }
            cam.end();
        ofPushMatrix();
        ofPushStyle();
        int imgHeight=button2.getHeight();
        int imgWidth=button2.getWidth();
        int recHeight=rec.getHeight();
        ofSetColor(255);
        rec.draw(0,ofGetHeight()-recHeight);
        button2.draw(ofGetWidth()-imgWidth,ofGetHeight()-imgHeight);

        ofPopStyle();
        ofPopMatrix();

        }//end recording and desply with cam view
    
        else if (modOfClicks==4 ){
            
            ofPushMatrix();
            ofPushStyle();
            
            ofSetColor(255);
            int buttonWidth= button3.getWidth();
            int buttonHeight=button3.getHeight();
            
            button3.draw(ofGetWidth()-buttonWidth,ofGetHeight()-buttonHeight);
            ofPopStyle();
            ofPopMatrix();

            
                 float spinX=sin(ofGetElapsedTimef()*.35f);
                 float spinY=sin(ofGetElapsedTimef()*.075f);
                 cam.begin();
                 for (int i=0; i<dataBuffer; i++){
                     ofPushMatrix();
                     ofSetColor(0);
                     
                    ofRotateXRad(spinX);
                    ofRotateYRad(spinY);

                     myDrawing.draw1(varX[i],varY[i],varZ[i]);
                     myDrawing.draw2(varX2[i],varY2[i],varZ2[i]);
                     myDrawing.draw3(varX3[i],varY3[i],varZ3[i]);
                     myDrawing.draw4(varX4[i],varY4[i],varZ4[i]);
                     myDrawing.draw5(varX5[i],varY5[i],varZ5[i]);
                     myDrawing.draw6(varX6[i],varY6[i],varZ6[i]);
                     myDrawing.draw7(varX7[i],varY7[i],varZ7[i]);
                     myDrawing.draw8(varX8[i],varY8[i],varZ8[i]);
                     myDrawing.draw9(varX9[i],varY9[i],varZ9[i]);
                     myDrawing.draw10(varX10[i],varY10[i],varZ10[i]);
                     myDrawing.draw11(varX11[i],varY11[i],varZ11[i]);
                     myDrawing.draw12(varX12[i],varY12[i],varZ12[i]);
                     myDrawing.draw13(varX13[i],varY13[i],varZ13[i]);
                     myDrawing.draw14(varX14[i],varY14[i],varZ14[i]);
                     ofPopMatrix();
                 }
                 cam.end();
            page=0;
       
                 
        }

            
    else if (modOfClicks==0 && page==0){
        
        
        
        ofPushMatrix();
        ofPushStyle();
        int but1Width=button1.getWidth();
        int but1Height=button1.getHeight();
        int colGaHeight=colGA.getHeight();
        button1.draw(ofGetWidth()-but1Width,ofGetHeight()-but1Height);
        colGA.draw(0,ofGetHeight()-colGaHeight);
        ofPopStyle();
        ofPopMatrix();
        pageOne.draw(1);
        

        
                   for (int i=0; i<5; i++){
                       ofPushMatrix();
                       ofPushStyle();
                       int imgWidth=screensht[i].getWidth();
                       int imgHeight=screensht[i].getHeight();
                       ofSetColor(255);
                       ofScale(0.2,0.2);
                       screensht[i].draw(i*imgWidth,imgHeight);
                       ofPopStyle();
                       ofPopMatrix();


                   }
        
 
    }
    cout<< ind<<endl;
//    cout<< modOfClicks<< endl;
//
//    cout<< page<< endl;
//   cout << ofGetElapsedTimeMillis()<<endl;
//    cout << startTime <<endl;

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key=='s'){
      //  pageOne.takeScreenshot(1);
    }
    if (key==' '){
        numOfClicks++;
        if (numOfClicks%5==4){
            pageOne.takeScreenshot(1);
           
        }
        if (numOfClicks%5==0){
            ind=0;
        }

        startTime=ofGetElapsedTimeMillis();
       
        
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
