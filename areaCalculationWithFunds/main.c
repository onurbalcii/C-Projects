#include <stdio.h>
#include <stdlib.h>

int  rectangle(int x1, int y1);
int  circle (float r1, float pi2);
int square (int k1);

int main(){

    int select;
    int area_rec;
    float area_circle;
    int area_square;


    printf("Please select to calculate (1)Rectangle, (2)Circle, (3)Square");
    scanf("%d", &select);

    switch(select){
        case 1: printf("Finding area of rectangle");
        int x;
        int y;
        scanf("%d%d",&x,&y);
        area_rec= rectangle(x,y);
        printf("Area of rectangle %d", area_rec);
        break;

    case 2:
        printf("Finding area of circle");
        float r ;
        float pi=3.14;
        scanf("%f",&r);
        area_circle = circle(r,pi);
        printf("Area of circle %f",area_circle);
        break;

    case 3:
        printf("Finding are of square");
        int K;
        scanf("%d", &K);
        area_square = square(K);
        printf("Area of square %d", area_square);
        break;

    default:
        printf("Wrong input\n");
    }

    return 0;
}

    int rectangle(int x1, int y1)
    {
        int area_rec = x1*y1;
        return area_rec;
    }

    int circle (float r1, float pi2)
    {
        int area_circle = r1*r1*pi2;
        return area_circle;
    }

    int square (int k1)
    {
        int area_square = k1*k1;
        return area_square;
    }
