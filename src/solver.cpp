//
//  solver.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/17.
//
//

#include <stdio.h>
#include "solver.h"

void Solver::calcUpdate(){
    
    ang += increaseRate;
    if(ang>TWO_PI) ang = 0;

    for(int i=0; i<particle_position.size(); i++){
<<<<<<< Updated upstream
        ang = _ang+i;
        particle_position[i].x = ang * cos(ang);
        particle_position[i].y = ang * sin(ang);
//        particle_position[i].z = pow(ang, 1.35);
        particle_position[i].z = ang * 4;
=======
        
        particle_position[i].x = (ang+i) * cos(ang+i);
        particle_position[i].y = (ang+i) * sin(ang+i);
        particle_position[i].z = (ang+i) * 4;
>>>>>>> Stashed changes
    }
    
}

vector <ofVec3f> Solver::getParticlePosition(){
    return particle_position;
}