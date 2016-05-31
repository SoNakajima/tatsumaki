#include <vector>
#include "ofMain.h"

class Solver
{
public:
	Solver(int particle_num=100) : particle_position(particle_num){
		printf("particle_num=%lu\n", particle_position.size());
	};
	~Solver(){};

	void calcUpdate();
	vector <ofVec3f> getParticlePosition();
	vector <ofVec3f> getParticleVelocity();

private:

	/* data */
	vector <ofVec3f> particle_position;
    float ang;
    float increaseRate = TWO_PI / 60;

};
