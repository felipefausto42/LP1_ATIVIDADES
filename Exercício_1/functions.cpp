#include <math.h>
// Modularização

float rectangle(int b, int h) { return b * h; }

float triangle(int b, int h) { return (b * h) / 2; }

float circle(int r) { return pow(r, 2) * M_PI; }
