#include <stdio.h>
#include <stdlib.h>
#include <GL/glx.h>    
#include <GL/gl.h>
#include <GL/glut.h>
#include<string.h>
int width = 650, height = 650;

void *font =GLUT_BITMAP_HELVETICA_12;
void *fonts[] =
{
GLUT_BITMAP_9_BY_15,
GLUT_BITMAP_TIMES_ROMAN_10,
GLUT_BITMAP_TIMES_ROMAN_24,             // Text Styles
GLUT_BITMAP_HELVETICA_12,
GLUT_BITMAP_HELVETICA_10,
GLUT_BITMAP_HELVETICA_18,
};
int i,j;
void *currentfont;
void delaypacket()
{
  j=1000;
	while(j!=0)
	{
		j--;
		i=1000;
		while(i!=0)
		{
			i--;
			
		}
	}


}
void output(int x, int y, char *string,int j)      
{
	int len, i;

	glRasterPos2f(x, y);
	len = (int) strlen(string);
	for (i = 0; i < len; i++)
	glutBitmapCharacter(fonts[j], string[i]);
}
void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);
 
	for(c=string;*c!='\0';c++)
	{	
		glutBitmapCharacter(currentfont,*c);
	}
}
void delay()
{
	
  j=15000;
	while(j!=0)
	{
		j--;
		i=15000;
		while(i!=0)
		{
			i--;
			
		}
	}


}
void keyboardinteraction(void)				// text for keyboard interaction

{

	glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(360.0,130.0,1.0,"DO U WISH TO CONTINUE?");
	drawstring(360.0,110.0,1.0,"PRESS  Y/N  or  'S' FOR MAIN MENU");
	glFlush();
}
void tokenmoves()
{	
	float i,temp=0.3,temp1=0.6;
	
	for(i=0;i<170;i=i+temp) //token from 1 to 4
	{   	glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(116+i,410.0);
	 	glVertex2f(116+i,415);
	 	glVertex2f(126+i,415);
	 	glVertex2f(126+i,410.0);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,410.0);
		glVertex2f(116+i,415);
		glVertex2f(126+i,415);
		glVertex2f(126+i,410.0);
   	 glEnd();glFlush();
	}
		glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(310,410.0);
	 	glVertex2f(310,415);
	 	glVertex2f(320,415);
	 	glVertex2f(320,410.0);
  		glEnd();glFlush();
  	for(i=170;i>0;i=i-temp1) //packet from 4 to 3
	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(340,160+i);
	 	glVertex2f(340,180+i);
	 	glVertex2f(343,180+i);
	 	glVertex2f(343,160+i);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(340,160+i);
	 	glVertex2f(340,180+i);
	 	glVertex2f(343,180+i);
	 	glVertex2f(343,160+i);
   	 glEnd();glFlush();
	}
	
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);//Every time token moves are displayed
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 1->4");
	drawstring(145.0,40.0,1.0,"THEN PACKET MOVES FROM 4->3");
	glFlush();delay();delay();delay();delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 1->4");
	drawstring(145.0,40.0,1.0,"THEN PACKET MOVES FROM 4->3");
	glFlush();delay();delay();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(310,410.0);
	 	glVertex2f(310,415);
	 	glVertex2f(320,415);
	 	glVertex2f(320,410.0);
  		glEnd();glFlush();
  	for(i=170;i>0;i=i-temp1) //packet from 4 to 3
	{   	glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(340,160+i);
	 	glVertex2f(340,180+i);
	 	glVertex2f(343,180+i);
	 	glVertex2f(343,160+i);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(340,160+i);
	 	glVertex2f(340,180+i);
	 	glVertex2f(343,180+i);
	 	glVertex2f(343,160+i);
   	 glEnd();glFlush();
	}
		glColor3f(0,0,1);
		glBegin(GL_QUADS);
		glVertex2f(340,140);
	 	glVertex2f(340,160);
	 	glVertex2f(343,160);
	 	glVertex2f(343,140);
   	 glEnd();glFlush();
	for(i=170;i>0;i=i-temp) //packet from 3 to 2
	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(116+i,80.0);
	 	glVertex2f(116+i,85);
	 	glVertex2f(126+i,85);
	 	glVertex2f(126+i,80.0);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,80.0);
		glVertex2f(116+i,85);
		glVertex2f(126+i,85);
		glVertex2f(126+i,80.0);
   	 glEnd();glFlush();
	}
	glColor3f(1.0,1.0,1.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 4->3");
	drawstring(145.0,40.0,1.0,"THEN PACKET MOVES FROM 3->2");
	glFlush();delay();delay();delay();delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 4->3");
	drawstring(145.0,40.0,1.0,"THEN PACKET MOVES FROM 3->2");
	glFlush();delay();delay();
	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(340,140);
	 	glVertex2f(340,160);
	 	glVertex2f(343,160);
	 	glVertex2f(343,140);
   	 glEnd();glFlush();
  	for(i=170;i>0;i=i-temp) //token from 3 to 2
	{   	glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(116+i,80.0);
	 	glVertex2f(116+i,85);
	 	glVertex2f(126+i,85);
	 	glVertex2f(126+i,80.0);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,80.0);
		glVertex2f(116+i,85);
		glVertex2f(126+i,85);
		glVertex2f(126+i,80.0);
   	 glEnd();glFlush();
	}
		glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(116,80.0);
	 	glVertex2f(116,85);
	 	glVertex2f(126,85);
	 	glVertex2f(126,80.0);
  		glEnd();glFlush();
  		for(i=0;i<170;i=i+temp1) //packet from 2 to 1
	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(90,160+i);
	 	glVertex2f(90,180+i);
	 	glVertex2f(93,180+i);
	 	glVertex2f(93,160+i);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(90,160+i);
	 	glVertex2f(90,180+i);
	 	glVertex2f(93,180+i);
	 	glVertex2f(93,160+i);
   	 glEnd();glFlush();
	}
	
	glColor3f(1.0,1.0,1.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 3->2");
	drawstring(145.0,40.0,1.0,"THEN PACKET  MOVES FROM 2->1");
	glFlush();delay();delay();delay();delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 3->2");
	drawstring(145.0,40.0,1.0,"THEN PACKET  MOVES FROM 2->1");
	glFlush();delay();delay();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(116,80.0);
	 	glVertex2f(116,85);
	 	glVertex2f(126,85);
	 	glVertex2f(126,80.0);
  		glEnd();glFlush();
  		for(i=0;i<170;i=i+temp1) //token from 2 to 1
	{   	glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(90,160+i);
	 	glVertex2f(90,180+i);
	 	glVertex2f(93,180+i);
	 	glVertex2f(93,160+i);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(90,160+i);
	 	glVertex2f(90,180+i);
	 	glVertex2f(93,180+i);
	 	glVertex2f(93,160+i);
   	 glEnd();glFlush();
	}
	glColor3f(0,0,1);
		glBegin(GL_QUADS);
	 	glVertex2f(90,340);
	 	glVertex2f(90,360);
	 	glVertex2f(93,360);
	 	glVertex2f(93,340);
  		glEnd();glFlush();
	for(i=0;i<170;i=i+temp) //packet from 1 to 4
	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(116+i,410.0);
	 	glVertex2f(116+i,415);
	 	glVertex2f(126+i,415);
	 	glVertex2f(126+i,410.0);
  		glEnd();glFlush();delaypacket();
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,410.0);
		glVertex2f(116+i,415);
		glVertex2f(126+i,415);
		glVertex2f(126+i,410.0);
   	 glEnd();glFlush();
	}
	glColor3f(0,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(90,340);
	 	glVertex2f(90,360);
	 	glVertex2f(93,360);
	 	glVertex2f(93,340);
  		glEnd();glFlush();
	glColor3f(1.0,1.0,1.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 2->1");
	drawstring(145.0,40.0,1.0,"THEN PACKET  MOVES FROM 1->4");
	glFlush();delay();delay();delay();delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(145.0,70.0,1.0,"TOKEN MOVES FROM 2->1");
	drawstring(145.0,40.0,1.0,"THEN PACKET  MOVES FROM 1->4");
	glFlush();delay();delay();
	keyboardinteraction();
}
	
void tokentext()
{
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);//for node 1
	drawstring(105.0,390.0,1.0,"NODE 1");
	glColor3f(1.0,1.0,1.0);
	drawstring(305.0,390.0,1.0,"NODE 4");
	glColor3f(1.0,1.0,1.0);
	drawstring(105.0,100.0,1.0,"NODE 2");
	glColor3f(1.0,1.0,1.0);
	drawstring(305.0,100.0,1.0,"NODE 3");
	glFlush();
}
void token()
{	glClear(GL_COLOR_BUFFER_BIT);
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);
	drawstring(140.0,455.0,1.0,"* * * * * TOKEN PASSING ALGORITHM * * * * *");
	glColor3f(1.0,1.0,1.0);
	drawstring(140.0,435.0,1.0,"TOKENS: Blue* * * * * * * * * * *PACKETS: Red");
	
	glColor3f(0.5,0.8,0.6);
	glBegin(GL_POLYGON);//first station
	glVertex2f(100,330);
	glVertex2f(130,330);
	glVertex2f(130,360);
	glVertex2f(100,360);
	glEnd();
	
	glBegin(GL_POLYGON);//second station
	glVertex2f(100,130);
	glVertex2f(130,130);
	glVertex2f(130,160);
	glVertex2f(100,160);
	glEnd();
	
	glBegin(GL_POLYGON);//third station
	glVertex2f(300,130);
	glVertex2f(330,130);
	glVertex2f(330,160);
	glVertex2f(300,160);
	glEnd();
	
	glBegin(GL_POLYGON);//fourth station
	glVertex2f(300,330);
	glVertex2f(330,330);
	glVertex2f(330,360);
	glVertex2f(300,360);
	glEnd();
	glColor3f(1,1,1);
	glBegin(GL_LINES);
	glVertex2f(300,145);//line between 2 n 3
	glVertex2f(130,145);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(115,160);//between 1 n 2
	glVertex2f(115,330);
	glEnd();
	glBegin(GL_LINES);//between 1 n 4
	glVertex2f(130,345);
	glVertex2f(300,345);
	glEnd();
	glBegin(GL_LINES);//line between 4 n 3
	glVertex2f(315,330);
	glVertex2f(315,160);
	glEnd();
	glFlush();
	
	
}
void text(void)											// to draw the menu screen
{

	

	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);
	drawstring(160.0,455.0,1.0,"* * * * * THE BELLMAN-FORD ALGORITHM * * * * *");
	drawstring(160.0,435.0,1.0,"HERE THE DESTINATION NODE :NODE 6->CHOOSE SRC:");

	glColor3f(0.0,0.0,0.0);
	drawstring(220.0,405.0,1.0,"SEE THE DEMO");				
	drawstring(220.0,350.0,1.0,"FROM SRC NODE 1");
	drawstring(220.0,295.0,1.0,"FROM SRC NODE 2");
	drawstring(220.0,240.0,1.0,"FROM SRC NODE 3");
	drawstring(220.0,185.0,1.0,"FROM SRC NODE 4");
	drawstring(220.0,130.0,1.0,"FROM SRC NODE 5");
	drawstring(235.0,75.0,1.0,"EXIT ");
	glFlush();
																
}
void draw() // To draw the polygons for the menu box  
{

	glClear(GL_COLOR_BUFFER_BIT);
   	 glBegin(GL_POLYGON);  // Demo Menu
	glColor3f(0.6f,0.6f,0.6f);
    	glVertex2i(305,425);
	glVertex2i(180,425);
	glVertex2i(180,395);
    	glVertex2i(305,395);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  
	// node 1
    	glVertex2i(305,370);
	glVertex2i(180,370);
	glVertex2i(180,340);
    	glVertex2i(305,340);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // node 2
	glVertex2i(305,315);
	glVertex2i(180,315);
	glVertex2i(180,285);
   	 glVertex2i(305,285);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // node 3
    	glVertex2i(305,260);
	glVertex2i(180,260);
	glVertex2i(180,230);
    	glVertex2i(305,230);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  //node 4
    	glVertex2i(305,205);
	glVertex2i(180,205);
	glVertex2i(180,175);
    	glVertex2i(305,175);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // node 5
    	glVertex2i(305,150);
	glVertex2i(180,150);
	glVertex2i(180,120);
    	glVertex2i(305,120);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // exit
	glColor3f(0.0f,0.0f,1.0f);
    	glVertex2i(305,95);
	glVertex2i(180,95);
	glVertex2i(180,65);
    	glVertex2i(305,65);
	glEnd();
	glFlush();

}		
void myInit()
{
    	glClearColor(0.0,0.0,0.0,0.0);
	//glColor3f(0.0f,0.0f,0.0f);
//	glPointSize(5.0);
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glColor3f(1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	
}

void naming()
{
	glColor3f(1.0,1.0,1.0);
	drawstring(105.5,403.5,1.0,"1");
	drawstring(105.5,203.5,1.0,"2");
	drawstring(305.5,403.0,1.0,"3");
	drawstring(205.5,303.0,1.0,"4");
	drawstring(305.5,203.0,1.0,"5");
	drawstring(420.5,303.5,1.0,"6");
	//on the lines
	drawstring(200.5,415.0,1.0,"2");//1&3
	drawstring(100.0,307.0,1.0,"3");//1&2
	drawstring(155.0,368.0,1.0,"5");//1&4
	drawstring(160.0,240.0,1.0,"1");//2&4
	drawstring(200.0,192.0,1.0,"3");//2&5
	drawstring(260.0,345.0,1.0,"2");//3&4	
	drawstring(365.0,375.0,1.0,"1");//3&6
	drawstring(255.0,265.0,1.0,"3");//4&5
	drawstring(365.0,235.0,1.0,"2");//5&6
	
	
	
	glFlush();

	
}
void shape()
{
	//int i,j,temp=0.3;
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
	
		// square for 1
		glVertex2f(100.0,415.0);
		glVertex2f(115.0,415.0);
		glVertex2f(115.0,400.0);
		glVertex2f(100.0,400.0);
		glEnd();
		glBegin(GL_POLYGON);
		//square for 2
		glVertex2f(100.0,215.0);
		glVertex2f(115.0,215.0);
		glVertex2f(115.0,200.0);
		glVertex2f(100.0,200.0);
		glEnd();
	
		glBegin(GL_POLYGON);
		//square for 3
        	glVertex2f(300.0,415.0);
		glVertex2f(315.0,415.0);
		glVertex2f(315.0,400.0);
		glVertex2f(300.0,400.0);
		glEnd();
		glBegin(GL_POLYGON);
		//square for 4
		glVertex2f(200.0,315.0);
		glVertex2f(215.0,315.0);
		glVertex2f(215.0,300.0);
		glVertex2f(200.0,300.0);
		glEnd();
		glBegin(GL_POLYGON);
		//square for 5
		glVertex2f(300.0,215.0);
		glVertex2f(315.0,215.0);
		glVertex2f(315.0,200.0);
		glVertex2f(300.0,200.0);
		glEnd();
		glBegin(GL_POLYGON);
		//square for 6
		glVertex2f(415.0,315.0);
		glVertex2f(430.0,315.0);
		glVertex2f(430.0,300.0);
		glVertex2f(415.0,300.0);
		glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINES);
	
		//lines b/w 1&3
		glVertex2f(115.0,407.5);
		glVertex2f(300.0,407.5);
		//lines b/w 1&2
		glVertex2f(107.5,400.0);
		glVertex2f(107.5,215.0);
		//lines b/w 1&4
		glVertex2f(115.0,407.5);
		glVertex2f(200.0,307.5);
		//lines b/w 2&4
		glVertex2f(200.0,307.5);
		glVertex2f(115.0,207.5);
		//lines b/w 2&5
		glVertex2f(115.0,207.5);
		glVertex2f(300.0,207.5);
		//lines b/w 4&5
		glVertex2f(215.0,307.5);
		glVertex2f(300.0,207.5);
		//lines b/w 4&3
		glVertex2f(215.0,307.5);
		glVertex2f(300.0,407.5);
		// lines b/w 3&6 
		glVertex2f(315.0,407.5);
		glVertex2f(415.0,307.5);
		// lines b/w 5&6 
        	glVertex2f(415.0,307.5);
		glVertex2f(315.0,207.5);
		glEnd();

	
	glFlush();
																		
}

void move() 
{

	float i,temp=0.3,temp1=0.3;
	
	for(i=0;i<170;i=i+temp) //movement of data packet from 1 to 3
	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
	 	glVertex2f(116+i,410.0);
	 	glVertex2f(116+i,415);
	 	glVertex2f(126+i,415);
	 	glVertex2f(126+i,410.0);
    	glEnd();
    	glFlush();
	
	delaypacket();

	
  		 glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,410.0);
		glVertex2f(116+i,415);
		glVertex2f(126+i,415);
		glVertex2f(126+i,410.0);
   	 glEnd();
    	glFlush();
 } 

for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
		glEnd();
		glFlush();
	
		delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    	glEnd();
    	glFlush();
 }
 	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 1 to destination node 6");
	drawstring(160.5,98.5,1.0,"1 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C16= 3 (2+1) ");
    	glFlush();/////////1
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 1 to destination node 6");
	drawstring(160.5,98.5,1.0,"1 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C16= 3 (2+1) ");
	glFlush();//2
	delaypacket();
for(i=0;i<70;i=i+temp)//movement of data packet 2 to 4

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(118.546056+i,224.13+i);
		glVertex2f(115.5+i,228.0+i);
		glVertex2f(123.26950+i,238.211241+i);
		glVertex2f(125.894+i,233.773028+i);
	    glEnd();
	    glFlush();
	
		delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(118.546056+i,224.13+i);
		glVertex2f(115.5+i,228.0+i);
		glVertex2f(123.26950+i,238.211241+i);
		glVertex2f(126.894+i,233.773028+i);
    	glEnd();
    	glFlush();
 }
for(i=0;i<65;i=i+temp)//movement of data packet 4 to 3

	{   	glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
	    glEnd();
	    glFlush();
	
		delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
	    glEnd();
	    glFlush();
 }
for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
		glEnd();
		glFlush();
	
		delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
		glEnd();
		glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 2 to destination node 6");
	drawstring(160.5,98.5,1.0,"2 -> 4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C26= 4 (1+2+1) ");
	glFlush();//////3
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 2 to destination node 6");
	drawstring(160.5,98.5,1.0,"2 -> 4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C26= 4 (1+2+1) ");
	glFlush();/////////4
 delaypacket();

 for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
		glEnd();
		glFlush();
	
	delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
	    glEnd();
	    glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 3 to destination node 6");
	drawstring(160.5,98.5,1.0,"3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C36= 1 ");
	glFlush();//////5
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 3 to destination node 6");
	drawstring(160.5,98.5,1.0,"3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C36= 1 ");
	glFlush();/////6
 delaypacket();


 for(i=0;i<65;i=i+temp)//movement of data packet 4 to 3

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
	    glEnd();
	    glFlush();
	
	delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
	    glEnd();
	    glFlush();
 }
for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
			glEnd();
		glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    glEnd();
    glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 4 to destination node 6");
	drawstring(160.5,98.5,1.0,"4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C46= 3 (2+1) ");
	glFlush();//////7
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 4 to destination node 6");
	drawstring(160.5,98.5,1.0,"4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C46= 3 (2+1) ");
	glFlush();/////8	
 delaypacket();
for(i=0;i<83;i=i+temp)//movement of data packet 5 to 6

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(321.546056+i,216.438213 +i);
		glVertex2f(316.546056+i,220.0+i);
		glVertex2f(324.280894+i,226.773028+i);
		glVertex2f(329.826950+i,224.211241+i);
    glEnd();
    glFlush();
	
	delaypacket();

	
        	glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(321.546056+i,216.438213 +i);
		glVertex2f(316.546056+i,220.0+i);
		glVertex2f(324.280894+i,226.773028+i);
		glVertex2f(329.826950+i,224.211241+i);
    glEnd();
    glFlush();
 }
	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 5 to destination node 6");
	drawstring(160.5,98.5,1.0,"5 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C56= 2  ");
	glFlush();//8
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 5 to destination node 6");
	drawstring(160.5,98.5,1.0,"5 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C56= 2  ");
	glFlush();//////9
}
   
void node1()
{


		float i,temp=0.3,temp1=0.3;
	
 	for(i=0;i<170;i=i+temp) //movement of data packet from 1 to 3
	{  
	 
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,410.0);
		glVertex2f(116+i,415);
		glVertex2f(126+i,415);
		glVertex2f(126+i,410.0);
		glEnd();
		glFlush();
	
	delaypacket();

	
		glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(116+i,410.0);
		glVertex2f(116+i,415);
		glVertex2f(126+i,415);
		glVertex2f(126+i,410.0);
		glEnd();
		glFlush();
 } 

for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
         glEnd();
        glFlush();
	
	   delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    glEnd();
    glFlush();
 }
	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 1 to destination node 6");
	drawstring(160.5,98.5,1.0,"1 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C16= 3 (2+1) ");
	glFlush();////10
	delay();
	delay();
    	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 1 to destination node 6");
	drawstring(160.5,98.5,1.0,"1 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C16= 3 (2+1) ");
	glFlush();//11

}

void node2()
{
	float i,temp=0.3,temp1=0.3;
	for(i=0;i<70;i=i+temp)//movement of data packet 2 to 4

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(118.546056+i,224.13+i);
		glVertex2f(115.5+i,228.0+i);
		glVertex2f(123.26950+i,238.211241+i);
		glVertex2f(125.894+i,233.773028+i);
    glEnd();
    glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(118.546056+i,224.13+i);
		glVertex2f(115.5+i,228.0+i);
		glVertex2f(123.26950+i,238.211241+i);
		glVertex2f(126.894+i,233.773028+i);
    glEnd();
    glFlush();
 }
for(i=0;i<65;i=i+temp)//movement of data packet 4 to 3

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
    glEnd();
    glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
			glVertex2f(216.546056+i,328.03+i);
			glVertex2f(218.5+i,323.0+i);
			glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
    glEnd();
    glFlush();
 }
for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
			glEnd();
		glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    glEnd();
    glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 2 to destination node 6");
	drawstring(160.5,98.5,1.0,"2 -> 4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C26= 4 (1+2+1) ");
	glFlush();//12
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 2 to destination node 6");
	drawstring(160.5,98.5,1.0,"2 -> 4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C26= 4 (1+2+1) ");
	glFlush();//13///FOR
 }

void node3()
{
		float i,temp=0.3,temp1=0.3;

 for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
			glEnd();
		glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    glEnd();
    glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 3 to destination node 6");
	drawstring(160.5,98.5,1.0,"3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C36= 1 ");
	glFlush();//14
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 3 to destination node 6");
	drawstring(160.5,98.5,1.0,"3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C36= 1 ");
	glFlush();//15
}
void node4()
{
	float i,temp=0.3,temp1=0.3;
	for(i=0;i<65;i=i+temp)//movement of data packet 4 to 3

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(216.546056+i,328.03+i);
		glVertex2f(218.5+i,323.0+i);
		glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
    glEnd();
    glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
			glVertex2f(216.546056+i,328.03+i);
			glVertex2f(218.5+i,323.0+i);
			glVertex2f(227.894+i,335.773028+i);
		glVertex2f(225.26950+i,340.211241+i);
    glEnd();
    glFlush();
 }
for(i=0;i<90;i=i+temp)//movement of data packet 3 to 6

	{   
		glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
			glEnd();
		glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(316+i,410.0-i);
		glVertex2f(323.546056+i,403.438213-i);
		glVertex2f(326.826950+i,407.211241-i);
		glVertex2f(319.280894+i,413.773028-i);
    glEnd();
    glFlush();
 }

	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 4 to destination node 6");
	drawstring(160.5,98.5,1.0,"4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C46= 3 (2+1) ");
	glFlush();////////////////////////////////

	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 4 to destination node 6");
	drawstring(160.5,98.5,1.0,"4 -> 3 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C26= 3 (2+1) ");
	glFlush();//16
}

void node5()
{
		float i,temp=0.3,temp1=0.3;
for(i=0;i<83;i=i+temp)//movement of data packet 5 to 6

	{   glColor3f(1,0,0);
		glBegin(GL_QUADS);
		glVertex2f(321.546056+i,216.438213 +i);
		glVertex2f(316.546056+i,220.0+i);
		glVertex2f(324.280894+i,226.773028+i);
		glVertex2f(329.826950+i,224.211241+i);
    glEnd();
    glFlush();
	
	delaypacket();

	
        glColor3f(0,0,0);
		glBegin(GL_QUADS);
		glVertex2f(321.546056+i,216.438213 +i);
		glVertex2f(316.546056+i,220.0+i);
		glVertex2f(324.280894+i,226.773028+i);
		glVertex2f(329.826950+i,224.211241+i);
    glEnd();
    glFlush();
 }
	glColor3f(1.0,1.0,1.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 5 to destination node 6");
	drawstring(160.5,98.5,1.0,"5 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C56= 2  ");
	glFlush();//17
	delay();
	delay();
	glColor3f(0.0,0.0,0.0);
	drawstring(160.5,110.5,1.0,"Shortest path from Node 5 to destination node 6");
	drawstring(160.5,98.5,1.0,"5 -> 6");
	drawstring(160.5,86.5,1.0,"Cost C56= 2  ");
	glFlush();//18
}
void title()												// to draw the starting screen
{
	glColor3f(0,0.8,0.5);	
	setFont(GLUT_BITMAP_HELVETICA_18);

	output(75,550,"BMS INSTITUTE OF TECHNOLOGY AND MANAGEMENT",2);

	output(180,520," A MINI PROJECT ON ",2);

	output(180,480,"TOKEN PASSING ALGORITHM",2);

	
	setFont(GLUT_BITMAP_HELVETICA_12);

	output(230,430,"Guides:",2);
	output(120,400,"Mrs. Ambika G N",2);
	output(120,370,"Assistant Professor",2);
	output(120,340,"Dept. of CSE",2);
	output(290,400,"Mr. Muneshwara M.S",2);
	output(290,370,"Assistant Professor",2);
	output(290,340,"Dept. of CSE",2);
	output(340,200,"By:",2);
	output(365,180,"Dhanya.M.Kashyap- 1BY14CS031",2);
	output(365,150,"C.Nishitha- 1BY14CS022",2);
	output(210,50,"Press S for menu ",2); 
	glFlush();
}

void draw1()
{

	shape();
	naming();
}

void mainmenu(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	setFont(GLUT_BITMAP_HELVETICA_18);
	glColor3f(1.0,1.0,1.0);
	drawstring(200.0,455.0,1.0,"* * * * * MAIN-MENU * * * * *");
	drawstring(210.0,435.0,1.0,"CHOOSE ALGORITHMS"); 
	glColor3f(0.0f,0.0f,1.0f);
    	glBegin(GL_POLYGON);  
	// choose token passing
    	glVertex2i(305,370);
	glVertex2i(180,370);
	glVertex2i(180,340);
    	glVertex2i(305,340);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // choose bellman ford
	glVertex2i(305,315);
	glVertex2i(180,315);
	glVertex2i(180,285);
   	 glVertex2i(305,285);
	glEnd();
	glFlush();

	glBegin(GL_POLYGON);  // exit option
    	glVertex2i(305,260);
	glVertex2i(180,260);
	glVertex2i(180,230);
    	glVertex2i(305,230);
	glEnd();
	glFlush();
	glColor3f(1.0f,1.0f,1.0f);
	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(200.0,350.0,1.0,"Press T for TOKEN PASSING");
	drawstring(200.0,295.0,1.0,"Press B for BELLMAN FORD");
	drawstring(200.0,240.0,1.0,"Press N to EXIT PROGRAM");
	glFlush();

	
	
}

void display(void)
{  

	glClear(GL_COLOR_BUFFER_BIT);
	
	title();
	delay();
}
void mykeyboard(unsigned char key,int x,int y)
{
	if(key=='y' || key=='Y')
	{
		draw();
		text();
	}
	else if(key=='S' || key=='s')
	{
		mainmenu();
	}
	else if(key=='N' || key=='n')
	{
		exit(0);
	}
	else if(key=='T' || key=='t')
	{
		token();
		tokentext();
		tokenmoves();
	}
	else if(key=='B' || key=='b')
	{
		draw();
		text();
	}
}
	

	

void myMouse(int btn, int state, int x, int y)
{

	if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN )
	{
		x=x/2;
		y=(1000-y)/2.1;
		if ((x>=185 && x<=330) && (y>=410 && y<=425 ))// Demo menu
		
		{
		   draw1();
		   move();
		keyboardinteraction();
		
		}
		
		if ((x>=185 && x<=330) && (y>=380 && y<=395 ))// 1 menu
		{
	
		draw1();
		node1();
		keyboardinteraction();
		 
		}
		if((x>=185 && x<=330) && (y>=350 && y<=365 ))  //  2 menu
		{
		draw1();
		node2();
		keyboardinteraction();	

		}
		if((x>=185 && x<=330) && (y>=320 && y<=335 ))  // 3 menu
		{
			draw1();
		node3();
		keyboardinteraction();
		}

		if((x>=185 && x<=330) && (y>=285 && y<=300 ))  // 4 menu
		{
		draw1();
		node4();
		keyboardinteraction();	
		}

		if((x>=185 && x<=330) && (y>=250 && y<=265 ))  // 5 menu
		{
		draw1();
		node5();
		keyboardinteraction();
		}

		if((x>=185 && x<=360) && (y>=215 && y<=230 ))  // exit menu
		{
			exit(0);
		}
		
	}
}

int main(int argc,char **argv)
{
	int menu;
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
  	glutInitWindowPosition(0,0);
  	glutInitWindowSize(1600,1600);
	glutCreateWindow("Bellman and Token passing Algorithm");
    	glutDisplayFunc(display);
    	glutKeyboardFunc(mykeyboard);
    	glutMouseFunc(myMouse);
	glutKeyboardFunc(mykeyboard);
    	myInit();
	glutMainLoop();
    
return 0;
}
