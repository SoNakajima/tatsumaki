#include <vector>
#include "ofMain.h"

class Visualizer
{
public:
	Visualizer(){};
	~Visualizer(){};

	void setupDrawStyle();
	void drawParticles(vector <ofVec3f> particle_position);
	void drawParticlesColorFromVelocity(vector <ofVec3f> particle_position, vector <ofVec3f> particle_velocity);

	/* data */
};