#include<AT89S53.h>
void main()
{
while(1)
{
if(P1_0==0)
{
P2_0=0;
}
else
{
P2_0=1;
}
}
}
