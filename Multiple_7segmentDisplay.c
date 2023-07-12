#include<AT89S52.h>
#define DATA P0
#define DIGIT P1
const char code[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main(){
	int a;
	int k=0;
	int m=0;
	int n=0;
	DATA =0xFF;
	DIGIT = 0x0F;
	while(1){
	for(a=0;a<10;a++){
	DATA =code[m];
	DIGIT = 0x07;
	DIGIT =0x0F;
	DATA =code[n];
	DIGIT = 0x0B;
	DIGIT =0x0F;
	DATA =code[k];
	DIGIT = 0x0D;
	DIGIT =0x0F;
	
	DATA =code[a];
	DIGIT = 0x0E;
	DIGIT =0x0F;
	
	}
	k++;
	if(k==9){
	n++;
	k=0;
	}
	if(n==9){
	m++;
	n=0;
	k=0;
	}
	}
}
