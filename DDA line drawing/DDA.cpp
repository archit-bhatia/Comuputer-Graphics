#include<iostream>
#include<cmath>
#include<graphics.h>
#include<conio.h>
using namespace std;
int main(){
float x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Program Files (x86)\\CodeBlocks\\MinGW\\lib\\libbgi.a");
cout<<"Enter values of x1 and y1:";
cin>>x1>>y1;
cout<<"Enter values of x2 and y2:";
cin>>x2>>y2;
dx = (x2-x1);
dy = (y2-y1);
if(abs(dx)>abs(dy))
{
    step = abs(dx);
}
else{
    step = abs(dy);
}
float xi,yi;
xi = dx/step;
yi = dy/step;
float x = x1;
float y = y1;
putpixel(int(x),int(y),1);
for(int k=1;k<=step;k++){
    x = x + xi;
    y = y + yi;
putpixel(int(x),int(y),1);
}
getch();
closegraph();
return 0;
}
