#include<stdio.h>
int main()
{
    float l,w,area;  //l=length & w=width
    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
        printf("Enter the width of rectangle: ");
    scanf("%f",&w);
    area=l*w;
    printf("perimeter of rectangle = %0.2f",area);
    return 0;

}
