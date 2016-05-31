#pragma once

#include "ofMain.h"
#include "solver.h"
#include "visualizer.h"
#include "RandomWalker.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		static const int PARTICLE_NUM = 1000;
    
    float increaseRate;
    float ang;
    
		Solver solver = Solver(PARTICLE_NUM);
		Visualizer visualizer;
    RandomWalker randomWalker;
    
    
    ofEasyCam cam;
};
