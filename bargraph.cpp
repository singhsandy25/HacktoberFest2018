#include <graphics.h>
#include <conio.h>
using namespace std;

main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   outtextxy(275,0,"Bar Chart"); // hi

    line(100,420,100,60);
   line(100,420,600,420);
   line(90,70,100,60);
   line(110,70,100,60);
   line(590,410,600,420);
    line(590,430,600,420);

   outtextxy(95,35,"Y");
   outtextxy(610,405,"X");
   outtextxy(85,415,"O");

   setfillstyle(LINE_FILL,BLUE);
   bar(150,100,200,419);

   setfillstyle(XHATCH_FILL,RED);
   bar(225,150,275,419);

   setfillstyle(WIDE_DOT_FILL,GREEN);
   bar(300,200,350,419);

   getch();
   return 0;
}
