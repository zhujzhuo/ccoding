#include <stdio.h>
#include <math.h>

int minute = 360;
int absolute_value(int x)
{
if (x < 0) {
    return -x;
} else if (x > 0) {
    return x;
}
}
int main()
{
   int hour = minute / 60;
   printf("%d:\n",minute);
   int i=absolute_value(-1);
   int j=absolute_value(2);
   int h=absolute_value(0);
   int g=fabs(0);
   printf("i:%d\n",i);
   printf("j:%d\n",j);
   printf("h:%d\n",h);
   printf("g:%d\n",g);
   return 0;

}
