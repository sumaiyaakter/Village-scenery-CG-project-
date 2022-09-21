

#include <stdlib.h>




#include <graphics.h>
int main()
{

 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");
 line(200, 70, 400, 70);//1st start line or row
 line(100, 150, 500, 150);// 2nd start line or row
 line(100, 400, 500, 400);// 3rd start line or row
 line(200, 150, 200, 400);//left middle coloum
 line(400, 150, 400, 400);//right middle coloum
 line(200, 70, 100, 150);
 line (200, 70,300, 150);
 line(400, 70, 500, 150);
 line(100, 150, 100, 400);//left coloum
 line(500, 150, 500, 400);//right coloum
 line(120,220,180,220);// left window-//row 1
 line(120,330,180,330);//row 3
 line(120,275,180,275);//row 2
 line(120,220,120,330);//coloum 1
 line(180,220,180,330);//coloum 3
 line(150,220,150,330);//coloum 2
 line(420,220,480,220);//right window -row 1
 line(420,330,480,330);//row 2
 line(420,275,480,275);//row 3
 line(420,220,420,330);//coloum 1
 line(480,220,480,330);//coloum 3
 line(450,220,450,330);//coloum 2
 // door
 line(300,150,300,400);//middle coloum of door
 line(220,180,280,190);//left side of door
 line(220,370,280,360);
 line(220,180,220,370);
 line(280,190,280,360);
 //right side of door
 line(320,190,380,180);
 line(320,360,380,370);
 line(320,190,320,360);
 line(380,180,380,370);
 // for tree
  line(30,80,30,420);
  line(90,80,90,420);
  //root
  line(30,420,20,450);
  line(90,420,100,450);
  line(20,450,40,420);
  line(40,420,50,450);
  line(50,450,70,420);
  line(70,420,100,450);
  line(30,80,10,60);
  line(30,60,50,80);
  line(50,80,50,60);
  line(70,80,70,60);
  line(90,80,110,60);
  line(70,80,90,60);
 getch();
 closegraph();
}
