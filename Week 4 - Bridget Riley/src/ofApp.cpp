#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(151, 156, 151);
    ofSetWindowShape(1024, 768);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetCircleResolution(128);
    for(int i=0;i<20;i++){ //columns
        for(int j=0; j<10; j++){ //rows
            float xPct1 = ofMap(i,0,20,0,1);
            xPct1 = powf(xPct1, mouseX*0.1);

            float xPct2 = ofMap(i+1,0,20,0,1);
            xPct2 = powf(xPct2, mouseX*0.1);

            float x = ofMap(xPct1,0,1,0,ofGetWidth());
//          float x2 = ofMap(xPct2,0,1,0,ofGetWidth());

            float y = ofMap(j,0,30,0,ofGetWidth());
            
            if (i%2==0 & j%2==0){
                ofSetColor(0);
            }
            else if (i%2==1 && j%2==1){
                ofSetColor(0);
            }
            else{
                ofSetColor(151, 156, 151);
            }
//            if (i>6 && i<14){
//                ofDrawEllipse(i*40+100+mouseX*0.01, j*40+100, 40*sin(ofRandom(20)), 40*sin(ofRandom(20)));
//            }
//            else{
                ofDrawCircle(x+i*30+100+mouseX*0.01, y+j*30+100, 15);
//            }
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
