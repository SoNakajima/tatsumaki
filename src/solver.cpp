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
    int n = 100; // 32 個の四角で1つのうずを書く
    int m = 3;  // 3 回巻く
    
    for(int h = 0; h < m; h = h + 1) {
        for(int i = 0; i < n; i++) {
            
            float theta = i * (2 * 3.14 / n);
            //float r = 120 / (m * n) * i + 120 / m * h;
            float r = 30;
            particle_position[i].x = cos(theta)*r*theta + 200;
            particle_position[i].y = sin(theta)*r*theta + 200;
            particle_position[i].z = i;
        }
    }
    
}

vector <ofVec3f> Solver::getParticlePosition(){
    return particle_position;
}