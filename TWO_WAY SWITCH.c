#include<AT89S53.h>
#define S1 P1_0
#define S2 P1_1
#define L1 P2_0
void main()
{
while(1)
{
if(S1==0 && S2==1)
{
L1=0;
}
else if(S1==1 && S2==0)
{
L1=0;
}
else if(S1==0 && S2==0)
{
L1=1;
}
else{
L1=1;
}
}
}
