
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

void make_polygon(char *col,int lines, int *arr){

	glLineWidth(10);
	glBegin(GL_POLYGON); 		
	glColor3f(col[0],col[1],col[2]);		

	for (int i = 0; i <= 2 * (lines - 1); i = i + 2)
	{
		glVertex2f(arr[i], arr[i+1]);
		//glVertex2f(arr[(i+2)%(2*lines)], arr[(i+3)%(2*lines)]); 
	}

	glEnd();
}

