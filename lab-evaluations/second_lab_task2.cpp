#include <GL/glut.h>
#include <cmath>

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 600);
}

void drawCircle(float cx, float cy, float radius,
                float r, float g, float b)
{
    glColor3f(r, g, b);

    glLineWidth(20);
    glBegin(GL_LINES);
	
        for (int i = 0; i <= 150; i++)
        {
            float angle = 2.0f * 3.14159f * i / 150;
		
	    glVertex2f(cx,cy);
            glVertex2f(
                cx + radius * cos(angle),
                cy + radius * sin(angle)
            );
        }
	

    glEnd();
}

void display()
{
    glClearColor(0.8f, 0.8f, 0.8f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    // ================= RUSSIAN FLAG =================
    // White, blue, red

    glBegin(GL_QUADS);

        // Bottom red stripe
        glColor3f(1, 0, 0);
        glVertex2f(400, 400);
        glVertex2f(600, 400);
        glVertex2f(600, 430);
        glVertex2f(400, 430);

        // Middle blue stripe
        glColor3f(0, 0, 1);
        glVertex2f(400, 430);
        glVertex2f(600, 430);
        glVertex2f(600, 460);
        glVertex2f(400, 460);

        // Top white stripe
        glColor3f(1, 1, 1);
        glVertex2f(400, 460);
        glVertex2f(600, 460);
        glVertex2f(600, 490);
        glVertex2f(400, 490);

    glEnd();


    // ================= INDONESIAN FLAG =================
    // Red on top, white on bottom

    glBegin(GL_QUADS);

        // Bottom white stripe
        glColor3f(1, 1, 1);
        glVertex2f(400, 250);
        glVertex2f(600, 250);
        glVertex2f(600, 295);
        glVertex2f(400, 295);

        // Top red stripe
        glColor3f(1, 0, 0);
        glVertex2f(400, 295);
        glVertex2f(600, 295);
        glVertex2f(600, 340);
        glVertex2f(400, 340);

    glEnd();


    // ================= IRISH FLAG =================
    // Green, white, orange

    glBegin(GL_QUADS);

        // Left green stripe
        glColor3f(0, 0.6f, 0.3f);
        glVertex2f(100, 400);
        glVertex2f(160, 400);
        glVertex2f(160, 490);
        glVertex2f(100, 490);

        // Middle white stripe
        glColor3f(1, 1, 1);
        glVertex2f(160, 400);
        glVertex2f(220, 400);
        glVertex2f(220, 490);
        glVertex2f(160, 490);

        // Right orange stripe
        glColor3f(1, 0.5f, 0);
        glVertex2f(220, 400);
        glVertex2f(280, 400);
        glVertex2f(280, 490);
        glVertex2f(220, 490);

    glEnd();


    // ================= BANGLADESHI FLAG =================
    // Green background with red circle

    glBegin(GL_QUADS);

        glColor3f(0, 0.42f, 0.25f);
        glVertex2f(100, 250);
        glVertex2f(300, 250);
        glVertex2f(300, 370);
        glVertex2f(100, 370);

    glEnd();

    // Red circle
    drawCircle(195, 310, 35, 1, 0, 0);


    // ================= JAPANESE FLAG =================
    // White background with red circle

    glBegin(GL_QUADS);

        glColor3f(1, 1, 1);
        glVertex2f(700, 250);
        glVertex2f(900, 250);
        glVertex2f(900, 370);
        glVertex2f(700, 370);

    glEnd();

    // Red circle
    drawCircle(800, 310, 35, 0.8f, 0, 0);


    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);
    glutInitWindowSize(1000, 600);

    glutCreateWindow("Five Simple Flags");

    init();

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}

