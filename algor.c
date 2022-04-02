#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct  sightings{
	char datetime[15];
	char location[50]; 
	char country[3];
	char shape[10];

};


int main (void)
{

	/*sightings allSights[10];*/

	struct sightings sight1;

	strcpy(sight1.datetime,"Monday Morning");
	strcpy(sight1.location,"Manchester");
	strcpy(sight1.country,"UK");
	strcpy(sight1.shape,"Sphere");

			
	system("clear");	
			
	printf(	"\n\nDate of sighting	Location	Country		Shape \n"); 	
	printf("------------------------------------------------------------------\n");
	printf(" %s		%s	",sight1.datetime,sight1.location);
	printf(" %s	%s\n\n",sight1.country,sight1.shape);



printf("%s", sight1.country);

	return 1;
}
