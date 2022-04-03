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

	struct sightings allSights[10];

	struct sightings sight1;

	strcpy(sight1.datetime,"Monday Morning");
	strcpy(sight1.location,"Manchester");
	strcpy(sight1.country,"UK");
	strcpy(sight1.shape,"Sphere");

	allSights[0]=sight1;


			
	system("clear");	
			
	printf(	"\n\nDate of sighting	Location	Country		Shape \n"); 	
	printf("------------------------------------------------------------------\n");
	printf(" %s		%s	",allSights[0].datetime,sight1.location);
	printf(" %s	%s\n\n",sight1.country,sight1.shape);





	return 1;
}
