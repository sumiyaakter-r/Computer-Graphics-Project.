#include <graphics.h>
#include <iostream>

void drawHouse();
void drawBangladeshFlag();
void drawEmoji();
void drawVillage();

int main()
{
    int choice;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    std::cout << "Choose an option:\n";
    std::cout << "1. House\n";
    std::cout << "2. National Flag of Bangladesh\n";
    std::cout << "3. Emoji\n";
    std::cout << "4. Village\n";

    std::cout << "Enter your choice (1 or 2 or 3 or 4): ";
    std::cin >> choice;

    cleardevice();

    switch (choice) {
        case 1:
            drawHouse();
            break;
        case 2:
            drawBangladeshFlag();
            break;
        case 3:
            drawEmoji();
            break;
       case 4:
            drawVillage();
            break;
        default:
            std::cout << "Invalid choice.\n";
            break;
    }

    getch();
    closegraph();
    return 0;
}

void drawHouse()
{
    // Draw house body with filling color
   line(100,100,150,50);
   line(150,50,200,100);

   line(150,50,350,50);
   line(350,50,400,100);

   rectangle(100,100,200,200);
   rectangle(200,100,400,200);
   rectangle(130,130,170,200);
   rectangle(250,120,350,180);

   //color
   setfillstyle(1,2);
   floodfill(131,131,WHITE);
   floodfill(201,101,WHITE);

   setfillstyle(9,10);
   floodfill(101,101,WHITE);
   floodfill(150,52,WHITE);
   floodfill(163,55,WHITE);
   floodfill(251,121,WHITE);
}

void drawBangladeshFlag()
{

 // Draw the national flag of Bangladesh
 setcolor(WHITE);
 setcolor(WHITE);
 rectangle(150,40,450,180);
 setfillstyle(1,GREEN);
 floodfill(160,50,WHITE);
 setcolor(WHITE);
 rectangle(138,35,150,450);
 setfillstyle(1,BLUE);
 floodfill(140,40,WHITE);
 setcolor(WHITE);
 bar(130,450,160,460);
 setcolor(WHITE);
 circle(300,110,55);
 setfillstyle(1,RED);
 floodfill(320,120,WHITE);
}

void drawEmoji()
{

     // Draw the face
     setfillstyle(SOLID_FILL,YELLOW);
     circle(300, 240, 100);
     floodfill(300,240,WHITE);

     setcolor(BLACK);
     setfillstyle(SOLID_FILL,BLACK);
     ellipse(240,190,360,0,10,20);
     floodfill(240,190,BLACK);

     ellipse(360,190,360,0,10,20);
     floodfill(360,190,BLACK);


     setcolor(WHITE);
     arc(300,223,230,315,95);
     arc(300,224,228,314,95);

     arc(300,225,226,312,95);
     arc(300,226,224,309,95);
     arc(300,227,222,310,95);



}
void drawVillage()
{
 //clouds 1
    ellipse(40,30,60,240,10,15);
    ellipse(65,20,345,165,20,15);
    ellipse(103,29,340,160,20,15);
    ellipse(109,42,230,50,20,10);
    ellipse(66,46,163,340,31,17);

    // clouds 2
    ellipse(200,30,60,240,10,15);
    ellipse(225,20,345,165,20,15);
    ellipse(262,27,340,160,20,15);
    ellipse(268,42,230,50,20,10);
    ellipse(226,46,163,340,31,15);
    ellipse(300,21,20,182,21,19);
    ellipse(325,31,290,100,21,15);
    ellipse(299,45,228,20,33,11);

    //clouds 3

    ellipse(450,30,60,240,10,15);

    ellipse(475,20,345,165,20,15);

    ellipse(512,27,340,160,20,15);

    ellipse(518,42,230,50,20,10);

    ellipse(476,46,163,340,31,15);

    // mountain 1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(0,150,100,75);
    line(100,75,200,150);

    // mountain 2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(175,131,275,75);
    line(275,75,375,150);

    // mountain 3
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,GREEN);
    line(350,131,450,75);
    line(450,75,550,150);

    // mountain 4

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,GREEN);

    line(525,131,600,75);

    line(600,75,750,180);

    // ground
    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);

    //sky
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(50,50,WHITE);

    // sun
     setcolor(WHITE);

    setfillstyle(SOLID_FILL,YELLOW);

    arc(524,112,0,173,30);

    floodfill(520,105,WHITE);


    // bigTree
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(46,330,64,420);
    floodfill(47,331,4);
    setcolor(4);
    setfillstyle(SOLID_FILL,4);
    rectangle(52,307,59,330);
    floodfill(53,308,4);
    setfillstyle(SOLID_FILL,4);
    bar(39,405,70,411);
    bar(41,400,69,406);
    bar(42,395,68,401);
    bar(43,390,67,396);
    bar(44,383,66,390);
    bar(45,378,65,383);
    bar(37,410,72,420);
    bar(35,417,74,423);
    bar(37,307,45,312);
    bar(38,312,46,316);
    bar(39,316,48,319);
    bar(40,319,48,321);
    bar(41,321,49,326);
    bar(42,326,49,331);
    bar(43,331,68,335);
    bar(44,335,67,339);
    bar(45,339,66,344);
    bar(67,307,74,312);
    bar(66,312,73,316);
    bar(65,316,72,320);
    bar(64,320,71,324);
    bar(63,324,70,328);
    bar(62,328,69,332);

    // leaf no 1
    setcolor(GREEN);
    circle(25,320,15);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(25,320,GREEN);

    // leaf n-2
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(20,299,20);
    floodfill(20,299,GREEN);

    //leaf n-3

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(28,271,20);
    floodfill(28,271,GREEN);

    //leaf n-4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(41,247,18);
    floodfill(41,247,GREEN);

    // leaf n-8
    // pata n-1
    setcolor(GREEN);
    circle(88,320,15);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(88,320,GREEN);

    //leaf n-7
     setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(97,305,16);
    floodfill(97,305,GREEN);

    // leaf n-6
     setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(100,280,22);
    floodfill(100,280,GREEN);

    //leaf n-5
     setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(95,252,17);
    floodfill(95,252,GREEN);

    // leaf n-4
    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(70,241,19);
    floodfill(70,241,GREEN);

    // leaf middle

    setcolor(GREEN);
    setfillstyle(SOLID_FILL,GREEN);
    circle(60,270,35);
    bar(20,310,90,290);
    floodfill(60,270,GREEN);


    // house

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(88,400,163,400);

    line(100,370,88,400);

    line(100,370,112,400);

    line(100,370,150,370);

    line(150,370,163,400);

    floodfill(100,375,WHITE);

    //main-tin

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTGRAY);

    line(88,400,163,400);

    line(100,370,112,400);

    line(100,370,150,370);

    line(150,370,163,400);

    floodfill(105,375,WHITE);

    //Side-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTCYAN);

    line(112,400,112,440);

    line(88,440,112,440);

    line(88,400,88,440);

    line(112,440,163,440);

    floodfill(90,402,WHITE);

    //main-wall

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,9);

    line(163,400,163,440);

    line(112,440,163,440);

    line(112,400,112,440);

    line(88,400,163,400);

    floodfill(115,405,WHITE);

    //window 1

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(120,415,130,415);

    line(120,415,120,427);

    line(120,427,130,427);

    line(130,415,130,427);

    floodfill(125,420,WHITE);

    //window 2

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,LIGHTRED);

    line(120,415,130,415);

    line(120,415,120,427);

    line(120,427,130,427);

    line(130,415,130,427);

    floodfill(125,421,WHITE);

    //door

    setcolor(WHITE);

    setfillstyle(SOLID_FILL,8);

    line(94,440,94,420);

    line(106,440,106,420);

    line(94,420,106,420);

    floodfill(97,435,WHITE);


    // river

        setcolor(WHITE);
        setfillstyle(2,LIGHTBLUE);
        bar(550,151,670,480);

        bar(500,200,650,480);

        bar(517,164,550,167);

        bar(527,160,550,164);

        bar(537,156,550,160);

        bar(543,152,550,156);

        bar(525,170,550,174);

        bar(511,177,550,183);

        bar(501,183,550,186);

        bar(494,186,550,190);

        bar(511,190,550,194);

        bar(502,194,550,196);

        bar(493,204,550,199);

        bar(487,203,550,208);

        bar(481,212,550,207);

        bar(473,211,550,217);

        bar(468,220,550,216);

        bar(493,227,550,224);

        bar(485,227,550,232);

        bar(478,235,550,231);

        bar(470,235,550,239);

        bar(463,243,550,238);

        bar(454,242,550,246);

        bar(450,245,550,250);

        bar(483,253,550,258);

        bar(476,261,550,257);

        bar(468,260,550,265);

        bar(460,269,550,264);

        bar(450,269,550,274);

        bar(442,278,550,273);

        bar(433,278,550,282);

        bar(425,286,550,281);

        bar(417,286,550,290);

        bar(476,293,550,298);

        bar(468,302,550,297);

        bar(462,301,550,306);

        bar(455,310,550,305);

        bar(449,309,550,314);

        bar(440,318,550,313);

        bar(433,317,550,322);

        bar(425,326,550,321);

        bar(418,325,550,330);

        bar(409,329,550,334);

        bar(407,336,550,333);

        bar(445,335,550,339);

        bar(464,347,550,342);

        bar(457,346,550,351);

        bar(448,356,550,350);

        bar(439,355,550,360);

        bar(427,366,550,359);

        bar(418,365,550,371);

        bar(408,375,550,370);

        bar(399,374,550,380);

        bar(448,382,550,379);

        bar(479,385,550,389);

        bar(473,388,550,392);

        bar(467,396,550,391);

        bar(461,395,550,401);

        bar(455,405,550,398);

        bar(445,404,550,410);

        bar(436,415,550,408);

        bar(426,414,550,420);

        bar(416,425,550,419);

        bar(406,424,550,431);

        bar(436,433,550,430);

        bar(469,432,550,437);

        bar(462,439,550,445);

        bar(452,450,550,443);

        bar(442,454,550,448);

        bar(434,453,550,457);

        bar(428,461,550,456);

        bar(420,460,550,466);

        bar(413,469,550,464);

        bar(406,467,550,473);

        bar(397,477,550,472);

        bar(392,475,550,480);

        // ROAD

         setfillstyle(9,RED);

    bar(0,423,390,500);

    bar(406,427,300,422);

    bar(401,425,300,430);

    bar(400,433,300,429);

    bar(455,434,300,432);

    bar(460,435,300,433);

    bar(465,434,300,437);

    bar(462,440,300,436);

    bar(458,439,300,445);

    bar(448,450,300,443);

    bar(438,454,300,448);

    bar(430,453,300,457);

    bar(424,461,300,456);

    bar(416,460,300,466);

    bar(405,469,300,464);

    bar(402,467,300,473);

    bar(393,477,300,472);

    bar(388,475,300,480);

    //small - road

    setfillstyle(1,RED);

    bar(0,210,160,220);

    bar(205,222,480,232);

    line(160,211,205,222);

    line(160,214,205,225);

    line(160,217,205,228);

    line(160,219,205,230);

}
