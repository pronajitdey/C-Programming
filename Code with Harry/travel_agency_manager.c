#include <stdio.h>

typedef struct
{
	char name[30];
	char DL_no[30];
	char route[50];
	int kms;
}
driver;

int main(void)
{
	int n = 3;
	driver d1, d2, d3;

	printf("Enter the details of the drivers:-\n");

	printf("Enter the name of the first driver\n");
	scanf("%s", d1.name);
	printf("Enter the DL_no of the first driver\n");
	scanf("%s", d1.DL_no);
	printf("Enter the route of the first driver\n");
	scanf("%s", d1.route);
	printf("Enter the kms of the first driver\n");
	scanf("%d", &d1.kms);

	printf("Enter the name of the second driver\n");
	scanf("%s", d2.name);
	printf("Enter the DL_no of the second driver\n");
	scanf("%s", d2.DL_no);
	printf("Enter the route of the second driver\n");
	scanf("%s", d2.route);
	printf("Enter the kms of the second driver\n");
	scanf("%d", &d2.kms);

	printf("Enter the name of the third driver\n");
	scanf("%s", d3.name);
	printf("Enter the DL_no of the third driver\n");
	scanf("%s", d3.DL_no);
	printf("Enter the route of the third driver\n");
	scanf("%s", d3.route);
	printf("Enter the kms of the third driver\n");
	scanf("%d", &d3.kms);

	printf("\n==============================\n");
	printf("Driver 1:-\n");
	printf("Name - %s\n", d1.name);
	printf("DL_no - %s\n", d1.DL_no);
	printf("route - %s\n", d1.route);
	printf("kms - %d\n", d1.kms);
	printf("\n==============================\n");

	printf("Driver 2:-\n");
	printf("Name - %s\n", d2.name);
	printf("DL_no - %s\n", d2.DL_no);
	printf("route - %s\n", d2.route);
	printf("kms - %d\n", d2.kms);
	printf("\n==============================\n");

	printf("Driver 3:-\n");
	printf("Name - %s\n", d3.name);
	printf("DL_no - %s\n", d3.DL_no);
	printf("route - %s\n", d3.route);
	printf("kms - %d\n", d3.kms);
	printf("\n==============================\n");

	return 0;
}