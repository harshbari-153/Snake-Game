//Harsh Bari

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void gotoxy(int a, int b)
{
	COORD c;
	c.X = a;
	c.Y = b;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void main()
{
int a,b,c,d,x[2000],y[2000],e,a1,b1,t,check,l,score,t1;
char name[100];
system("CLS");
printf("Welcome to snake game\n");
printf("Press any key to continue.....");
getche();
system("CLS");
printf("Instructions:\n");
printf("Press 't' to go up\n");
printf("Press 'v' to go down\n");
printf("Press 'l' to go right\n");
printf("Press 'a' to go left\n");
printf("Press 'p' to go pause\n");
printf("Press 2 times 0 to exit\n");
printf("If unneccery things are printed on screen then,\npress any key except these predefined keys to refresh the screen");
printf("\nPress any key to continue......");
getche();
system("CLS");
printf("Enter your name:");
scanf("%s",&name);
start:
system("CLS");
for(t1=3;t1>=0;t1--)
{
gotoxy(30,2);
printf("Welcome %s",name);
gotoxy(25,3);
printf("Game begains in %d seconds",t1);
delay(1000);
}
system("CLS");

a=3;
score=-1;
e=200;
t=0;
b=10;
l=0;
x[0]=1;
y[0]=10;
x[1]=2;
y[1]=10;
food:
if(t==0)
{
l=l+2;;
score++;
x[l]=a;
y[l]=b;
srand(time(0));
a1=(rand()%78)+2;
b1=(rand()%22)+2;
gotoxy(a1,b1);
printf("0");
t=1;
   e=e-10;
 if(check==1)
 goto right1;
 else if(check==2)
 goto up1;
 else if(check==3)
 goto down1;
 else if(check==4)
 goto left1;
 else
 {
 }
}
while(a<=80)
{      right:
gotoxy(a1,b1);
printf("0");
  gotoxy(70,2);
printf("Score:%d",score);
gotoxy(a+1,b);
if(a==80)
a=1;
else
a++;
if(kbhit()!=0)
{ c=getche();
  if(c=='0')
goto end;
else if(c=='t')
{
gotoxy(a,b);
printf(" ");
gotoxy(a,b);
printf(" ");
goto up;
}
else if(c=='v')
{
gotoxy(a,b);
printf(" ");
gotoxy(a,b);
printf(" ");
goto down;
}
else if(c=='p')
{
gotoxy(a,b);
printf(" ");
gotoxy(a,b);
printf(" ");
gotoxy(30,10);
printf("Game Paused");
gotoxy(25,11);
printf("Press any key to resume");
getche();
gotoxy(30,10);
printf("                ");
gotoxy(25,11);
printf("                          ");
}
else
{         system("CLS");
}
}
gotoxy(a,b);
printf("*");
for(d=0;d<(l-1);d++)
{        if(a==x[d] && b==y[d])
{
gotoxy(30,10);
printf("Game Over %s",name);
gotoxy(28,11);
printf("Your Score:%d",score);
gotoxy(25,12);
printf("Press 'f' to replay or press any key twice to exit");
if(getche()=='f')
goto start;
else
goto end;
}
}
if(a==a1 && b==b1)
{           t=0;
check=1;
goto food;
}
gotoxy(x[0],y[0]);
printf(" ");
for(d=0;d<l;d++)
{ x[d]=x[d+1];
y[d]=y[d+1];
}
x[l]=a;
y[l]=b;
right1:
delay(e);

}
while(b>=1)
{      up:
gotoxy(a1,b1);
printf("0");
  gotoxy(70,2);
printf("Score:%d",score);
gotoxy(a,b-1);
if(b==1)
b=24;
else
b--;
if(kbhit()!=0)
{ c=getche();
  if(c=='0')
goto end;
else if(c=='a')
{
gotoxy(a+1,b+4);
printf(" ");
gotoxy(a,b);
printf(" ");
goto left;
}
else if(c=='l')
{
gotoxy(a+1,b+4);
printf(" ");
gotoxy(a,b);
printf(" ");
goto right;
}
else if(c=='p')
{
gotoxy(a+1,b+4);
printf("  ");
gotoxy(a+1,4);
printf("     ");
  gotoxy(30,10);
printf("Game Paused");
gotoxy(25,11);
printf("Press any key to resume");
getche();
gotoxy(30,10);
printf("                ");
gotoxy(25,11);
printf("                          ");
}
else
{          system("CLS");
}
}
gotoxy(a,b);
printf("*");
for(d=0;d<(l-1);d++)
{        if(a==x[d] && b==y[d])
{
gotoxy(30,10);
printf("Game Over %s",name);
gotoxy(28,11);
printf("Your Score:%d",score);
gotoxy(25,12);
printf("Press 'f' to replay or press any key twice to exit");
if(getche()=='f')
goto start;
else
goto end;
}
}
if(a==a1 && b==b1)
{           t=0;
check=2;
goto food;
}
gotoxy(x[0],y[0]);
printf(" ");
for(d=0;d<l;d++)
{ x[d]=x[d+1];
y[d]=y[d+1];
}
x[l]=a;
y[l]=b;
up1:
delay(e);

}
while(b<=24)
{      down:
gotoxy(a1,b1);
printf("0");
  gotoxy(70,2);
printf("Score:%d",score);
gotoxy(a,b+1);
if(b==24)
b=1;
else
b++;
     if(kbhit()!=0)
{ c=getche();
  if(c=='0')
goto end;
else if(c=='a')
{
gotoxy(a+1,b-4);
printf(" ");
gotoxy(a,b);
printf(" ");
goto left;
}
else if(c=='l')
{
gotoxy(a+1,b-4);
printf(" ");
gotoxy(a,b);
printf(" ");
goto right;
}
else if(c=='p')
{
gotoxy(a+1,b-4);
printf("  ");
gotoxy(a,25);
printf("  ");
gotoxy(30,10);
printf("Game Paused");
gotoxy(25,11);
printf("Press any key to resume");
getche();
gotoxy(30,10);
printf("                ");
gotoxy(25,11);
printf("                          ");
}
else
{      system("CLS");
}
}
gotoxy(a,b);
printf("*");
for(d=0;d<(l-1);d++)
{        if(a==x[d] && b==y[d])
{
gotoxy(30,10);
printf("Game Over %s",name);
gotoxy(28,11);
printf("Your Score:%d",score);
gotoxy(25,12);
printf("Press 'f' to replay or press any key twice to exit");
if(getche()=='f')
goto start;
else
goto end;
}
}
if(a==a1 && b==b1)
{           t=0;
check=3;
goto food;
}
gotoxy(x[0],y[0]);
printf(" ");
for(d=0;d<l;d++)
{ x[d]=x[d+1];
y[d]=y[d+1];
}
x[l]=a;
y[l]=b;
down1:
delay(e);

}
while(a>=1)
{      left:
gotoxy(a1,b1);
printf("0");
  gotoxy(70,2);
printf("Score:%d",score);
gotoxy(a-1,b);
if(a==1)
a=80;
else
a--;
     if(kbhit()!=0)
{ c=getche();
  if(c=='0')
goto end;
else if(c=='t')
{
gotoxy(a+2,b);
printf("*");
gotoxy(a+5,b);
printf(" ");
gotoxy(a,b);
printf(" ");
goto up;
}
else if(c=='v')
{
gotoxy(a+2,b);
printf("*");
gotoxy(a+5,b);
printf(" ");
gotoxy(a,b);
printf(" ");
goto down;
}
else if(c=='p')
{
gotoxy(a+2,b);
printf("*");
gotoxy(a+5,b);
printf(" ");
gotoxy(5,b);
printf("  ");
gotoxy(30,10);
printf("Game Paused");
gotoxy(25,11);
printf("Press any key to resume");
getche();
gotoxy(30,10);
printf("                ");
gotoxy(25,11);
printf("                          ");
}
else
{     system("CLS");
}
}
gotoxy(a,b);
printf("*");
for(d=0;d<(l-1);d++)
{        if(a==x[d] && b==y[d])
{
gotoxy(30,10);
printf("Game Over %s",name);
gotoxy(28,11);
printf("Your Score:%d",score);
gotoxy(25,12);
printf("Press 'f' to replay or press any key twice to exit");
if(getche()=='f')
goto start;
else
goto end;
}
}
if(a==a1 && b==b1)
{           t=0;
check=4;
goto food;
}
gotoxy(x[0],y[0]);
printf(" ");
for(d=0;d<l;d++)
{ x[d]=x[d+1];
y[d]=y[d+1];
}
x[l]=a;
y[l]=b;
left1:
delay(e);

}
gotoxy(40,2);
printf("Game over %s",name);
printf("Press anykey to exit");
getche();
end:
getche();
}
