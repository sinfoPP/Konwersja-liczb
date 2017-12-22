#include <stdio.h>

int main()
{
	int liczba;
	printf("Podaj liczbe dziesietna do konwersji: ");
	scanf("%d" ,&liczba);
	printf("\nWynik: \n");
	if(liczba==0)
	{
		printf("0\n");
		return 0;
	}
	while(liczba  >0){
		printf("%d",liczba %2);
		liczba /=2;
		}
		
		printf("\n");
		printf("\nWynik binarny odczytuj w kolejnosci cyfr odwrotnej \n");
		return 0;
		
}
	
	

