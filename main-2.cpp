#include <graphics.h>
void Line(int X0,int Y0,int X1,int Y1)
     {
      int XX=X1-X0;
      int YY=Y1-Y0;
      int Pk=(2*YY)-XX;
      while(X0<X1)
         {
         if(Pk<0)
                {
                Pk=Pk+(2*YY);
                X0=X0+1;
                putpixel(X0,Y0,15);
                }
          else{
                Pk=Pk+((2*YY)-(2*XX));
                X0=X0+1;
                Y0=Y0+1;
                putpixel(X0,Y0,15);
              }

         }
     }
int main()
{

 int gd = DETECT, gm;
 initgraph(&gd, &gm, "");
 initwindow(2000, 1000); // window size

 // for first house
 line(300,220,500,220);//first upper row of house
 line(250,300,450,300);// Second row of the house
 // coloum
 line(300,220,250,300);//left side coloum
 line(500,220,450,300);//left middle coloum
 //right  side coloum
 line(500,220,550,300);//right side coloum
 line(490,240,530,300);//right middle coloum
 line(530,300,550,300);// small row of house
 //baricate
 line(280,300,280,350);// baricate coloum left side
 line(530,300,530,350);// baricate coloum right side
 line(430,300,430,350);// baricate coloum middle
 // base
 line(280,350,530,350);// base or ground row of the house(Min)
 line(270,360,540,360);// base or ground row of the house(Max)
 // 3 samall coloum of house base
 line(280,350,270,360);// right side
 line(530,350,540,360);//left side
 line(430,350,440,360);//Middle side
 // for Second house
 line(100,400,300,400);//first upper row of house
 line(50,480,250,480);// Second row of the house
  // coloum
 line(100,400,50,480);//left side coloum
 line(300,400,250,480);//left middle coloum
 //right  side coloum
 line(300,400,350,480);//right side coloum
 line(290,420,330,480);//right middle coloum
 line(350,480,330,480);// small row of house2
 // baricate of house 2
 line(70,480,70,530);// baricate coloum left side
 line(330,480,330,530);// baricate coloum right side
 line(230,480,230,530);//baricate coloum middle
 //base
 line(70,530,330,530);// base or ground row of the house(Min)
 line(60,540,340,540);// base or ground row of the house(Max)
 // 3 samall coloum of house base
 line(330,530,340,540);// right side
 line(70,530,60,540);//left side
 line(230,530,240,540);//Middle side
 // tree create body 1st
 line(110,400,110,350);// tree body right side
 line(130,400,130,350);// tree body left side
 // tree stalks
 line(110,350,90,330);// right side
 line(130,350,160,330);//left side
 line(117,350,97,330);
 line(123,350,153,330);
 line(117,350,117,330);
 line(123,350,123,330);
 //leaf [ six perameter (x, y, start angle, end angle, x radius, y radius)]
ellipse(90, 300, 90, 280, 25, 30);
ellipse(76, 270, 60, 240, 25, 30);
ellipse(80, 242, 40, 200, 29, 30);
ellipse(110, 217, 20, 170, 29, 30);
ellipse(140, 217, 0, 120, 29, 30);
ellipse(150, 227, 310, 60, 35, 30);
ellipse(164, 250, 280, 50, 35, 30);
ellipse(160, 280, 260, 22, 35, 30);
ellipse(153, 300, 270, 370, 35, 30);

 // tree create body 2nd
 line(450,220,450,190);// tree body right side
 line(480,220,480,190);// tree body left side
 // tree stalks
 line(480,190,500,170);//right side
 line(450,190,430,170);// left side
 line(460,190,440,170);
 line(470,190,490,170);
 line(460,190,460,170);
 line(470,190,470,170);
  //leaf
ellipse(430, 140, 90, 280, 25, 30);
ellipse(415, 110, 60, 240, 25, 30);
ellipse(420, 82, 40, 200, 29, 30);
ellipse(450, 57, 20, 170, 29, 30);
ellipse(480, 57, 0, 120, 29, 30);
ellipse(490, 67, 310, 60, 35, 30);
ellipse(504, 90, 280, 50, 35, 30);
ellipse(500, 120, 260, 22, 35, 30);
ellipse(493, 140, 270, 370, 35, 30);

// River side
// thoe are help us to create a river view
line(0,310,280,310);//left starting point of river
line(530,310,700,310);//Right side of river
line(700,310,730,330);//river side
// first
line(730,330,670,360);
line(730,330,730,360);
line(730,360,670,360);
line(730,345,670,360);
//back
line(670,360,740,400);
//2nd
line(740,400,660,440);
line(740,400,740,440);
line(740,440,660,440);
line(740,420,660,440);
//back
line(660,440,770,520);
//3rd
line(770,520,680,560);
line(770,520,770,560);
line(770,560,680,560);
line(770,540,680,560);
//back
line(680,560,780,650);
//4th
line(780,650,680,710);
line(780,650,780,710);
line(780,710,680,710);
line(780,680,680,710);
//back
line(680,710,800,1024);
// finished of river side
// river boat
int i=0;
line(710+i,305,890+i,305);// boat bellow part line
line(710+i,305,650+i,270); //left side part
line(650+i,270,720+i,290);//back of left side
line(890+i,305,950+i,270);//right part of the boat
line(950+i,270,880+i,290);//back of right side
Line(720,290,880,290);


getch();
 closegraph();
}
