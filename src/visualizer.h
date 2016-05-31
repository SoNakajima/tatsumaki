#include <vector>
#include "ofMain.h"

class Visualizer
{
public:
	Visualizer(){};
	~Visualizer(){};

	void setupDrawStyle();
	void drawParticles(vector <ofVec3f> particle_position,ofVec2f basePos);
	void drawParticlesColorFromVelocity(vector <ofVec3f> particle_position, vector <ofVec3f> particle_velocity);

	/* data */
};