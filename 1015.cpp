/* 1015 - Distance Between Two Points */

#include <stdio.h>
#include <math.h>
int main()
{
float x1,y1,x2,y2;

scanf("%f %f", &x1, &y1);
scanf("%f %f", &x2, &y2);
printf("%.4f\n", sqrt((x2*x2-2*x2*x1+x1*x1)+(y2*y2-2*y2*y1+y1*y1)));

    return 0;
}
