#include <GL/freeglut.h>

void Refresh(void)
{
	
}

void Keyboard(unsigned char key, int x, int y)
{
	
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv); 		// GLUT initialization.
	glutInitDisplayMode(GLUT_RGBA); 	// DisplayMode initialization.
	glutInitWindowSize(800, 600);   	// WindowSize Initialization.
	glutInitWindowPosition(0, 0);   	// WindowPosition Initialization.

	glutCreateWindow("My GLUT Window");	// Creation of the window.

	glutDisplayFunc(&Refresh); 		// Window’s callback
	glutKeyboardFunc(&Keyboard); 		// Keyboard’s callback
	glutMainLoop();				// Infinity loop

	return 0;
}