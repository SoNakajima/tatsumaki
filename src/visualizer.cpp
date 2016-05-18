//
//  visualizer.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/17.
//
//

#include <stdio.h>
#include "visualizer.h"
#include "solver.h"



void Visualizer::drawParticles(vector <ofVec3f> particle_position){
    
    
    for(int i=0; i<100; i++){
        ofSetColor(255-i*10,255,255);
        ofPushMatrix();
        ofTranslate(particle_position[i]);
        ofDrawCircle(particle_position[i], 3);
        ofPopMatrix();
    }
    
}