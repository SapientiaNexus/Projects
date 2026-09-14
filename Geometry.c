#include <stdio.h>
#include <math.h>
int main()
{
    double radius;
    double area;
    double circumference;
    double surface_area;
    const double PI = 3.14159;
    double volume;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);
    area= PI*pow(radius,2);;
    circumference=2*PI*radius;
    surface_area=4*PI*(pow(radius,2));   
    volume=(4.0/3.0)*PI*pow(radius,3) ;
    printf("Area: %.2lf\n", area);
    printf("Circumference: %.2lf\n", circumference);
    printf("Surface Area: %.2lf\n", surface_area);
    printf("Volume: %.2lf\n", volume);

}