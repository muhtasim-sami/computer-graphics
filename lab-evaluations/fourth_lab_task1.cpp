#include <GL/glut.h>

void init(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 400, 0, 400);		// now it will work as a matrix pixel by pixel
}

void make_border(int lines, int *arr){

	glLineWidth(10);
	glBegin(GL_LINES); 		
	glColor3f(0,0,0);		

	for (int i = 0; i <= 2 * (lines - 1); i = i + 2)
	{
		glVertex2f(arr[i], arr[i+1]);
		glVertex2f(arr[(i+2)%(2*lines)], arr[(i+3)%(2*lines)]); 
	}

	glEnd();
}

void display() {

	int arr1[] = {70,60,70,160,120,110};
	int arr2[] = {60,50,30,30,90,30};   	
	int arr3[] = {60,180,100,220,70,250,30,210};
	int arr4[] = {70,170,110,210,140,180,100,140};
	
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);

	make_border(3,arr1);		// largest triangle
	make_border(3,arr2);		// bottom thiangle
	make_border(4,arr3);		// top rectangle
	make_border(4,arr4);		// second top rectangle 
	
	glEnd();
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
