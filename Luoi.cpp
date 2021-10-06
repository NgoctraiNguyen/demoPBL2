#include "Luoi.h"
#include "winbgim.h"
#include "Cell.h"

Luoi:: Luoi(){
	ds = new Cell[10];
	for(int i=0;i<10;i++)
		ds[i].nhap(i,i);
}

void Luoi:: background(){
	initwindow(1500,800);
	setbkcolor(11);
	cleardevice();
	setwindowtitle("Diet Virut Corona");
}
void Luoi:: viewgame(){
	setbkcolor(2);
	setfillstyle(1,2);
	bar(650,50,1450,750);
}
void Luoi:: vehinh(){
	ds[2].hinh_vr();
	ds[4].hinh_nv();
}
void Luoi:: ketthuc(){
	getch();
	closegraph();
}
