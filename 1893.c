/* 1893 - Moon Phases */

#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(3<=b && b<=96 && b>a)printf("crescente\n");
    else if(3<=b && b<=96 && a>b)printf("minguante\n");
    else if(0<=b && b<=2)printf("nova\n");
    else if(97<=b && b<=100)printf("cheia\n");

    return 0;
}
