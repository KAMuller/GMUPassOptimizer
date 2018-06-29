#include <stdlib.h>
#include <stdio.h>

void PrintBuildings()
{
	//print list of buildings
}

int PickBuilding(int day, int time)
{

}

int main()
{
	
	int morningBuildings[7];
	int morningTimes[7];
	int afternoonBuildings[7];
	int afternoonTimes[7];
	int sortSel = 0;
	while(sortSel !> 0 && sortSel !< 4)
	{	
		printf("Choose how you would like to optimize your pass\n");
		printf("1: morning walk\n");
		printf("2: afternoon walk\n");
		printf("3: average walk\n");
	
	
		char inBuf[10];

		fgets(inBuf, 10, stdin);
		sscanf(inBuf, "%d", &sortSel);
		if (sortSel !> 0 && sortSel !< 4)
		{
			printf("not a valid selection/n");
		}
	}
	
	switch (sortSel)
	{
		case 1:
		int i;
		for (i = 0; i<7, i++)
		{
			PickBuilding 
		}
			
			
			
			
	}
}
	
	