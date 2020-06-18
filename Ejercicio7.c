# include <stdio.h>


int main(){

    int x=3;
    int y;
    float z;

    y=x+3; // y=3+3 siendo y=6
    printf("%d\n", y);//imprime 6
    y=3*x*x + 2*x + 1;// y=((3*3)*3)+(2*3)+1)=((9*3)+6+1)=(27+6+1=34) Imprime 34
    printf("%d\n", y);//imprime 34
    z=x*0.3;// z=(3*0.3)= 0.9
    printf("%f\n", z);//imprime 0.900000   
    z=y/x;// z=(34/3) =11.3333
    printf("%f\n", z);//imprime 11.00000 (programa imprime 11????)
    z=(float)y/x; //z=(34/3) = 11.3333
    printf("%f\n", z);//imprime 11. 33333 (float x, y)


    return 0;

}