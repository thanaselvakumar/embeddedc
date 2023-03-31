#include<AT89S52.h>
#define FORWARD P1_0
#define RIGHT P1_1
#define LEFT P1_2
#define BACK P1_3
#define STOP P1_4
void main()
{
while(1)
{
if(FORWARD==0)
{
P0_0=0;
P0_1=0;
P0_2=0;
P0_3=0;
P0_4=1;
P0_5=1;
P0_6=1;
P0_7=1;
}
else if(RIGHT==0)
{
P0_0=1;
P0_1=0;
P0_2=1;
P0_3=0;
}
else if(LEFT==0)
{
P0_0=0;
P0_1=1;
P0_2=0;
P0_3=1;
}
else if(BACK==0)
{
P0_0=1;
P0_1=1;
P0_2=1;
P0_3=1;
P0_4=0;
P0_5=0;
P0_6=0;
P0_7=0;
}
else if(STOP==0)
{
P0_0=1;
P0_1=1;
P0_2=1;
P0_3=1;
P0_4=1;
P0_5=1;
P0_6=1;
P0_7=1;
}
}
}

