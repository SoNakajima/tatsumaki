//
//  solver.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/17.
//
//

#include <stdio.h>
#include "solver.h"

void Solver::calcUpdate(float _ang){

    for(int i=0; i<particle_position.size(); i++){
        ang = _ang+i;
        particle_position[i].x = ang * cos(ang);
        particle_position[i].y = ang * sin(ang);
        particle_position[i].z = ang * 4;
    }
    
    
}

vector <ofVec3f> Solver::getParticlePosition(){
    return particle_position;
}