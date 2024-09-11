#include<graphics.h>
//#include <conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm, NULL);
    circle(300,300,50);
    delay(10000);
    closegraph();
    getch();
}
