#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    einstein.load("einstein.jpg");
    einstein.resize(600, 600);
    ofSetWindowShape(1200, 1200);
    font.load("Helvetica.ttf", 12);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    einstein.draw(0,0);
    
    float threshold = 0.8; // set the brightness threshold
    for (int x = 0; x < einstein.getWidth(); x++) {
        for (int y = 0; y < einstein.getHeight(); y++) {
            ofColor color = einstein.getPixels().getColor(x, y);
            float brightness = color.getBrightness()/260; // normalize the brightness value
//            ofTranslate(x, y);
//            ofRotateZDeg(ofMap(brightness, 0, 255, 0, mouseX));
            if (brightness > threshold) {
                char c = 'E';
                if (x % 2 == 0 && y % 2 == 0) {
                    c = 'm';
                } else if (x % 2 == 0) {
                    c = 'c';
                } else if (y % 2 == 0) {
                    c = '2';
                }
//                ofPushMatrix();
//                ofTranslate(x, y);
//                ofRotateZDeg(mouseX*0.01);
                font.drawString(ofToString(c), x, y);
//                ofPopMatrix();
            }
        }
    }
    einstein.draw(600, 0);


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
