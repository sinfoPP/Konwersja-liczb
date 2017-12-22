#include <stdio.h>
#include <string.h>
void zamien( char*znak1,char*znak2)
{
	char pomocnicza;
	pomocnicza=*znak1;
	*znak1 = *znak2;
	*znak2 = pomocnicza;
}
int main()
{
	char ciag_zn[100] = {"123456789"};
	int dlugosc = 0;
	int poczatek=0;
	int koniec;
	
	for(dlugosc =0 ;ciag_zn[dlugosc]>0; ++dlugosc) ;
	koniec=dlugosc-1;
	while(poczatek<koniec)
	{ 
	zamien(&ciag_zn[poczatek], &ciag_zn[koniec]);
		++poczatek;
		--koniec;
	}
	printf("%s\n",ciag_zn);
	
	return 0;
		
}
