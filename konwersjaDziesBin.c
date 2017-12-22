#include <stdio.h>

int main()
{
	int liczba;
	printf("Podaj liczba do konwersji: ");
	scanf("%d" ,&liczba);
	printf("Wynik: \n");
	if(liczba==0)
	{
		printf("0\n");
		return 0;
	}
	while(liczba /2 !=0){
		printf("%d",liczba %2);
		liczba /=2;
		}
		
		printf("    1");
		printf("\nWynik podany w kolejnosci odwrotnej \n");
		return 0;
		
}
	
	

