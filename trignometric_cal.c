#include <stdio.h>
#include <math.h>


double sine(double degrees) {
    double radians = degrees * M_PI / 180.0;
    return sin(radians);
}


double cosine(double degrees) {
    double radians = degrees * M_PI / 180.0;
    return cos(radians);
}


double tangent(double degrees) {
    double radians = degrees * M_PI / 180.0;
    return tan(radians);
}
