/*
	Minimalistic OpenGL window to check installation
	Shows a blue window
	author: Nazmus Saquib <saquib2527@gmail.com>
	date: 25/02/2015

	I tried to keep the code as minimal as possible, don't take it as a template -
	as I have used a lot of default configurations which are not otherwise specified.
*/

/*required for windows, must be included before glut.h*/
#include <windows.h>
/*include glut.h*/
#include <GL/glut.h>

/*
	performs one time initializations
*/
void init(void){

	glClearColor(0.0, 0.0, 1.0, 0.0);//background color

}

/*
	display function
	called by OpenGL when deemed necessary
*/
void display(void){

	glClear(GL_COLOR_BUFFER_BIT);//clear the color buffer i.e. refresh frame
	glFlush();//flush buffer

}

int main(int argc, char** argv){

	glutInit(&argc, argv); //initialize glut
	glutCreateWindow("Test Blue Window"); //create window

	/*
		put stuffs initialized only once here
		not required, but a good practice nonetheless
	*/
	init();
	
	/*
		assign handlers
		here I've assigned only the display function to keep it simple
		this function is called by OpenGL when it thinks it needs to redisplay the screen
		notice you can never precisely tell when it will be called
	*/
	glutDisplayFunc(display);

	/*the perpetual glut loop*/
	glutMainLoop();

	return 0;

}
