#include<conio.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class drawpattern
{
private:
float dx,dy,i,length;
float count;
public:
int x1,y1,x2,y2;
int xmid,ymid;
void getdata();
void ddaline(int x1,int x2,int y1, int y2);
};
void drawpattern::getdata()
{
cout<<"Enter x1";
cin>>x1;
cout<<"Enter y1";
cin>>y1;
cout<<"Enter x2";
cin>>x2;
cout<<"Enter y2";
cin>>y2;
}
void drawpattern::ddaline(int x1, int x2, int y1, int y2)
{
float x,y;
dx = (x2-x1);
dy = (y2-y1);
//cout<<"value of dx:"<<dx<<endl;
// cout<<"value of dy:"<<dy<<endl;
if(abs(dx)>=abs(dy)) length = abs(dx);
else length = abs(dy);
// cout<<"length:"<<length<<endl;
dx = dx/length;
dy = dy/length;
x=x1;
y=y1;
i=1;
// cout<<"x"<<" "<<"y"<<"\tPlot(x,y)"<<endl;
//cout<<"\tplot("<<x<<","<<y<<")"<<endl;
while(i<=length){
x = x + dx;
y = y + dy;
// cout<<x<<" "<<y;
// cout<<"\tplot("<<(int)x<<","<<(int)y<<")"<<endl;
putpixel(x,y,15);
i++;
}
}
int main()
{
//clrscr();
int gdriver= DETECT, gmode; 
initgraph(&gdriver,&gmode,(char*)"");
cleardevice();
drawpattern d;
d.getdata();
d.ddaline(d.x1,d.y1,d.x2,d.y1);// (x1,y1) and (x2,y1)
d.ddaline(d.x2,d.y1,d.x2,d.y2);
d.ddaline(d.x2,d.y2,d.x1,d.y2);
d.ddaline(d.x1,d.y2,d.x1,d.y1);
d.xmid=abs((d.x1+d.x2))/2;
d.ymid=abs((d.y1+d.y2))/2;
d.ddaline(d.xmid,d.y1,d.x2,d.ymid);// (x1,y1) and (x2,y1)
d.ddaline(d.x2,d.ymid,d.xmid,d.y2);
d.ddaline(d.xmid,d.y2,d.x1,d.ymid);
d.ddaline(d.x1,d.ymid,d.xmid,d.y1);

d.ddaline((d.xmid+d.x2)/2,(d.y1+d.ymid)/2,(d.x2+d.xmid)/2,(d.ymid+d.y2)/2);
d.ddaline((d.xmid+d.x2)/2,(d.y2+d.ymid)/2,(d.x1+d.xmid)/2,(d.ymid+d.y2)/2);
d.ddaline((d.xmid+d.x1)/2,(d.y2+d.ymid)/2,(d.x1+d.xmid)/2,(d.ymid+d.y1)/2);
d.ddaline((d.xmid+d.x1)/2,(d.y1+d.ymid)/2,(d.x2+d.xmid)/2,(d.ymid+d.y1)/2);

getch();
closegraph();
return 0;
}
