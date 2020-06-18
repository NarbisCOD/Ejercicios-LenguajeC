#include <stdio.h>

#define DATO 4

int main (){

int x, y=1;
float z;

x=3/2+10-3; //X=(1+10)-3 =(11-3)=8 result X=8;
z=3.0/2.0+10-3; //X=(1.5+10)=(11.5-3)=8.5 result X=8.5;

printf("%d -- %f\n", x, z); //imprime 8 - 8.5
printf("%d\n", DATO*3+1/2); // (4*3)+(1/2)=(12+0.5)= 12.5; imprime 12 (result 12 por el tipo de dato Entero con signo)
printf("%d\n", 5+2-1>5);//((5+2=7)-1)=(7-1)>5= 6>5(true=1) imprime 1
printf("%dn", 3>1 || DATO*2<1); // 3>1(true=1) || (DATO*2)<1=(4*2)<1 = 8<1 (false=0)) imprime 1
printf("%d\n", (5!=1&&DATO>2); // 5!=1 (true=1) && 4>2(true=1) imprime 1
y=x; // y=8
printf("%d\n", x+y<=z); // si 8+8<=8.5, por lo que  16<=8.5(False=0)imprime 0

}
