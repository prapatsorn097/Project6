#include<stdio.h>
int main()
{
	int w1, w2;
	char name1[30], name2[30];
	printf("Enter name1 :");
	scanf("%s", &name1);
	printf("Enter weight :");
	scanf("%d", &w1);

	printf("Enter name2  :");
	scanf("%s", &name2);
	printf("Enter weight :");
	scanf("%d", &w2);

	if (w1 < w2)
	{
		printf("\n %s have weight less than %s", name1, name2);
	}
	else if (w1 > w2)
	{
		printf("\n %s have weight more than %s", name1, name2);
	}
	else printf("END PROGRAM");
	return 0;

}