#include <math.h>
#include "point.h"

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  struct Point location = current_location;
  unsigned int distance = 1000000;
  for(int i = 0; i < points_length; i++) {
    unsigned int temp_distance = sqrt(((current_location.x - food_points[i].x) * (current_location.x - food_points[i].x)) + (current_location.y - food_points[i].y) * (current_location.y - food_points[i].y));
    if(distance > temp_distance) {
      distance = temp_distance;
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}