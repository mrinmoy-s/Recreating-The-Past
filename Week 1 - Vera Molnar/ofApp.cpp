#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //Matching the background color with that of the original artwork
    ofBackground(245,254,230);
    ofSetColor(0, 0, 0);
    
    ofSeedRandom(mouseX*100);
    ofNoFill();
    
    //Counter will store the number of columns/rows of circles that will be generated
    int counter=3;
    for(int i=0;i<counter;i++){
        for(int j=0; j<counter; j++){
            float x = ofMap(i, 0, counter, 100, 350);
            float y = ofMap(j, 0, counter, 100, 350);
            {
                //all circles on the diagonal running through the top-left to bottom-right will be colored in a shade of red, similar to the original
                if (x==y){
                    ofFill();
                    ofSetColor(253,25,13);
                    ofDrawCircle(x,y,42);
                }
                else{
                //remaining circles are filled with darker shades akin to the original, with the addition of some relatively brighter colors
                    ofFill();
                    ofSetColor(17+ofRandom(2, 100),17+ofRandom(2, 50),17+ofRandom(2, 50));
                    ofDrawCircle(x,y,42);
                //42 is the answer to life, the universe, and everything - but what is the question?
                }
                }
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
