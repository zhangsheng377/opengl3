//
// solarsystem.hpp
// solarsystem
//
#include <GL/glut.h>

#include "stars.hpp"

#define STARS_NUM 10

class SolarSystem {

public:

    SolarSystem();
    ~SolarSystem();

    void onDisplay();
    void onUpdate();
    void onKeyboard(unsigned char key, int x, int y);

private:
    Star *stars[STARS_NUM];
	
	int viewX ;
    int viewY ;
    int viewZ ;
    int centerX , centerY , centerZ ;
    int upX , upY ;
    int upZ ;
};