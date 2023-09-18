#include "graphics.h"
#include "stdio.h"
#include "conio.h"
#include "FRAME.h"


void main(void)
{
	int driver, mode;
	int i,j,max_x,max_y,new_coordinate[4][3];
	int old_coordinate[4][3] = {{10,10,1},
								{100,10,1},
								{100,50,1},
								{10,50,1}};
	int matrix[3][3] = {{1,0,0},
						{0,1,0},
						{-150,-100,1}};

	driver = DETECT;
	//initgraph(&driver,&mode,"");
	initgraph(&driver, &mode, "C:\\turboc3\\bgi");
	max_x = getmaxx();
	max_y = getmaxy();
	setbkcolor(0);
	setcolor(4);
	draw_coord();
	for(i=0;i<=3;i++)
	{
		new_coordinate[i][0] = old_coordinate[i][0] + 320;
		new_coordinate[i][1] = 240 - old_coordinate[i][1];
	}
	rectangle(new_coordinate[3][0],new_coordinate[3][1],
			new_coordinate[1][0],new_coordinate[1][1]);
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=2;j++)
		{
			new_coordinate[i][j]=old_coordinate[i][0] * matrix[0][j]+
								old_coordinate[i][1] * matrix[1][j]+
								old_coordinate[i][2] * matrix[2][j];
		}
	}
	for(i=0;i<=3;i++)
	{
		new_coordinate[i][0] = new_coordinate[i][0] / new_coordinate[i][2] + 320;
		new_coordinate[i][1] = 240 - new_coordinate[i][1] / new_coordinate[i][2];
	}
	rectangle(new_coordinate[3][0],new_coordinate[3][1],
				new_coordinate[1][0],new_coordinate[1][1]);
	getch();
	closegraph();
}


