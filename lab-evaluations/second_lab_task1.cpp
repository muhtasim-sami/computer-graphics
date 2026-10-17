#include <GL/glut.h>

void init() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 400);
}

void display() {
    glClearColor(1, 1, 1, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    float colors[7][3] = {
        {1.0, 0.0, 0.0},       // Red
        {1.0, 1.0, 0.0},       // Yellow
        {0.969, 0.588, 0.278}, // Orange
        {0.0, 0.686, 0.314},   // Green
        {0.290, 0.675, 0.773}, // Sky blue
        {0.310, 0.506, 0.737}, // Blue
        {0.502, 0.392, 0.631}  // Purple
    };

    float y = 100;
    float gap = 15;
    float width = 200;
    float height = 15;

    for (int i = 0; i < 7; i++) {
        glColor3f(colors[i][0], colors[i][1], colors[i][2]);

        glBegin(GL_QUADS);
            glVertex2f(100, y);
            glVertex2f(100 + width, y);
            glVertex2f(100 + width, y + height);
            glVertex2f(100, y + height);
        glEnd();

        y += gap;
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL First Lab");

    init();

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

