#include <stdio.h>
#include "point.h"

int main(void)
{
  struct Point food_points[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  struct Point organism_locations[5] = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};
  struct Point closest_food_location = {0, 0};
  for(int i = 0; i < 5; i++) {
    get_closest_food(food_points, 5, organism_locations[i], &closest_food_location);
    printf("Location of organism: [%d %d],  Closest food target: [%d %d]\n", organism_locations[i].x, organism_locations[i].y, closest_food_location.x, closest_food_location.y);
  }
  return 0;
}