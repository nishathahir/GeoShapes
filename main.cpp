#include <graphics.h>
#include <stdio.h>
#include <math.h>
char y;
int circle();
int rectangle();
int elipse();
int square();
int tringle();
int semi();
int hexagon();
int pentag();
int octa();
int righttri();
int rhomb();
int paral();
int scal();
int cyli();
int cone();
int main()
{
    int x;
    char option;
    printf("\n                                                          JOLY GEO SHAPES");
    printf("\n\n1. Circle ");
    printf("\n2. Rectangle ");
    printf("\n3. Ellipse");
    printf("\n4. Square");
    printf("\n5. Triangle");
    printf("\n6. Semicircle");
    printf("\n7. Hexagon");
    printf("\n8. Pentagon");
    printf("\n9. Octagon");
    printf("\n10. Right Triangle");
    printf("\n11. Rhombus");
    printf("\n12. Parallelogram");
    printf("\n13. Scalene Triangle");
    printf("\n14. Cylinder");
    printf("\n15. Cone");
    printf("\n                                           Package developed by T.Nisha (1st M.Sc(TCS))");
    printf("\n\n\n\n\nEnter your choice :");
    scanf("%d",&x);
do
{
switch (x)
{
case 1:
    circle(); break;
case 2:
    rectangle();break;
case 3:
    elipse();break;
case 4:
    square();break;
case 5:
   tringle();break;
case 6:
    semi();break;
case 7:
    hexagon();break;
case 8:
    pentag(); break;
case 9:
    octa();break;
case 10:
    righttri();break;
case 11:
    rhomb();break;
case 12:
    paral();break;
case 13:
    scal();break;
case 14:
    cyli();break;
case 15:
    cone();break;
default:
    printf("\nEnter the numbers from 1 to 15 :");
}
printf("\n\n\nDo you want to continue ?");
scanf("%c",&option);
}while(option=='y');
}
int tringle()
{
   int gd = DETECT, gm;
   char a;
   float area,s;
   int s1,s2,s3;
   char arr[10] ="" ;
   initgraph(&gd, &gm, "");
   setcolor(5);
   setfillstyle(SOLID_FILL,RED);
   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);
   settextstyle(1,0,2);
   outtextxy(25,25,"TRIANGLE");
   outtextxy(100,250, "\nSides of a triangle :");
   outtextxy(100,300,"Side1 : ");
   outtextxy(100,325,"Side2 : ");
   outtextxy(100,350,"Side3 : ");
   outtextxy(100,400,"Area  : ");
   scanf("%d",&s1);
   outtextxy(200,300,itoa(s1,arr,10));
   scanf("%d",&s2);
   outtextxy(200,320,itoa(s2,arr,10));
   scanf("%d",&s3);
   outtextxy(200,350,itoa(s3,arr,10));
   s =(s1+s2+s3)/2;
   area =sqrt(s*(s-s1)*(s-s2)*(s-s3));
   outtextxy(200,400,itoa(area,arr,10));
   getch();
   closegraph();
   return 0;
}
int rectangle()
{
    int l,b; float area,peri; char arr[10] ="" ;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    rectangle(100, 100,350,250);
    settextstyle(1,0,2);
   outtextxy(25,25,"RECTANGLE");
   outtextxy(100,300,"Length    : ");
   outtextxy(100,325,"Breath    : ");
   outtextxy(100,350,"Perimeter : ");
   outtextxy(100,400,"Area      : ");
   scanf("%d",&l);
   outtextxy(260,300,itoa(l,arr,10));
   scanf("%d",&b);
   outtextxy(260,325,itoa(b,arr,10));
   peri=2*(l+b);
   outtextxy(260,350,itoa(peri,arr,10));
   area=l*b;
   outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int circle()
{
    int gd = DETECT, gm; int r,d;
    float cir,area;
    char arr[10] ="" ;
    initgraph(&gd, &gm, "");
    circle(450, 200, 150);
    settextstyle(1,0,2);
   outtextxy(25,25,"CIRCLE");
   outtextxy(100,300,"Radious  : ");
   outtextxy(100,350,"Diameter : ");
   outtextxy(100,375,"Circum   : ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&r);
   outtextxy(260,300,itoa(r,arr,10));
   d=2*r;
   outtextxy(260,350,itoa(d,arr,10));
   cir=2*(22/7)*r;
   outtextxy(260,375,itoa(cir,arr,10));
   area=(22/7)*r*r;
   outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int elipse()
{
    int gd = DETECT, gm;char arr[10] ="" ;
    initgraph(&gd, &gm, "");int r1,r2;float cir,area;
    ellipse(300, 150, 0, 360, 125, 75);
   settextstyle(1,0,2);
   outtextxy(25,25,"ELLIPSE");
   outtextxy(100,300,"Radious1 : ");
   outtextxy(100,325,"Radious2 : ");
   outtextxy(100,375,"Circum   : ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&r1);
   outtextxy(260,300,itoa(r1,arr,10));
   scanf("%d",&r2);
   outtextxy(260,325,itoa(r2,arr,10));
   cir=2*(22/7)*sqrt(((r1*r1)+(r2*r2))/2);
   outtextxy(260,375,itoa(cir,arr,10));
   area=(22/7)*r1*r2;
   outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int square()
{
   int s; float area,peri; char arr[10] ="" ;
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   rectangle(100, 100,250,250);
   settextstyle(1,0,2);
   outtextxy(25,25,"SQUARE");
   outtextxy(100,300,"Side    : ");
   outtextxy(100,350,"Perimeter : ");
   outtextxy(100,400,"Area      : ");
   scanf("%d",&s);
   outtextxy(260,300,itoa(s,arr,10));
   peri=4*s;
   outtextxy(260,350,itoa(peri,arr,10));
   area=s*s;
   outtextxy(260,400,itoa(area,arr,10));
   getch();
   closegraph();
   return 0;
}
int semi()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   int r;
   char arr[10]="";
   float d,cir,area;
   ellipse(250,200, 0, 180, 100,100);
   line(350,200,150,200);
   settextstyle(1,0,2);
   outtextxy(25,25,"SEMI CIRCLE");
   outtextxy(100,300,"Radious  : ");
   outtextxy(100,350,"Diameter : ");
   outtextxy(100,375,"Circum   : ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&r);
   outtextxy(260,300,itoa(r,arr,10));
   d=2*r;
   outtextxy(260,350,itoa(d,arr,10));
   cir=(2*(22/7)*r)/2;
   outtextxy(260,375,itoa(cir,arr,10));
   area=((22/7)*r*r)/2;
   outtextxy(260,400,itoa(area,arr,10));
   getch();
   closegraph();
   return 0;
}
int hexagon()
{
    int gd = DETECT, gm;
    int hexagon[14] ={ 200,50,350,50,450,150,350,250,200,250,100,150,200,50};
    initgraph(&gd, &gm, "");
    fillpoly(7,hexagon);
    int s,peri;
   char arr[10]="";
   float area;
   settextstyle(1,0,2);
   outtextxy(25,25,"HEXAGON");
   outtextxy(100,300,"Side     : ");
   outtextxy(100,375,"Perimeter: ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&s);
   outtextxy(260,300,itoa(s,arr,10));
   peri=6*s;
   outtextxy(260,375,itoa(peri,arr,10));
   area=(3*sqrt(3)*s*s)/2;
   outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int pentag()
{
    int gd = DETECT, gm;
    int s,peri;
    int pentagon[12]={250,50,350,150,300,250,200,250,150,150,250,50};
    initgraph(&gd, &gm, "");
    drawpoly(6,pentagon);
    fillpoly(6,pentagon);
    char arr[10]="";
   float area;
   settextstyle(1,0,2);
   outtextxy(25,25,"PENTAGON");
   outtextxy(100,300,"Side     : ");
   outtextxy(100,375,"Perimeter: ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&s);
   outtextxy(260,300,itoa(s,arr,10));
   peri=5*s;
   outtextxy(260,375,itoa(peri,arr,10));
   area=(1/4)*(sqrt(5*(5+2*sqrt(5))*s*s));
    outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int octa()
{
    int gd = DETECT, gm,s,peri;
    int octagon[18]={250,50,350,50,450,100,450,150,350,200,250,200,150,150,150,100,250,50};
    initgraph(&gd, &gm, "");
    char arr[10]="";
    float area;
    settextstyle(1,0,2);
   outtextxy(25,25,"OCTAGON");
    drawpoly(9,octagon);
    fillpoly(9,octagon);
   outtextxy(100,300,"Side     : ");
   outtextxy(100,375,"Perimeter: ");
   outtextxy(100,400,"Area     : ");
   scanf("%d",&s);
   outtextxy(260,300,itoa(s,arr,10));
   peri=8*s;
   outtextxy(260,375,itoa(peri,arr,10));
   area=2*((1+sqrt(2))*s*s);
    outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int righttri()
{
    int gd = DETECT, gm;
    int h,b;
    char arr[10]="";
    float peri,area;
    int right[8]={250,100,400,250,250,250,250,100};
    initgraph(&gd, &gm, "");
    drawpoly(4,right);
    fillpoly(4,right);
    settextstyle(1,0,2);
    outtextxy(25,25,"RIGHT TRIANGLE");
    outtextxy(100,300,"Height    : ");
    outtextxy(100,325,"Breath    : ");
    outtextxy(100,370,"Perimeter : ");
    outtextxy(100,400,"Area      : ");
    scanf("%d",&h);
    outtextxy(260,300,itoa(h,arr,10));
    scanf("%d",&b);
    outtextxy(260,325,itoa(b,arr,10));
    peri=h+b+sqrt(h*h+b*b);
    outtextxy(260,370,itoa(peri,arr,10));
    area=(1/2)*b*h;
    outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int rhomb()
{
    int gd = DETECT, gm;
    int s,d1,d2,peri;
    float area;
    char arr[20]="";
    int romb[10]={250,50, 300,150,250,250,200,150,250,50};
    initgraph(&gd, &gm, "");
    drawpoly(5,romb);
    fillpoly(5,romb);
    settextstyle(1,0,2);
    outtextxy(25,25,"RHOMBUS");
   outtextxy(100,300,"Side : ");
   outtextxy(100,325,"Diagonal1: ");
   outtextxy(100,350,"Diagonal2: ");
   outtextxy(100,400,"Perimeter: ");
   outtextxy(100,450,"Area     : ");
   scanf("%d",&s);
   outtextxy(300,300,itoa(s,arr,10));
   scanf("%d",&d1);
   outtextxy(300,320,itoa(d1,arr,10));
   scanf("%d",&d2);
   outtextxy(300,350,itoa(d2,arr,10));
   peri = 4*s;
   outtextxy(300,400,itoa(peri,arr,10));
   area =(d1*d2)/2;;
   outtextxy(300,450,gcvt(area,20,arr));
    getch();
    closegraph();
    return 0;
}
int paral()
{
    int gd = DETECT, gm;
    int para[10]={100,50,400,50,350,250,50,250,100,50};
    initgraph(&gd, &gm, "");
    int h,b,peri,area;
    char arr[15]="";
    drawpoly(5,para);
    fillpoly(5,para);
    settextstyle(1,0,2);
    outtextxy(25,25,"PARALLELOGRAM");
    outtextxy(100,300,"Height    : ");
    outtextxy(100,325,"Breath    : ");
    outtextxy(100,370,"Perimeter : ");
    outtextxy(100,400,"Area      : ");
    scanf("%d",&h);
    outtextxy(260,300,itoa(h,arr,10));
    scanf("%d",&b);
    outtextxy(260,325,itoa(b,arr,10));
    peri=2*(h+b);
    outtextxy(260,370,itoa(peri,arr,10));
    area=b*h;
    outtextxy(260,400,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int scal()
{
    int gd = DETECT, gm;
    int sca[8]={500,50,300,250,100,250,500,50};
    initgraph(&gd, &gm, "");
    drawpoly(4,sca);
    fillpoly(4,sca);
   float s,area;
   int s1,s2,s3,peri;
   char arr[10] ="" ;
   settextstyle(1,0,2);
   outtextxy(25,25,"SCALENE TRIANGLE");
   outtextxy(70,300,"Side1 : ");
   outtextxy(70,325,"Side2 : ");
   outtextxy(70,350,"Side3 : ");
   outtextxy(70,400,"Perimtr : ");
   outtextxy(70,450,"Area  : ");
   scanf("%d",&s1);
   outtextxy(200,300,itoa(s1,arr,10));
   scanf("%d",&s2);
   outtextxy(200,325,itoa(s2,arr,10));
   scanf("%d",&s3);
   outtextxy(200,350,itoa(s3,arr,10));
   peri =s1+s2+s3;
   s =(s1+s2+s3)/2;
   area =sqrt(s*(s-s1)*(s-s2)*(s-s3));
   outtextxy(200,400,itoa(peri,arr,10));
   outtextxy(200,450,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int cyli()
{
    int gd = DETECT, gm;
    char arr[10] ="" ;
    initgraph(&gd, &gm, "");int r1,r2;
    settextstyle(1,0,2);
    outtextxy(25,25,"CYLINDER");
    ellipse(300,100, 0, 360, 100,15);
    line(400, 100, 400, 200);
    ellipse(300,200, 181, 360, 100,15);
    line(200, 100, 200, 200);
    float area;
   int r,h,peri;
   settextstyle(1,0,2);
   outtextxy(70,300,"Radious: ");
   outtextxy(70,325,"Height : ");
   outtextxy(70,375,"Perimtr : ");
   outtextxy(70,425,"Area    : ");
   scanf("%d",&r);
   outtextxy(200,300,itoa(r,arr,10));
   scanf("%d",&h);
   outtextxy(200,325,itoa(h,arr,10));
   peri =2*(r+r)+2*h;
   area =(2*(22/7)*r*h)+(2*(22/7)*r*r);
   outtextxy(200,375,itoa(peri,arr,10));
   outtextxy(200,425,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
int cone()
{
    int gd = DETECT, gm;
    char arr[10] ="" ;
    initgraph(&gd, &gm, "");int r1,r2;
    settextstyle(1,0,2);
    line(300, 50, 400, 200);
    ellipse(300,200, 0, 360, 100,15);
    line(300, 50, 200, 200);
    float area;
   int r,h,peri;
   settextstyle(1,0,2);
   outtextxy(25,25,"CONE");
   outtextxy(70,300,"Radious: ");
   outtextxy(70,325,"Height : ");
   outtextxy(70,375,"Perimtr : ");
   outtextxy(70,425,"Area    : ");
   scanf("%d",&r);
   outtextxy(200,300,itoa(r,arr,10));
   scanf("%d",&h);
   outtextxy(200,325,itoa(h,arr,10));
   peri =(1/3)*(22/7)*r*r*h;
   area =(22/7)*r*(r+sqrt(h*h+r*r));
   outtextxy(200,375,itoa(peri,arr,10));
   outtextxy(200,425,itoa(area,arr,10));
    getch();
    closegraph();
    return 0;
}
