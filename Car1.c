#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
int gd=DETECT,gm,error;

int i,j,m,k;

int X1=100,Y1=30,X2=200,Y2=130;

int X3=100,Y3=370,X4=200,Y4=470;



initgraph(&gd,&gm,"C:\\TC\\BGI");

Start:

line(50,0,50,500);
line(60,0,60,500);

line(550,0,550,500);
line(560,0,560,500);

X1=100;
X2=200;

rectangle(X1,Y1,X2,Y2);         //Traffic Car//
rectangle(X3,Y3,X4,Y4);             //User Car//   

scanf("%d",&i);

for(j=30; j<=470; j=j+10)
{

//Track//

line(50,0,50,500);
line(60,0,60,500);

line(550,0,550,500);
line(560,0,560,500);

//Traffic Car & User's Car//

rectangle(X1,Y1+j,X2,Y2+j);         //Traffic Car//
rectangle(X3,Y3,X4,Y4);             //User Car//   
delay(100);
cleardevice();


if(i==1)
{
X3=100;
Y3=370;
X4=200;
Y4=470;	
rectangle(X3,Y3,X4,Y4);

if(X1==X3 && Y2+j==Y3)
{
cleardevice();
outtextxy(200,200,"Game Over");
getch();
exit(0);
}

else
{
continue;
goto Start;
}
}

 if(i==2)
{
X3=400;
Y3=370;
X4=500;
Y4=470;
rectangle(X3,Y3,X4,Y4);

if(X1==X3 && Y2+j==Y3)
{
cleardevice();
outtextxy(200,200,"Game Over");
getch();
exit(0);
}

else
{
continue;
goto Newtraffic;
}
}

else
{	
exit(0);	
}
}



Newtraffic:

X1=400;
X2=500;


line(50,0,50,500);
line(60,0,60,500);

line(550,0,550,500);
line(560,0,560,500);

rectangle(X1,Y1,X2,Y2);         //Traffic Car//
rectangle(X3,Y3,X4,Y4);             //User Car//   

scanf("%d",&m);

for(k=30; k<=470; k=k+10)
{

//Track//

line(50,0,50,500);
line(60,0,60,500);

line(550,0,550,500);
line(560,0,560,500);


//Traffic Car & User's Car//

rectangle(X1,Y1+k,X2,Y2+k);         //Traffic Car//
rectangle(X3,Y3,X4,Y4);             //User Car//
delay(100);
cleardevice();


if(m==1)
{
X3=100;
Y3=370;
X4=200;
Y4=470;	
rectangle(X3,Y3,X4,Y4);

if(X1==X3 && Y2+k==Y3)
{
cleardevice();
outtextxy(200,200,"Game Over");
getch();
exit(0);
}

else
{
	//continue;
goto Start;
}
}

else if(m==2)
{
X3=400;
Y3=370;
X4=500;
Y4=470;
if(X1==X3 && Y2+k==Y3)
{
cleardevice();	
outtextxy(200,200,"Game Over");
getch();
exit(0);
}

else
{
continue;
goto Newtraffic;
}	
}

else
{	
exit(0);	
}
}




getch();

closegraph();

return 0;
}