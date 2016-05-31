//
//  visualizer.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/17.
//
//

#include <stdio.h>
#include "visualizer.h"


// basePos がわかりづらい
void Visualizer::drawParticles(vector <ofVec3f> particle_position,ofVec2f basePos){
    
    g = 200-abs(basePos.x*0.2);
    
    b = 255-abs(basePos.y*0.2);
    
    
    for(int i=0; i<particle_position.size(); i++){
        ofSetColor(255-i*0.1,g,b);
        ofPushMatrix();
        ofRotate(-90, 1, 0, 0);
        ofTranslate(basePos.x, basePos.y, -2500);

        ofDrawSphere(particle_position[i].x,particle_position[i].y,particle_position[i].z,15);
        
        ofPopMatrix();
    }
    
}