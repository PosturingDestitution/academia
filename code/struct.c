/*
demonstrates structures that contain other structures


receives input for corner coords of a rectangle and calculates the area.Assumes that the y coord of the lower-right corner is greater than the y coor of the upper-left corcer, that the x coord of the lowerright corner is greater than the x coordinate of the upper left corner, and that all coords are positive
*/

#include <stdio.h>

int length, width;
long area;

struct coord{
	int x;
	int y;
};

struct rectangle{
	struct coord topleft;
	struct coord bottomright;
} mybox;

int main(){

	printf("\nEnter the top left x coordinate: ");
	scanf("%d", &mybox.topleft.x);

	printf("\nEnter the top left y coordinate: ");
	scanf("%d", &mybox.topleft.y);


	printf("\nEnter the bottom right x coordinate: ");
	scanf("%d", &mybox.bottomright.x);


	printf("\nEnter the bottom right y coordinate: ");
	scanf("%d", &mybox.bottomright.y);

	width = mybox.bottomright.x - mybox.topleft.x;
	length = mybox.topleft.y - mybox.bottomright.y;

	area = width * length;
	printf("\nThe area is %ld units. \n", area);

	return 0;
}
