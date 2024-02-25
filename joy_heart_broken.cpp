#include<graphics.h>

void road(int color)
{
    setcolor(color);
    for(int i=0;i<3;i++)
    {
        line(0,450+i,700,450+i);
    }
    setcolor(WHITE);
}
void joy_open_legs(int speed, int color)
{
    int s = speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);

        line(50+i+s,350,50+i+s,400);

        line(50+i+s,400,30+i+s,450);
        line(50+i+s,400,70+i+s,450);

        line(50+s+i,360,20+s+i,400);
        line(50+s,360+i,80+s,400+i);
    }
}
void joy_close_legs(int speed, int color)
{
    int s = speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);
        
        line(50+i+s,350,50+i+s,400);

        line(50+i+s,400,50+i+s,450);
        line(50+i+s,400,50+i+s,450);

        line(50+s+i,360,20+s+i,400);
        line(50+s,360+i,80+s,400+i);
    }
}
void nupur_open_legs(int speed, int color)
{
    int s = speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);

        line(50+i+s,350,40+i+s,400);
        line(50+i+s,350,60+i+s,400);
        line(40+s,400-i,60+s,400-i);

        line(50+i+s,400,30+i+s,450);
        line(50+i+s,400,70+i+s,450);

        line(50+s+i,350,20+s+i,400);
        line(50+s+i,350,80+s+i,400);
    }
}
void nupur_close_legs(int speed, int color)
{
    int s = speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);

        line(50+i+s,350,40+i+s,400);
        line(50+i+s,350,60+i+s,400);
        line(40+s,400-i,60+s,400-i);

        line(50+i+s,400,50+i+s,450);
        line(50+i+s,400,50+i+s,450);

        line(50+s+i,350,20+s+i,400);
        line(50+s+i,350,80+s+i,400);
    }
}

void nupur_chat_1(int speed,int box_color,int text_color)
{
    int s=speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(55+s,230,"Hello Joy");
    // outtextxy(100+s,240,"Joy");
}
void nupur_chat_2(int speed,int box_color,int text_color)
{
    int s = speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,140+s+50,200,140+s+50,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(40+s,210,"What do you");
    outtextxy(40+s,240,"want to say?");
}
void nupur_chat_3(int speed,int box_color,int text_color)
{
    int s = speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,30+s,270,30+s,200,150+s+50,200,150+s+50,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(40+s,210,"Sorry Joy,I");
    outtextxy(40+s,240,"can't love you");
}
void joy_chat_1(int speed,int box_color,int text_color)
{
    int s=speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,-80+s,270,-80+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(-70+s,230,"Hello ***ur");
}
void joy_chat_2(int speed, int box_color,int text_color)
{
    int s=speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,-110+s,270,-110+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(-105+s,210,"***ur,I want to");
    outtextxy(-99+s,240,"say something");
}
void joy_chat_3(int speed,int box_color,int text_color)
{
    int s=speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,-110+s,270,-110+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(-105+s,210,"I love you with");
    outtextxy(-99+s,240,"all my brain");
}
void joy_chat_4(int speed,int box_color,int text_color)
{
    int s=speed;
    setcolor(box_color);
    int points[16]={50+s,280,40+s,270,-110+s,270,-110+s,200,70+s,200,70+s,270,60+s,270,50+s,280};
    drawpoly(8,points);

    setcolor(text_color);
    settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
    outtextxy(-105+s,210,"Do you love");
    outtextxy(-99+s,240,"me?");
}
void joy_with_rose(int speed, int color)
{
    int s=speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);
        line(50+i+s,350,50+i+s,400);

        line(50+i+s,400,30+i+s,450);
        line(50+i+s,400,70+i+s,450);

        line(50+s+i,360,20+s+i,400);

        line(50+s,360+i,80+s,380+i);
        line(80+i+s,380,100+i+s,360);
    }

    setcolor(LIGHTGREEN);
    for(int i=0;i<2;i++)
        line(100+i+s,360,100+i+s,345);
    setcolor(LIGHTRED);
    for(int i=10,h=0;i>=0;i--,h++)
    {
        line(90+i+s,345-h,110-i+s,345-h);
    }
}
void joy_rose_break(int speed,int color)
{
    int s = speed;
    for(int i=0;i<3;i++)
    {
        setcolor(color);
        circle(50+s,320,30+i);
        line(50+i+s,350,50+i+s,400);

        line(50+i+s,400,30+i+s,450);
        line(50+i+s,400,70+i+s,450);

        line(50+s+i,360,20+s+i,400);

        line(50+s,360+i,80+s,380+i);
        line(80+i+s,380,100+i+s,360);

    }
    
    setcolor(LIGHTGREEN);
    for(int i=0;i<2;i++)
    {
        line(100+i+s,360,100+i+s,350);
        line(100+s,350+i,110+s,350+i);
    }
    setcolor(LIGHTRED);
    for(int i=1,h=0;i<=10;i++,h++)
    {
        line(110+s+i,350-i,110+i+s,350+i);
    }
}
void joy_rose_fall(int speed,int height_speed)
{
    int s = speed;
    int hs= height_speed;
    setcolor(LIGHTGREEN);
    for(int i=0;i<2;i++)
    line(100+i+s,360+hs,120+i+s,360+hs);
	setcolor(LIGHTRED);
	for(int i=1;i<=10;i++)
	{
		line(120+s+i,360-i+hs,120+i+s,360+i+hs);
	}
}
void cloud(int speed, int color)
{
    setcolor(LIGHTGRAY);
    int a=speed;
    int i=2;
    
        arc(50+a,50+2,20,160,25+i);
		arc(100-2+a,50+2,20,160,25+i);
		
		arc(50+a,80-4,180+20,360-20,25+i);
		arc(100-2+a,80-4,180+20,360-20,25+i);
	    
		arc(25+5+a,65,90+10,270-10,20+i);     
	    
		arc(125-5+a,65,270,90,20+i);
        setfillstyle(1,color);
	    floodfill(50+a,75,LIGHTGRAY);
}
void rain(int speed, int drop_size)
{
    setcolor(LIGHTCYAN);
    for(int i=0;i<30;i++)
    {
        settextstyle(0,HORIZ_DIR,drop_size);
        outtextxy(speed+rand()%150,100+rand()%345,"|");
    }
    setcolor(WHITE);
}
void finising()
{
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(130,200,"Sad Valentines Day");
    setcolor(LIGHTBLUE);
    settextstyle(EUROPEAN_FONT,HORIZ_DIR,5);
    outtextxy(200,250,"Sad Coding");
}
int main()
{
    initwindow(700,550,"Joy's_heart_broken",150,50);
    int page=0;
    int js=4;
    int ns=4;
    int n=0;
    int cs=650;
    int rf=0;
    while (n<=420)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        
        if(n<20)
        {
            road(15);
            joy_open_legs(js,14);
            nupur_open_legs(280,13);
        }

        if(n>=20 && n<=60)
        {
            road(15);
            if(n%2==0)
            joy_open_legs(js,14);   
            else
            joy_close_legs(js,14);
            nupur_open_legs(280,13);
            js+=4;
        }
        if(n>60 && n<=70)
        {
            if(n==61)
            delay(10);
            road(15);
            joy_open_legs(js,14);
            if(n==61)
            joy_chat_1(js,15,14);
            if(n==62)
            delay(5);
            nupur_open_legs(280,13);
            if(n==63)
            nupur_chat_1(280,15,13);
            if(n==64)
            joy_chat_2(js,15,14);
            delay(10);
            if(n==65)
            nupur_chat_2(280,15,13);
            delay(1000);

        }

        if(n>70 && n<=80)
        {
            if(n==71)
            delay(10);
            road(15);
            joy_with_rose(js,14);
            if(n==71)
            joy_chat_3(js,15,14);
            if(n==72)
            joy_chat_4(js,15,14);
            delay(2000);
            if(n==72)
            delay(4000);
            nupur_open_legs(280,13);
            if(n==73)
            nupur_chat_3(280,15,13);
            if(n==74)
            delay(50);
        }
        if(n>80 && n<=170)
        {
            road(15);
            joy_with_rose(js,14);
            if(n%2==0)
            nupur_open_legs(280+ns,13);
            else
            nupur_close_legs(280+ns,13);
            ns+=4;
        }
        if(n>170 && n<220)
        {
            road(15);
            joy_with_rose(js,14);
            cloud(cs,15);
            cs-=10;
        }
        if(n>=220 && n<=280)
        {
            road(15);
            joy_rose_break(js,14);
            cloud(cs,15);
            rain(js,2);
        }
        if(n>280 && n<=330)
        {
            road(15);
            cloud(cs,15);
            rain(js,2);
            joy_rose_fall(200,rf);
            joy_open_legs(js,14);
            rf+=2;
        }
        if(n>330 && n<420)
        {
            road(15);
            cloud(js,15);
            rain(js,2);
            joy_rose_fall(200,rf);
            if(n%2==0)
            joy_open_legs(js,14);
            else
            joy_close_legs(js,14);
            js-=4;
        }
        
        page=1-page;
        delay(50);
        
        n++;
    }
    setactivepage(1);
    finising();

    getch();
    closegraph();
    return 0;
}