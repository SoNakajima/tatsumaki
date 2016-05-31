//
//  visualizer.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/17.
//
//

#include <stdio.h>
#include "visualizer.h"



void Visualizer::drawParticles(vector <ofVec3f> particle_position,ofVec2f basePos){
    
    
    for(int i=0; i<particle_position.size(); i++){
        ofSetColor(255-i*10,255,255);
        ofPushMatrix();
        ofRotate(-90, 1, 0, 0);
        ofTranslate(basePos.x, basePos.y, -2500);
        ofTranslate(particle_position[i].x+ofRandom(-5, 5),particle_position[i].y+ofRandom(-5, 5), particle_position[i].z+ofRandom(-5,5));
        ofDrawSphere(0,0,0,15);
        ofPopMatrix();
    }
    
}