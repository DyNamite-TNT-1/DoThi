#include<graphics.h>
#include<cmath>
#include<cstring>
#include<iostream>
#include "GRAPHIC.h"
#define FOR(i,a,b) for(int i=a;i<=b;i++)


bool In_Rec(int x1,int y1,int x2,int y2,int x,int y){
	if(x1<x&&x<x2&&y1<y&&y<y2) return true;
	return false;
}
bool In_Circle(int x,int y,int x1,int y1){
	if((x1-x)*(x1-x)+(y1-y)*(y1-y)<=20*20) return true;
	return false;
}
void OutPut(int x,int y,char a){
	if(a=='1') outtextxy(x,y,"1");
	if(a=='2') outtextxy(x,y,"2");
	if(a=='3') outtextxy(x,y,"3");
	if(a=='4') outtextxy(x,y,"4");
	if(a=='5') outtextxy(x,y,"5");
	if(a=='6') outtextxy(x,y,"6");
	if(a=='7') outtextxy(x,y,"7");
	if(a=='8') outtextxy(x,y,"8");
	if(a=='9') outtextxy(x,y,"9");
	if(a=='0') outtextxy(x,y,"0");
}

int Kc(int x1,int y1,int x2,int y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
///////////////////////////////////////////////////////////////
void Create_DFS_BFS(){
	setfillstyle(1,15);
	bar(20, 67, 105, 107);
	setcolor(1);
	rectangle(20, 67, 105, 107);
	setcolor(0);
	outtextxy(30, 80, "DFS");
	outtextxy(70, 80, "BFS");
	setcolor(1);
	line(62,77,62,97);
}

void Create_HL_DFS(){
	setfillstyle(1,1);
	bar(20,100,62,107);
}

void Create_HL_BFS(){
	setfillstyle(1,1);
	bar(62,100,105,107);
}

void Create_TPLT(){
	setfillstyle(1,15);
	bar(20, 117, 105, 157);
	setcolor(1);
	rectangle(20, 117, 105, 157);
	setcolor(0);
	outtextxy(45, 130, "TPLT");
}
void Create_HL_TPLT(){
	setfillstyle(1,1);
	bar(20,150,105,157);
}
void Create_XtoY(){
	setfillstyle(1, 15);
	bar(20, 167, 105, 207);
	setcolor(1);
	rectangle(20, 167, 105, 207);
	setcolor(0);
	outtextxy(30, 180, "x->y(min)");
}
void Create_HL_XtoY(){
	setfillstyle(1, 1);
	bar(20, 200, 105, 207);
}
void Create_DinhTru(){
	setfillstyle(1, 15);
	bar(120, 67, 205, 107);
	setcolor(1);
	rectangle(120, 67, 205, 107);
	setcolor(0);
	outtextxy(132, 80, "Dinh tru");
}
void Create_HL_DinhTru(){
	setfillstyle(1, 1);
	bar(120, 100, 205, 107);
}
void Create_DinhThat(){
	setfillstyle(1, 15);
	bar(120, 117, 205, 157);
	setcolor(1);
	rectangle(120, 117, 205, 157);
	setcolor(0);
	outtextxy(130, 130, "Dinh that");
}
void Create_HL_DinhThat(){
	setfillstyle(1, 1);
	bar(120, 150, 205, 157);
}
void Create_CanhCau(){
	setfillstyle(1, 15);
	bar(120, 167, 205, 207);
	setcolor(1);
	rectangle(120, 167, 205, 207);
	setcolor(0);
	outtextxy(132, 180, "Canh cau");
}
void Create_HL_CanhCau(){
	setfillstyle(1, 1);
	bar(120, 197, 205, 207);
}
void Create_Hamilton(){
	setfillstyle(1, 15);
	bar(220, 67, 305, 107);
	setcolor(1);
	rectangle(220, 67, 305, 107);
	setcolor(0);
	outtextxy(232, 80, "Hamilton");
}
void Create_HL_Hamilton(){
	setfillstyle(1, 1);
	bar(220, 97, 305, 107);
}
void Create_Euler(){
	setfillstyle(1, 15);
	bar(220, 117, 305, 157);
	setcolor(1);
	rectangle(220, 117, 305, 157);
	setcolor(0);
	outtextxy(240, 130, "Euler");
}
void Create_HL_Euler(){
	setfillstyle(1, 1);
	bar(220, 150, 305, 157);
}
void Create_TopoSort(){
	setfillstyle(1, 15);
	bar(220, 167, 305, 207);
	setcolor(1);
	rectangle(220, 167, 305, 207);
	setcolor(0);
	outtextxy(230, 180, "Topo Sort");
}
void Create_HL_TopoSort(){
	setfillstyle(1, 1);
	bar(220, 200, 305, 207);
}
///////////////////////////////////////////////////
void Create_New(){
	setfillstyle(1,15);
	bar(330, 67, 385, 107);
	setcolor(1);
	rectangle(330, 67, 385, 107);
	setcolor(0);
	outtextxy(345, 80, "NEW");
}
void Create_HL_New(){
	setfillstyle(1, 1);
	bar(330, 100, 385, 107);
}
void Create_Open(){
	setfillstyle(1,15);
	bar(330, 117, 385, 157);
	setcolor(1);
	rectangle(330, 117, 385, 157);
	setcolor(0);
	outtextxy(342, 130, "OPEN");
}
void Create_HL_Open(){
	setfillstyle(1, 1);
	bar(330, 150, 385, 157);
}
void Create_Save(){
	setfillstyle(1,15);
	bar(330, 167, 385, 207);
	setcolor(1);
	rectangle(330, 167, 385, 207);
	setcolor(0);
	outtextxy(342, 180, "SAVE");
}
void Create_HL_Save(){
	setfillstyle(1, 1);
	bar(330, 200, 385, 207);
}
void Create_Add(){
	setfillstyle(1,15);
	bar(330, 247, 385, 287);
	setcolor(1);
	rectangle(330, 247, 385, 287);
	setcolor(0);
	settextstyle(0,0,3);
	outtextxy(347, 255, "+");
}
void Create_HL_Add(){
	setfillstyle(1, 1);
	bar(330, 280, 385, 287);
}
void Create_Del(){
	setfillstyle(1,15);
	bar(330, 297, 385, 337);
	setcolor(1);
	rectangle(330, 297, 385, 337);
	setcolor(0);
	settextstyle(0,0,3);
	outtextxy(347, 305, "-");
}
void Create_HL_Del(){
	setfillstyle(1, 1);
	bar(330, 330, 385, 337);
}
void Create_Cung(){
	setfillstyle(1,15);
	bar(330, 347, 385, 387);
	setcolor(1);
	rectangle(330, 347, 385, 387);
	setcolor(0);
	settextstyle(0,0,3);
	outtextxy(347, 355, "/");
}
void Create_HL_Cung(){
	setfillstyle(1, 1);
	bar(330, 380, 385, 387);
}
void Create_Move(){
	setfillstyle(1, 15);
	bar(330, 397, 385, 437);
	setcolor(1);
	rectangle(330, 397, 385, 437);
	setcolor(0);
	settextstyle(0,0,1);
	outtextxy(347, 410, "<->");
}
void Create_HL_Move(){
	setfillstyle(1, 1);
	bar(330, 430, 385, 437);
}
void Create_Edit(){
	setfillstyle(1, 15);
	bar(330, 447, 385, 487);
	setcolor(1);
	rectangle(330, 447, 385, 487);
	setcolor(0);
	////////draw//////////
	setlinestyle(0, 1, 2);
	line(364,455,370,461);
	line(364,455,354,465);
	line(370,461,360,471);
	line(354,465,360,471);
	line(352,473,360,471);
	line(352,473,354,465);
}
void Create_HL_Edit(){
	setfillstyle(1, 1);
	bar(330, 480, 385, 487);
}
/////////////////////////////////////////////////////
void Create_Node(int x, int y, int color)
{
	setlinestyle(0, 0 , 1);
	setcolor(color);
	setfillstyle(1, color);
	for (int i=0; i<=1; i++) circle(x, y, 20-i);
}
void Create_Triangle(int x1, int y1, int x2, int y2, int color)
{
	setfillstyle(1, color);
	int a[8];
	a[0] = x1 + y2 - y1;
	a[1] = y1 + x1 - x2;
	a[2] = x1 - y2 + y1;
	a[3] = y1 - x1 + x2;
	a[4] = x2;
	a[5] = y2;
	a[6] = a[0]; a[7] = a[1];
	setcolor(color);
	fillpoly(4, a);
}
void Create_Arrow(int x1, int y1, int x2, int y2,int s, int color){
	int BK = 20; // BK = Ban kinh node
	float corner = atan(float(abs(y1 - y2)) / abs(x1 - x2));
	float Ry = BK * sin(corner);
	float Rx = BK * cos(corner);
	int x11 = x1 + Rx;
	int y11 = y1 + Ry;
	int x22 = x2 - Rx;
	int y22 = y2 - Ry;
	if (x1 > x2){
		x11 = x1 - Rx;
		x22 = x2 + Rx;
	}
	if (y1 > y2){
		y11 = y1 - Ry;
		y22 = y2 + Ry;
	}
	setlinestyle(0, 0, 1);
	setcolor(color);
	line(x11, y11, x22, y22);
	int ox=(x1+x2)/2, oy=(y1+y2)/2;//d=length_int(s);
	char xau[10];
	itoa(s,xau,10);
	settextstyle(8,0,1);
	setcolor(4);
	outtextxy(ox-10,oy,xau);
	Create_Triangle(2 * x22 - (x2 + x22) / 2, 2 * y22 -(y22 + y2) / 2, x22, y22, color);
	
}
void drawCurvedLine2(int x1, int y1, int x2, int y2, int color, float w)
{
	int BK=20;
	setcolor(color);
	float xO = (x1 + x2) / 2 + (y1 - y2) / M_SQRT2; // or +
	float yO = (y1 + y2) / 2 + (x2 - x1) / M_SQRT2; // or +
	float r = sqrt(pow(xO - x1, 2) + pow(yO - y1, 2));
	float d = sqrt(pow(x1 - xO, 2) + pow(y1 - yO, 2));
	float a = (pow(r, 2) - pow(BK, 2) + pow(d ,2)) / (2 * d);
	float h = sqrt(r * r - a * a);								//					 
	float tmpx1 = xO + a * (x1 - xO) / d;						//					   xT		  
	float tmpx2 = xO + a * (x2 - xO) / d;						//        *  * x3             x4*  *
	float tmpy1 = yO + a * (y1 - yO) / d;						//     *        *            *        *
	float tmpy2 = yO + a * (y2 - yO) / d;						//    *    x1    *          *     x2   *
	int x3 = tmpx1 - h* (y1 - yO) / d;   // -h					//    *          *          *          *
	int x4 = tmpx2 + h* (y2 - yO) / d;   // +h					//     *        *            *        *
	int y3 = tmpy1 + h * (x1 - xO) / d;  // 					//        *  *                  *  *
	int y4 = tmpy2 - h * (x2 - xO) / d;  // 					//				 	   xO          
	float stangle, endangle;									//					 
	float angle1 = float(x1 - xO) / r;
	float angle2 = 1 - float(pow(BK, 2)) / (2 * pow(r, 2));
	if (angle1 < -1 || angle1 > 1) angle1 = int(angle1);
	if (angle2 < -1 || angle2 > 1) angle2 = int(angle2);
	angle1 = acos(angle1) * 180 / M_PI;
	angle2 = acos(angle2) * 180 / M_PI;
	if (y1 >= yO) angle1 = 360 - angle1;
	stangle = angle1 + angle2;
	angle1 = acos(1 - pow(sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)), 2) / (2 * pow(r, 2)));
	angle1 = angle1 * 180 / M_PI;
	stangle = stangle - angle1 - 2 * angle2;
	endangle = stangle + angle1;
	float theta = atan2((y1 + y2) / 2 - yO, (x1 + x2) / 2 - xO);
	float xT = xO + r * cos(theta);
	float yT = yO + r * sin(theta);
	setcolor(color);
	setlinestyle(0, 0, 1);
	arc(xO, yO, stangle, endangle, r);
	Create_Triangle(2 * x4 - (x2 + x4) / 2, 2 * y4 - (y2 + y4) / 2, x4, y4, color); // FINALY
	setcolor(4);
	int t=10;//length_int(w);
	char s[t];
	itoa(w,s,10);
	if(w==0)outtextxy(xT, yT,"0");else outtextxy(xT, yT,s);	
}
void Create_CurvedLine(int x1, int y1, int x2, int y2, int w,int color){	
	int BK=20;
	setcolor(color);
	float xO = (x1 + x2) / 2 + (y1 - y2) / -M_SQRT2; 
	float yO = (y1 + y2) / 2 + (x2 - x1) / -M_SQRT2; 
	float r = sqrt(pow(xO - x1, 2) + pow(yO - y1, 2));
	float d = sqrt(pow(x1 - xO, 2) + pow(y1 - yO, 2));
	float a = (pow(r, 2) - pow(BK, 2) + pow(d ,2)) / (2 * d);
	float h = sqrt(r * r - a * a);												 
	float tmpx1 = xO + a * (x1 - xO) / d;					
	float tmpx2 = xO + a * (x2 - xO) / d;				
	float tmpy1 = yO + a * (y1 - yO) / d;			
	float tmpy2 = yO + a * (y2 - yO) / d;					
	int x3 = tmpx1 + h* (y1 - yO) / d;   					
	int x4 = tmpx2 - h* (y2 - yO) / d;   			
	int y3 = tmpy1 - h * (x1 - xO) / d;  				
	int y4 = tmpy2 + h * (x2 - xO) / d;  					          
	float stangle, endangle;												 
	float angle1 = float(x1 - xO) / r;
	float angle2 = 1 - float(pow(BK, 2)) / (2 * pow(r, 2));
	if (angle1 < -1 || angle1 > 1) angle1 = int(angle1);
	if (angle2 < -1 || angle2 > 1) angle2 = int(angle2);
	angle1 = acos(angle1) * 180 / M_PI;
	angle2 = acos(angle2) * 180 / M_PI;
	if (y1 >= yO) angle1 = 360 - angle1;
	stangle = angle1 + angle2;
	angle1 = acos(1 - pow(sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)), 2) / (2 * pow(r, 2)));
	angle1 = angle1 * 180 / M_PI;
	endangle = stangle + angle1; 
	float theta = atan2((y1 + y2) / 2 - yO, (x1 + x2) / 2 - xO);
	float xT = xO + r * cos(theta);
	float yT = yO + r * sin(theta);
	if (xT <= 340 || xT >= getmaxx()-40 || yT <= 30 || yT >= 500-20)
		return drawCurvedLine2(x1, y1, x2, y2, color, w);
	//setlinestyle(0, 1, 2);
	setlinestyle(0, 0, 1);
	arc(xO, yO, stangle, endangle, r);
	Create_Triangle(2 * x4 - (x2 + x4) / 2, 2 * y4 - (y2 + y4) / 2, x4, y4, color); 
	setcolor(4);
	int t=10;//length_int(w);
	char s[t];
	itoa(w,s,10);
	if(w==0)outtextxy(xT, yT,"0");else outtextxy(xT, yT,s);	
}
/////////////////////////////////////////////////////
void Create_Monitor_Work(){
	setfillstyle(1,15);
	bar(400,10,980,500);	
	setcolor(1);
	setlinestyle(0,0,2);
	rectangle(400, 10, 980, 500);
}
void Create_Monitor_Algorithm(){
	settextstyle(0, 0 , 1);
	Create_DFS_BFS();
	Create_TPLT();
	Create_XtoY();
	Create_DinhTru();
	Create_DinhThat();
	Create_CanhCau();
	Create_Hamilton();
	Create_Euler();
	Create_TopoSort();
	
	setcolor(4);
	settextstyle(0, 0, 2);
	outtextxy(80,20, "ALGORITHM");
	setcolor(1);
	rectangle(10,10,315,220);
	line(10,50,315,50);
}

void Create_Monitor_Toolbar(){
	
	settextstyle(0, 0 ,1);
	Create_New();
	Create_Open();
	Create_Save();
	Create_Add();
	Create_Del();
	Create_Cung();
	Create_Move();
	Create_Edit();

}
void Create_Monitor_AlTo(){
	Create_Monitor_Algorithm();
	Create_Monitor_Toolbar();
}
void Create_Monitor_Matrix(){
	setfillstyle(1,15);
	bar(10,230,315,500);
	setcolor(1);
	rectangle(10,230,315,500);
	line(10,270,315,270);
	setcolor(4);
	settextstyle(0, 0, 2);
	outtextxy(35,240 ,"MA TRAN TRONG SO");
	settextstyle(0, 0, 1);
}
void Create_Monitor_Noidung(){
	setfillstyle(1, 15);
	bar(10, 510, 980, 680);
	setcolor(1);
	rectangle(10, 510, 980, 680);
}
void Create_Monitor_YesNo(){
	setcolor(1);
	rectangle(368, 597, 423, 637);
	rectangle(568, 597, 623, 637);
	settextstyle(8,0,1);
	setcolor(0);
	outtextxy(380, 605, "YES");
	outtextxy(583, 605, "NO");
	
//	rectangle(330, 167, 385, 207);
//	setcolor(0);
//	outtextxy(342, 180, "SAVE");
	
}
void Create_Monitor_Huongdan(){
	setcolor(4);
	settextstyle(0, 0, 2);
	outtextxy(20, 515, "EXPLAIN:");
	settextstyle(0, 0, 1); 
	setcolor(2);
	
	settextstyle(8, HORIZ_DIR, 1);
	setcolor(2);
	char a[10][150]={
		"(+)  : Them dinh ","(-)  : Xoa dinh","(/)  : Tao, xoa cung va chinh sua","(<->): Di chuyen dinh","(Pen): Doi ten dinh",
		"(NEW) : Tao do thi moi","(OPEN): Mo do thi da co","(SAVE): Luu do thi","(ESC) : Thoat chuong trinh"
	};
	for (int i=0; i<=4; i++){
		outtextxy(20,520+20*(i+1),a[i]);
	}
	for (int i=5; i<=8; i++){
		outtextxy(500,520+20*(i+1-5),a[i]);
	}
}
void Create_Monitor_Main(){
	initwindow(1000, 700);			// init window graphics
	int x, y;
	setbkcolor(15);					// set background
   	cleardevice();
   	setcolor(1);
	setlinestyle(0,0,3);
	rectangle(1, 1, 990, 687);
	x=getmaxx();
	y=getmaxy();
//*****************************************************************	
	Create_Monitor_Work();
	Create_Monitor_Algorithm();
	Create_Monitor_Toolbar();
	Create_Monitor_Matrix();
	Create_Monitor_Noidung();
	Create_Monitor_Huongdan();	
	
}
