#include <math.h>
#include "point.h"

double distance_of_points(Point point1, Point point2) {
  int x = pow(point1.x - point2.x, 2);
  int y = pow(point1.y - point2.y, 2);
  return sqrt(x + y);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double distance = distance_of_points(current_location, food_points[0]);
  *closest_food_location = food_points[0];
  for(int i = 1; i < points_length; i++) {
    double distance_to_current_food = distance_of_points(current_location, food_points[i]);
    if(distance > distance_to_current_food) {
      distance = distance_to_current_food;
      *closest_food_location = food_points[i];
    }
  }
}