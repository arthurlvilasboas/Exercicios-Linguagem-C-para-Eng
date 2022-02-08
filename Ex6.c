/* 6. Diga o resultado das vari´aveis x, y e z depois da seguinte seqˆencia de opera¸c˜oes:
int x,y,z;
x=y=10;
z=++x;
x=-x;
y++;
x=x+y-(z--); */


// 6
#include<stdio.h>
    int main(){
        int x,y,z;
        x=y=10;
        z=++x;
        x=-x;
        y++;
        x=x+y-(z--);
        printf("O valor de x = %d, de y = %d e de z = %d",x,y,z);
        return 0;
}