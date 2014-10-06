/*
 * Calculate the area of a triangle
 */
 
 #include <math.h>
 #include "geom.h"
 
 double area(struct triangle t)
 {
     return fabs((t.a.x*(t.b.y-t.c.y))+(t.b.x*(t.c.y-t.a.y))+(t.c.x*(t.a.y-t.b.y))) ;
 }
