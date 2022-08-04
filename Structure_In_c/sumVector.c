#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} v;

v sumVector(v v1, v v2){
    v result;
    result.x = v1.x+ v2.x;
    result.y = v1.y+ v2.y;
    return result;
    

}

int main()
{
v v1, v2, sum;
v1.x = 10;
v2.x = 20;
v1.y = 15;
v2.y = 20;
sum = sumVector(v1, v2);
printf("sum of X vector v1 and v2 is %d\n",sum.x);
printf("sum of Y vector v1 and v2 is %d\n",sum.y);
    return 0;
}