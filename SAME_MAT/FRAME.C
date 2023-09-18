#include "FRAME.h"
#include "graphics.h"
void draw_coord(void)
{
	int x,y;
	line(0,240,639,240);
	line(320,0,320,479);
	for(x=320;x<=639;x=x+50)
		line(x,240,x,235);
	for(x=320;x>=0;x=x-50)
		line(x,240,x,235);
	for(y=240;y<=479;y=y+50)
		line(320,y,325,y);
	for(y=240;y>=0;y=y-50)
		line(320,y,325,y);
	settextjustify(LEFT_TEXT,TOP_TEXT);
	moveto(320,242);
	outtextxy(getx(),gety(),"(0,0)");
	moveto(395,242);
	outtextxy(getx(),gety(),"(100,0)");
	moveto(260,137);
	outtextxy(getx(),gety(),"(0,100)");
}