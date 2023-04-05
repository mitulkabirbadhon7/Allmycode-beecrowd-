#include <stdio.h>
    int main()
    {
        float x,y,m;

        scanf("%f %f", &x, &y);

        m = (x*3.5+y*7.5)/(3.5+7.5);

        printf("MEDIA = %.5f\n",m);

        return 0;
    }
