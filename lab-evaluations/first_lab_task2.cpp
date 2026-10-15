#include <GL/glut.h>

void init(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 400, 0, 400);		// now it will work as a matrix pixel by pixel
						// now can not denote any vertex in fraction
}

void display() {
    	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);

	//glPointSize(10);
	//glBegin(GL_POINTS);

	glLineWidth(10);
	glBegin(GL_POLYGON); 			// Points lines polygon


	glColor3f(1,0,0);
	glVertex2f(50,50);

	glColor3f(1,0,0);
	glVertex2f(80, 250);
	

	glColor3f(1,0,0);
	glVertex2f(50,50);

	glColor3f(1,0,0);
	glVertex2f(250, 50);


	glColor3f(1,0,0);
	glVertex2f(220, 250);

	glColor3f(1,0,0);
	glVertex2f(80,250);

	glColor3f(1,0,0);
	glVertex2f(200, 250);

	glColor3f(1,0,0);
	glVertex2f(250,50);

	/*
	glPointSize(10);
	glBegin(GL_POINTS);

	glColor3f(1,0,0);
	glVertex2f(50, 50);

	glColor3f(1,0,0);
	glVertex2f(150,150);
	*/

	glEnd();
	
    	// clears the buffer
    	glFlush();
}

int main(int argc, char** argv) {
	//init();
	glutInit(&argc, argv);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL First Lab");
	init();						// before drawing, turn it into matrix mode
							// now .5, -.5 will not work
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
