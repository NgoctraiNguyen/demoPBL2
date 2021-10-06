#include "Cell.h"
#include "winbgim.h"
Cell:: Cell (){
	x=1;
	y=1;
}
void Cell:: nhap(int xx,int yy){
	x=xx*20;
	y=yy*20;
}

void Cell:: hinh_nv(){
	setbkcolor(14);
	setfillstyle(1,14);
	bar(x,y,x+20,y+20);
}
void Cell:: hinh_vr(){
	setcolor(6);
	setfillstyle(1,12);
	circle(x+10,y+10,10);
}
