#include <stdio.h>

int main()
{
    float radius, base, height, side, length, breadth;
    float circle, triangle, square, rectangle;

    // Area of Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circle = 3.14 * radius * radius;
    printf("Area of Circle = %.2f\n", circle);

    // Area of Triangle
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    triangle = 0.5 * base * height;
    printf("Area of Triangle = %.2f\n", triangle);

    // Area of Square
    printf("\nEnter side of square: ");
    scanf("%f", &side);
    square = side * side;
    printf("Area of Square = %.2f\n", square);

    // Area of Rectangle
    printf("\nEnter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    rectangle = length * breadth;
    printf("Area of Rectangle = %.2f\n", rectangle);

    return 0;
}