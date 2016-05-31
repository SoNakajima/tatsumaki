#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    cam.setDistance(5500);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    solver.calcUpdate();
    randomWalker.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    visualizer.drawParticles(solver.getParticlePosition(),randomWalker.pos);
    cam.end();
    
    ofSetColor(0);
    ofDrawBitmapString("g = "+ofToString(visualizer.g), 20, 20);
    ofDrawBitmapString("b = "+ofToString(visualizer.b), 20, 40);
    ofDrawBitmapString(ofToString(ofGetFrameRate()), 20,60);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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