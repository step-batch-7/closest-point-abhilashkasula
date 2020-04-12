#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[LENGTH] = FOOD_POINTS;
  Point organism_locations[LENGTH] = ORGANISM_LOCATIONS;
  Point closest_food_location = {0, 0};
  for(int i = 0; i < LENGTH; i++) {
    get_closest_food(food_points, LENGTH, organism_locations[i], &closest_food_location);
    printf("Location of organism: [%d %d],  Closest food target: [%d %d]\n", organism_locations[i].x, organism_locations[i].y, closest_food_location.x, closest_food_location.y);
  }
  return 0;
}