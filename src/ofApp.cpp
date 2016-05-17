#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetFrameRate(60);
    ofBackground(0);
    cam.setDistance(80);
    
    
    N = 1000;
    scale = 0.003f;
    p = 11.0f;
    r = 28.0f;
    b = 2.66f;
    
    x0 = y0 = z0 = 1;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    points.clear();  //毎回クリアする
    indices.clear();
    
    xn = x0; yn = y0; zn = z0;
    
    for(int i=0; i < N; i++){
        xn1 = xn + scale * p * (yn - xn);
        yn1 = yn + scale * (xn * (r - zn) - yn);
        zn1 = zn + scale * (xn * yn - b * zn);
        
        xn = xn1; yn = yn1; zn = zn1;
        
        points.push_back(ofVec3f(xn, yn, zn));
        indices.push_back(i);  // インデックスデータ
        
        if(i == 100){
            x0 = zn; y0 = yn; z0 =  zn;
        }
        
    }
    
    vbo.setVertexData( &points[0], (int)points.size(), GL_DYNAMIC_DRAW);
    vbo.setIndexData( &indices[0], (int)indices.size(), GL_DYNAMIC_DRAW);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    glTranslatef( 0, 0, 0);
    
    ofSetColor(255, 255, 255);
    
    vbo.drawElements(GL_POINTS, (int)points.size());
    
    
    cam.end();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'n'){
        N += 1000;
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
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
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
