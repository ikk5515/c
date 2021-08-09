#include <stdio.h>
#include <stdlib.h>

struct Point3D {
    float x;
    float y;
    float z;
};

struct Point3D *allocPoint3D(float num1, float num2, float num3){
    struct Point3D *p = malloc(sizeof(struct Point3D));

    p->x = num1;
    p->y = num2;
    p->z = num3;

    return p;
    free(p);
}





int main()
{
    float x, y, z;
    struct Point3D *pos1;
   
    scanf("%f %f %f", &x, &y, &z);

    pos1 = allocPoint3D(x, y, z);

    printf("%f %f %f\n", pos1->x, pos1->y, pos1->z);

    free(pos1);

    return 0;
}