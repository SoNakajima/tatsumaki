#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    ofEasyCam cam;
    ofVbo vbo;
    
    float scale;
    float p, r, b; //任意定数
    double xn, yn, zn, xn1, yn1, zn1, x0, y0, z0;  //１５桁
    int N;
    
    
    vector<ofVec3f> points;
    vector<ofIndexType> indices;
    
};
