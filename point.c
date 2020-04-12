#include <math.h>
#include "point.h"

unsigned int distance_of_points(Point point1, Point point2) {
  int x = pow(point1.x - point2.x, 2);
  int y = pow(point1.y - point2.y, 2);
  return sqrt(x + y);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  Point location = current_location;
  unsigned int distance = 100000;
  for(int i = 0; i < points_length; i++) {
    unsigned int temp_distance = distance_of_points(current_location, food_points[i]);
    if(distance > temp_distance) {
      distance = temp_distance;
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}