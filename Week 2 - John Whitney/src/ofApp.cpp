#include "ofApp.h"
#define NUM_CIRCLES 30
ofPolyline circle[NUM_CIRCLES];
int innerCircleSize = 50;
int circleRes = 30;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(800, 800);
    ofBackground(20);
    
//    //draw circles
//    for(int i=0; i < NUM_CIRCLES; i++){
//
//        innerCircleSize = innerCircleSize + 30;
//        circle[i].arc(ofGetWidth()/2, ofGetHeight()/2, innerCircleSize, innerCircleSize, 0, 360, circleRes);
//        circle[i].setClosed(true);
//      }
    }

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofNoFill();
//    ofSetLineWidth(1);
//    ofSetColor(255,0,0);
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); //bringing the sketch to the center of the screen
//    ofDrawLine(sin(ofGetElapsedTimef()/10)*10, cos(ofGetElapsedTimef()/10)*10, 200, 300);
//    float xorig = 400;
//    float yorig = 400;
//    float radius = 200;
//    float angle = ofGetElapsedTimef();
//    float x =  xorig + radius*cos(angle);
//    float y = yorig + radius*sin(angle);
//
//    trail.addVertex(x,y);
//    trail.draw();
//
//    ofDrawCircle(x, y, 10);
//
//    for(int i=0; i < NUM_CIRCLES; i++){
//         circle[i].draw();
//    }
//    ofSeedRandom(mouseX);
    ofSetLineWidth(3);
    ofSetCircleResolution(128);
    for(float i=0; i<NUM_CIRCLES; i++){
        ofNoFill();
        ofSetColor(ofRandom(50,240), ofRandom(50,240), ofRandom(50,240));
        ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2, sin(ofGetElapsedTimef()/100)+i*(20*cos(ofGetElapsedTimef())));
//        ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
//        ofSetColor(255);
//        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, sin(ofGetElapsedTimef()/100)+i*(10*cos(ofGetElapsedTimef())));
//        ofDisableBlendMode();
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
