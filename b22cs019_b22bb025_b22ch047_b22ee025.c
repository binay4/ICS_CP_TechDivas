#include <stdio.h>
#include <math.h>

double Rectangle_Area(double length, double breadth);
double Square_Area(double side);
double Circle_Area(double radius);
double Triangle_Area(double base, double height);
double Parallelogram_Area(double base, double height);
double Trapezoid_Area(double base1, double base2, double height);
double Ellipse_Area(double major_axis, double minor_axis);

int main() {
    int choice;
    
    do {
        
        printf("\nGeometry Area Calculator\n");
        printf("Type 1 for Rectangle\n");
        printf("Type 2 for Square\n");
        printf("Type 3 for Circle\n");
        printf("Type 4 for Triangle\n");
        printf("Type 5 for Parallelogram\n");
        printf("Type 6 for Trapezoid\n");
        printf("Type 7 for Ellipse\n");
        printf("Type 8 to Exit\n");
        printf("NOTE:value of pi = 3.14 .\n And all the dimensions are taken in standard unit. \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
            {
                double length, breadth;
                printf("Enter length and breadth: ");
                scanf("%lf %lf", &length, &breadth);
                printf("Area of Rectangle: %.2f\n", Rectangle_Area(length, breadth));
                break;
            }
            case 2: 
            {
                double side;
                printf("Enter side length: ");
                scanf("%lf", &side);
                printf("Area of Square: %.2f\n", Square_Area(side));
                break;
            }
            case 3: 
            {
                double radius;
                printf("Enter radius: ");
                scanf("%lf", &radius);
                printf("Area of Circle: %.2f\n", Circle_Area(radius));
                break;
            }
            case 4: 
            {
                double base, height;
                printf("Enter base and height: ");
                scanf("%lf %lf", &base, &height);
                printf("Area of Triangle: %.2f\n", Triangle_Area(base, height));
                break;
            }
            case 5: 
            {
                double base, height;
                printf("Enter base and height: ");
                scanf("%lf %lf", &base, &height);
                printf("Area of Parallelogram: %.2f\n", Parallelogram_Area(base, height));
                break;
            }
            case 6: 
            {
                double base1, base2, height;
                printf("Enter bases and height: ");
                scanf("%lf %lf %lf", &base1, &base2, &height);
                printf("Area of Trapezoid: %.2f\n", Trapezoid_Area(base1, base2, height));
                break;
            }
            case 7: 
            {
                double major_axis, minor_axis;
                printf("Enter major and minor axes: ");
                scanf("%lf %lf", &major_axis, &minor_axis);
                printf("Area of Ellipse: %.2f\n", Ellipse_Area(major_axis, minor_axis));
                break;
            }
            case 8: 
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}



double Rectangle_Area(double length, double breadth) {
    return length * breadth;
}

double Square_Area(double side) {
    return side * side;
}

double Circle_Area(double radius) {
    return 3.14 * radius * radius;
}

double Triangle_Area(double base, double height) {
    return 0.5 * base * height;
}

double Parallelogram_Area(double base, double height) {
    return base * height;
}

double Trapezoid_Area(double base1, double base2, double height) {
    return 0.5 * (base1 + base2) * height;
}

double Ellipse_Area(double major_axis, double minor_axis) {
    return 3.14* major_axis * minor_axis;
}
