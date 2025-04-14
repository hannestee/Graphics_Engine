#include <Windows.h>
#include <gl/GL.h>

#include <iostream>
#include <SDL.h>
#include "Screen.h"

bool isAppRunning = true;


int main(int argc, char* argv[])
{
	Screen::Instance()->Initialize();

	//===============================================================
	//main app loop
	while (isAppRunning)
	{
		Screen::Instance()->ClearScreen();

		glBegin(GL_QUADS);
			
			//top left color and vertex of quad
			glColor3f(1, 0, 0);
			glVertex3f(-0.5f, 0.5f, 0.0f);

			//top right color and vertex of quad
			glColor3f(0, 1, 0);
			glVertex3f(0.5f, 0.5f, 0.0f);

			//bottom right color and vertex of quad
			glColor3f(0, 0, 1);
			glVertex3f(0.5f, -0.5f, 0.0f);

			//bottom left color and vertex of quad
			glColor3f(0, 0, 1);
			glVertex3f(-0.5f, -0.5f, 0.0f);


		glEnd();

		Screen::Instance()->Present();
		
		
	}
	//===============================================================
	
	Screen::Instance()->Shutdown();

	system("pause");
	return 0;
}