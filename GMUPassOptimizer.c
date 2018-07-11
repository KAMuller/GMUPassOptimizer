//written by Saru Kalva and Kalman Muller

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct AdjNode_ {
	int index;
	int weight;
	struct AdjNode_* next;
} AdjNode;

typedef struct AdjList_ {
	struct AdjNode* head;
} AdjList;

typedef struct Graph_ {
	int V;
	struct AdjList* array;
} Graph;

AdjNode* newAdjNode(int index, int weight)
{
	AdjNode* newNode = malloc(sizeof(AdjNode));//add malloc check
	newNode->index = index;
	newNode->weight = weight;
	newNode->next = NULL;
	return newNode;
}

Graph* createGraph(int V)
{
	Graph* graph = malloc(sizeof(Graph));//add malloc check
	graph->V = V;
	graph->array = malloc(V * sizeof(AdjList));//add check
	
	for(int i = 0; i < V; i++)
	{
		graph->array[i].head = NULL;
	}
	return graph;
}

void AddEdge(Graph graph, int src, int dest, int weight)
{
	AdjNode* newNode = newAdjNode(dest, weight);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;
	
	newNode = newAdjListNode(src, weight);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}


void PrintBuildings()
{
	printf("NONE: No Class Today\n");
	printf("AB: Art and Design Building\n");
	printf("AFC: Aquatic and Fitness Center\n");
	printf("AQ: Aquia Building\n");
	printf("BL: Blue Ridge Hall\n");
	printf("BUCHAN: Buchanan Hall\n");
	printf("CAROW: Carow Hall\n");
	printf("CFA: Center for the Arts\n");
	printf("CH: College Hall\n");
	printf("DK: David J. King Hall\n");
	printf("E: East Building\n");
	printf("ENGR: Nguyen Engineering Building\n");
	printf("ENT: Enterprise Hall\n");
	printf("ESNHWR: Eisenhower\n");
	printf("ESTSHR: Eastern Shore\n");
	printf("EXPL: Exploratory Hall\n");
	printf("FENWCK: Fenwick Library\n");
	printf("FH: Field House\n");
	printf("FIELD: Athletic Fields located on the West Campus next to the Field House\n");
	printf("FINLEY: Finley Building\n");
	printf("GLOBAL: Mason Global Center\n");
	printf("HNOVR: Hanover Hall\n");
	printf("HR: Hampton Roads\n");
	printf("HUB: The Hub\n");
	printf("IN: Innovation Hall\n");
	printf("JC: Johnson Center\n");
	printf("KB: Krasnow Building\n");
	printf("KH: Krug Hall\n");
	printf("LH: Lecture Hall\n");
	printf("MERTEN: Merten Hall\n");
	printf("MTB: Music Theater Building\n");
	printf("NEM: North East Module\n");
	printf("PAB: de Laski Performing Arts Building\n");
	printf("PETRSN: Peterson Hall\n");
	printf("PIEDMT: Piedmont Hall\n");
	printf("PILOT: Pilot House\n");
	printf("PLANET: Planetary Hall\n");
	printf("R: Robinson Hall\n");
	printf("RAC: Recreation Athletic Complex\n");
	printf("ROGER: Roger Hall\n");
	printf("RSCH: Research Hall\n");
	printf("SNDBRGE: Sandbridge Hall\n");
	printf("SUBI: Student Union I\n");
	printf("T: Thompson Hall\n");
	printf("W: West Building\n");

}

int PickBuilding(int day, int time)
{
	PrintBuildings();
	switch (day)
	{
		case 0:
			if (time == 0)
			{
				printf("Enter the building of your first monday class\n");
			}
			else
			{
				printf("Enter the building of your last monday class\n");
			}
		break;
		case 1:
			if (time == 0)
			{
				printf("Enter the building of your first tuesday class\n");
			}
			else
			{
				printf("Enter the building of your last tuesday class\n");
			}
		break;
		case 2:
			if (time == 0)
			{
				printf("Enter the building of your first wednesday class\n");
			}
			else
			{
				printf("Enter the building of your last wednesday class\n");
			}
		break;
		case 3:
			if (time == 0)
			{
				printf("Enter the building of your first thursday class\n");
			}
			else
			{
				printf("Enter the building of your last thursday class\n");
			}
		break;
		case 4:
			if (time == 0)
			{
				printf("Enter the building of your first friday class\n");
			}
			else
			{
				printf("Enter the building of your last friday class\n");
			}
		break;
		case 5:
			if (time == 0)
			{
				printf("Enter the building of your first saturday class\n");
			}
			else
			{
				printf("Enter the building of your last saturday class\n");
			}
		break;
		case 6:
			if (time == 0)
			{
				printf("Enter the building of your first sunday class\n");
			}
			else
			{
				printf("Enter the building of your last sunday class\n");
			}
		break;
		default:
			printf("input error for PickBuilding\n");
	}
	printf("enter the character code corresponding to the building you would like to pick\n");
	int buildingSel = 50;
	char buildChoice[10];
	char codesArray[45][10];
	strcpy(codesArray[0], "NONE");
	strcpy(codesArray[1], "AB");
	strcpy(codesArray[2], "AFC");
	strcpy(codesArray[3], "AQ");
	strcpy(codesArray[4], "BL");
	strcpy(codesArray[5], "BUCHAN");
	strcpy(codesArray[6], "CAROW");
	strcpy(codesArray[7], "CFA");
	strcpy(codesArray[8], "CH");
	strcpy(codesArray[9], "DK");
	strcpy(codesArray[10], "E");
	strcpy(codesArray[11], "ENGR");
	strcpy(codesArray[12], "ENT");
	strcpy(codesArray[13], "ESNHWR");
	strcpy(codesArray[14], "ESTSHR");
	strcpy(codesArray[15], "EXPL");
	strcpy(codesArray[16], "FENWCK");
	strcpy(codesArray[17], "FH");
	strcpy(codesArray[18], "FIELD");
	strcpy(codesArray[19], "FINLEY");
	strcpy(codesArray[20], "GLOBAL");
	strcpy(codesArray[21], "HNOVR");
	strcpy(codesArray[22], "HR");
	strcpy(codesArray[23], "HUB");
	strcpy(codesArray[24], "IN");
	strcpy(codesArray[25], "JC");
	strcpy(codesArray[26], "KB");
	strcpy(codesArray[27], "KH");
	strcpy(codesArray[28], "LH");
	strcpy(codesArray[29], "MERTEN");
	strcpy(codesArray[30], "MTB");
	strcpy(codesArray[31], "NEM");
	strcpy(codesArray[32], "PAB");
	strcpy(codesArray[33], "PETRSN");
	strcpy(codesArray[34], "PIEDMT");
	strcpy(codesArray[35], "PILOT");
	strcpy(codesArray[36], "PLANET");
	strcpy(codesArray[37], "R");
	strcpy(codesArray[38], "RAC");
	strcpy(codesArray[39], "ROGER");
	strcpy(codesArray[40], "RSCH");
	strcpy(codesArray[41], "SNDBRGE");
	strcpy(codesArray[42], "SUBI");
	strcpy(codesArray[43], "T");
	strcpy(codesArray[44], "W");

	fgets(buildChoice, 10, stdin);
	int i;
	for (i=0;i<45;i++)
	{
		if(strcmp(codesArray[i], buildChoice) == 0)
		{
			buildingSel = i;
		}
	}
	
	
	return buildingSel;
}

int GetDist(int building, char lot)
{
	//returns the distance between the specified lot and building
}

int IsLotAvail(int building, int time)
{
	//checks if the lot is available at the specified time
}

char GetBestLot(char passLots[], int building, int time)
{
	//finds the closest lot to the specified building at the given time
}

int GetMornDist(char passLots[], int morningBuildings[], int morningTimes[])
{
	//finds the total (full week of classes) distance traveled in the morning for the input pass 
}

int GetAftDist(char passLots[], int afternoonBuildings[], int morningTimes[])
{
	//finds the total (full week of classes) distance traveled in the afternoonfor the input pass
}

int GetAvgDist(char passLots[],int morningBuildings[], int afternoonBuildings[], int morningTimes[])
{
	//finds the total (full week of classes) distance traveled in the morning and afternoon for the input pass
}

int main()
{
	
	int morningBuildings[7];
	int morningTimes[7];
	int afternoonBuildings[7];
	
	int sortSel = 0;
	while(sortSel < 0 || sortSel > 4)
	{	
		printf("Choose how you would like to optimize your pass\n");
		printf("1: morning walk\n");
		printf("2: afternoon walk\n");
		printf("3: average walk\n");
	
	
		char inBuf[10];

		fgets(inBuf, 10, stdin);
		sscanf(inBuf, "%d", &sortSel);
		if (sortSel < 0 || sortSel > 4)
		{
			printf("not a valid selection/n");
		}
	}
	int i;
	
	switch (sortSel)
	{
		case 1:
			
			for (i = 0; i<7; i++)
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
			
			for (i = 0; i<7; i++)
			{
				afternoonBuildings[i] = PickBuilding(i,1);
			}
			break;
			
		case 3:
			
			for (i = 0; i<7; i++)
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
	
	FILE *passLog = fopen("./passes.txt", "r");
	int numPasses;
	char fileBuf[20];
	fgets(fileBuf, 20, passLog);
	sscanf(fileBuf, "%d", &numPasses);
	
	//to do: change to dynamically allocated array
	char passNames[20][40];
	char passLots[20][15];
	int passPrice[20];
	
	for (i = 0; i < numPasses; i++)
	{
		fgets(passNames[i], 40, passLog);
		fgets(fileBuf, 20, passLog);
		sscanf(fileBuf, "%d", &passPrice[i]);
		fgets(passLots[i], 15, passLog);
	}
	
	
}
	
	