//
//  ramdom_walker.cpp
//  tatsumaki
//
//  Created by so nakajima on 2016/05/31.
//
//

#include "RandomWalker.h"


RandomWalker::RandomWalker(){
    
    pos = ofVec2f();
    vel = ofVec2f();
    prev_pos = ofVec2f();
    
}

void RandomWalker::update(){
    randomizeVelocity();
    pos.x = prev_pos.x + vel.x;
    pos.y = prev_pos.y + vel.y;
    
    prev_pos.x = pos.x;
    prev_pos.y = pos.y;
}

void RandomWalker::randomizeVelocity(){
    vel.set( ofRandom(-1,1), ofRandom(-1,1) );
    vel *= 30;
}
