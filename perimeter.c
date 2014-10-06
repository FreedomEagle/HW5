/*
 * calculate the perimeter between two points
 */
 
 #include <math.h>
 #include "geom.h"
 
 double perimeter(struct point2d u, struct point2d v , struct point2d q)
 {
     return (sqrt(pow(u.x-v.x,2) + pow(u.y-v.y,2))+sqrt(pow(u.x-q.x,2) + pow(u.y-q.y,2))+sqrt(pow(q.x-v.x,2) + pow(q.y-v.y,2)));
 }
