
#include <stdio.h>
#include <conio.h>


int main()
{
	int Ram ,Sam,Ajay;

	printf("Enter Ram age: ");
	scanf("%d", &Ram);

	printf("Enter Sam age: ");
	scanf("%d", &Sam);

	printf("Enter Ajay age : ");
	scanf ("%d",&Ajay);

	if (Ram>Sam)
	{
		if(Ram>Ajay)
		printf(" Ram is Youngest ");
	else 
		printf("Ajay is Youngest");
		}
		else
		
			//if (Sam>Ram)
			printf("Sam is Youngest");
		


	


	return 0;
}

