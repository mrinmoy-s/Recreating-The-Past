#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    font.load("Helvetica.ttf", 30, true, true, true); //for vector
//    font.load("Helvetica.ttf", 30); //for raster
    font.setLetterSpacing(0.8);
    ofBackground(235,224,196);
//    ofSetWindowShape(650, 750); // for raster
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
// //beginning of raster fonts WITHOUT ANIMATION
//    ofSetColor(42,42,34);
//        for(int i=0; i<20; i++){
//            font.drawString("MULTIPLE", 100, 50+i*35);
//            font.drawString("INTERACTION", 280, 50+i*35);
//            font.drawString("INTERACTION", 290, 50+i*35);
//        }
// //end of raster fonts WITHOUT ANIMATION
//
// //beginning of raster fonts WITH ANIMATION
//    ofSetColor(42,42,34);
//        for(int i=0; i<20; i++){
//            font.drawString("MULTIPLE", 100, 50+i*35);
//            font.drawString("INTERACTION", 280, 50+i*35);
//            font.drawString("INTERACTION", 290+2*sin(ofGetElapsedTimef()*5), 50+i*35);
//        }
// //end of raster fonts  WITH ANIMATION
    
 //beginning of vector fonts
    ofEnableDepthTest();
    cam.begin();
        ofSetColor(42,42,34);
        ofPushMatrix();
            ofScale(1,-1);
            vector < ofPath > path1 = font.getStringAsPoints("MULTIPLE");
            ofTranslate(-400,-300);
            for(int i=0; i<20; i++){
                ofTranslate(0,50);
                for(int j=0; j<path1.size();j++){
                    path1[j].draw();
                }
            }
            vector < ofPath > path2 = font.getStringAsPoints("INTERACTION");
            ofTranslate(185, -1000);
            for(int i=0; i<20; i++){
                ofTranslate(0,50);
                for(int j=0; j<path2.size();j++){
                    path2[j].draw();
                }

            }
            vector < ofPath > path3 = font.getStringAsPoints("INTERACTION");
            ofTranslate(7, -1000);
            for(int i=0; i<20; i++){
                ofTranslate(0+2*sin(ofGetElapsedTimef()*5)-2*sin(ofGetElapsedTimef()*5)*i/9,50);
                for(int j=0; j<path3.size();j++){
                    path3[j].draw();
                }

            }
        ofPopMatrix();
//same, but on a different plan, rotated 90deg in Y
    ofPushMatrix();
    ofRotateYDeg(90);
        ofScale(1,-1);
        vector < ofPath > path4 = font.getStringAsPoints("MULTIPLE");
        ofTranslate(0,-300,40);
        for(int i=0; i<20; i++){
            ofTranslate(0,50);
            for(int j=0; j<path4.size();j++){
                path4[j].draw();
            }
        }
        vector < ofPath > path5 = font.getStringAsPoints("INTERACTION");
        ofTranslate(185,-1000,0);
        for(int i=0; i<20; i++){
            ofTranslate(0,50);
            for(int j=0; j<path5.size();j++){
                path5[j].draw();
            }

        }
        vector < ofPath > path6 = font.getStringAsPoints("INTERACTION");
        ofTranslate(7, -1000);
        for(int i=0; i<20; i++){
            ofTranslate(0+2*sin(ofGetElapsedTimef()*5)-2*sin(ofGetElapsedTimef()*5)*i/9,50);
            for(int j=0; j<path6.size();j++){
                path6[j].draw();
            }

        }
    ofPopMatrix();
    cam.end();
 //end of vector fonts
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
