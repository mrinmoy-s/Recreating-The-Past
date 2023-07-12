#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
        ofBackground(0); // Set background color to black
        int sideLength = 280;
        int sideInterval = 40; //This factor decreases the length of the triangles in the loop
        int colorFactor = 40*(sin(ofGetMouseY()*0.05));
        // Create top rectangle
        ofSetColor(4+colorFactor,123+colorFactor,57+colorFactor,255);
        ofDrawRectangle(ofGetWidth()/2 - sideLength + sideInterval, ofGetHeight()/3 + sideInterval, 450, 200);
        
        // Create bottom rectangle
        ofSetColor(0+colorFactor,148+colorFactor,148+colorFactor,255);
        ofDrawRectangle(ofGetWidth()/2 - sideLength + sideInterval, ofGetHeight()/3 + sideInterval + 200, 450, 200);
        
        //Create the biggest equilateral triangle first and then the smaller ones iteratively
        int leftVertex_x_CONST = ofGetWidth()/2-sideLength/2;
        int leftVertex_y_CONST = ofGetHeight()/2 + (sqrt(3)*sideLength/2);
        int topVertex_x = ofGetWidth()/2;
        int topVertex_y = ofGetHeight()/2;
        int rightVertex_x = ofGetWidth()/2+sideLength/2;
        int rightVertex_y = ofGetHeight()/2 + (sqrt(3)*sideLength/2);
        ofSetColor(188,134,26,255);
        ofDrawTriangle(leftVertex_x_CONST, leftVertex_y_CONST, topVertex_x, topVertex_y, rightVertex_x, rightVertex_y);
        
        ofEnableAlphaBlending();
        for(int i=1;i<5;i++){
            ofSetColor(190+i*10*sin(ofGetMouseX()*0.1),120+i*10*cos(ofGetMouseX()*0.1),30+i*10*sin(ofGetMouseX()*0.1),255);
            topVertex_x = topVertex_x - sideInterval/2;
            topVertex_y = topVertex_y + (sqrt(3)*sideInterval/2);
            rightVertex_x = rightVertex_x - sideInterval;

            ofDrawTriangle(leftVertex_x_CONST, leftVertex_y_CONST, topVertex_x, topVertex_y, rightVertex_x, rightVertex_y);

        }
        ofDisableAlphaBlending();

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
