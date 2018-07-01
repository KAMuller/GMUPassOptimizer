#include <stdlib.h>
#include <stdio.h>

//Saru Kalva
void PrintBuildings()
{
	printf("Johnson Center");
}

int PickBuilding(int day, int time)
{
	printBuildings();
	switch (day)
	{
		case 0;
			if (time == 0)
			{
				printf("choose the building of your first monday class\n");
			}
			else
			{
				printf("choose the building of your last monday class\n");
			}
		break;
		case 1:
			if (time == 0)
			{
				printf("choose the building of your first tuesday class\n");
			}
			else
			{
				printf("choose the building of your last tuesday class\n");
			}
		break;
		case 2:
			if (time == 0)
			{
				printf("choose the building of your first wednesday class\n");
			}
			else
			{
				printf("choose the building of your last wednesday class\n");
			}
		break;
		case 3:
			if (time == 0)
			{
				printf("choose the building of your first thursday class\n");
			}
			else
			{
				printf("choose the building of your last thursday class\n");
			}
		break;
		case 4:
			if (time == 0)
			{
				printf("choose the building of your first friday class\n");
			}
			else
			{
				printf("choose the building of your last friday class\n");
			}
		break;
		case 5:
			if (time == 0)
			{
				printf("choose the building of your first saturday class\n");
			}
			else
			{
				printf("choose the building of your last saturday class\n");
			}
		break;
		case 6:
			if (time == 0)
			{
				printf("choose the building of your first sunday class\n");
			}
			else
			{
				printf("choose the building of your last sunday class\n");
			}
		break;
		default:
			printf("input error for PickBuilding\n");
	}
	printf("enter the number corresponding to the building you would like to pick\n");
	int buildingSel = 0;
	char dayBuf[10];

	fgets(dayBuf, 10, stdin);
	sscanf(dayBuf, "%d", &buildingSel);
	
	return buildingSel;
}

int main()
{
	
	int morningBuildings[7];
	int morningTimes[7];
	int afternoonBuildings[7];
	
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
				morningBuildings[i] = PickBuilding(i,0);
				if (morningBuildings[i] != 0)//0 will represent no class that day
				{
					printf("what time does this class start? (enter the hour only in 24 hour format)\n");
				
					char timeBuf[10];

					fgets(timeBuf, 10, stdin);
					sscanf(timeBuf, "%d", &morningTimes[i]);
				}
			}
			break;
			
		case 2:
			int i;
			for (i = 0; i<7, i++)
			{
				afternoonBuildings[i] = PickBuilding(i,1);
			}
			break;
			
		case 3:
			int i;
			for (i = 0; i<7, i++)
			{
				morningBuildings[i] = PickBuilding(i,0);
				if (morningBuildings[i] != 0)//0 will represent no class that day
				{
					printf("what time does this class start? (enter the hour only in 24 hour format)\n");
			
					char timeBuf[10];

					fgets(timeBuf, 10, stdin);
					sscanf(timeBuf, "%d", &morningTimes[i]);
				}
				afternoonBuildings[i] = PickBuilding(i,1);
			}
			break;
			
		default:
			printf("optimization selection error\n");			
	}
	
}
	
	