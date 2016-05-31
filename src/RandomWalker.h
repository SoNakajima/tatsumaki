
#include <stdio.h>
#include "ofMain.h"

class RandomWalker{
    
public:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f prev_pos;
    
    
    RandomWalker();
    
    void update(){
        randomizeVelocity();
        pos.x = prev_pos.x + vel.x;
        pos.y = prev_pos.y + vel.y;
        
        prev_pos.x = pos.x;
        prev_pos.y = pos.y;
        
    }
    
private:
    void randomizeVelocity(){
        vel.set( ofRandom(-1,1), ofRandom(-1,1) );
        vel *= 20;
        
    }
    
};
