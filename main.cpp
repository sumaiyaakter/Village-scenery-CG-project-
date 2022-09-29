#include <graphics.h>
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

//***************Tree Start ***************//

//*** 1st tree ***//
// vertical line
    line(100,300,100,398);
    line(130,300,130,398);

    // horizontal line
    line(70,300,160,300);

    // diagonal line
    line(70,300,100,270);
    line(160,300,130,270);

    // horizontal line
    line(70,270,100,270);
    line(130,270,160,270);

    // diagonal line
    line(70,270,100,240);
    line(160,270,130,240);

    // horizontal line
    line(80,240,100,240);
    line(130,240,150,240);

    // diagonal line
    line(80,240,115,200);
    line(150,240,115,200);

    //*** 2nd tree ***//
    // vertical line
    line(180,340,180,398);
    line(210,340,210,398);

    // horizontal line
    line(162,340,230,340);

    // diagonal line
    line(162,340,200,290);
    line(230,340,200,290);

    //*************** Tree End ***************//



    getch();
    closegraph();
}
