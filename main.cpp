//
//  main.cpp
//  solarsystem
//
#include <GL/glut.h>
#include "solarsystem.hpp"
#include <stdio.h>

#define WINDOW_X_POS 50
#define WINDOW_Y_POS 50
#define WIDTH 700
#define HEIGHT 700

SolarSystem solarsystem;

void onDisplay(void) {
    solarsystem.onDisplay();
}
void onUpdate(void) {
    solarsystem.onUpdate();
}
void onKeyboard(unsigned char key, int x, int y) {
    solarsystem.onKeyboard(key, x, y);
}

int main(int argc, char*  argv[]) {
	//printf("00000\n");
    glutInit(&argc, argv);
	//printf("11111\n");
    glutInitDisplayMode(GLUT_RGBA |  GLUT_DOUBLE);
    glutInitWindowPosition(WINDOW_X_POS, WINDOW_Y_POS);
    glutCreateWindow("SolarSystem at Shiyanlou");
    glutDisplayFunc(onDisplay);
    glutIdleFunc(onUpdate);
    glutKeyboardFunc(onKeyboard);
    glutMainLoop();
    return 0;
}