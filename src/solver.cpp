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
    int n = 32; // 32 個の四角で1つのうずを書く
    int m = 9;  // 3 回巻く
    
    for(int h = 0; h < m; h = h + 1) {
        for(int i = 0; i < n; i++) {
            
            float theta = i * (2 * 3.14 / n);
            float r = 80 / (m * n) * i + 80 / m * h;
            particle_position[i].x  = cos(theta)*r + 200;
            particle_position[i].y =  sin(theta)*r + 200;
        }
    }
    
}

vector <ofVec3f> Solver::getParticlePosition(){
    return particle_position;
}