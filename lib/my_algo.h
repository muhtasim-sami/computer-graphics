
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


void make_any_shape(int lines, int *arr){

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
