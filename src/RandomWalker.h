
#include <stdio.h>
#include "ofMain.h"

class RandomWalker{
    
public:
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f prev_pos;
    
    
    RandomWalker();
    
    void update();
    void randomizeVelocity();
    
};
