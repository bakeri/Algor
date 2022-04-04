#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct  sightings{
	char datetime[15];
	char location[50]; 
	char country[3];
	char shape[10];
	char delim[] = ",";
};

	
int main (void)
{
 	char chunk[128];
	struct sightings allSights[10];
	struct sightings sight1;


	FILE *fp = fopen("UFO_sightings_scrubbed.csv","r");

	if (fp==NULL)
	{
		printf("Failed to open file \n\n");
		return (-1);
	}

	system("clear");	
	
	printf(	"\n\nDate of sighting	Location	Country		Shape \n"); 	
	printf("------------------------------------------------------------------\n");

    while(fgets(chunk, sizeof(chunk), fp) != NULL) 
		
	{

		printf ("%s \n", chunk);




		strcpy(sight1.datetime,"Monday Morning");
		strcpy(sight1.location,"Manchester");
		strcpy(sight1.country,"UK");
		strcpy(sight1.shape,"Sphere");

		allSights[0]=sight1;

	}


	//iterate through the array and print tehe data to the screen
	//	printf(" %s		%s	",allSights[0].datetime,sight1.location);
	//	printf(" %s	%s\n\n",sight1.country,sight1.shape);


	return 1;
}
