#include <stdio.h>
#include <math.h>

unsigned int nasobky_v_rozsahu (int a, int b, unsigned int m){
	
	int c, d, e;
		
	d = m * m / m;
	c = (a + (a >= 0) * (d - 1)) / d * d; //Najdeme prvy nasobok intervalu od cisla a do b.
	
	for(int i = c; i <= b; i += m) //Pomocou prveho nasobku najdeme pocet nasobkov v intervale.
	{
		e++;
	}
	
	return e; //Hodnotu vraciame k funkcii main.
}

int main(){
	
	int a, b, k;
	unsigned int m;
	
	printf("Zadajte cislo, zaciatok a koniec intervalu:\n");
	scanf("%d%d%d", &m, &a, &b); //Pridame cislo, zaciatok a koniec intervalu.

	if(a > b || m == 0)
	{
		printf("\nZadali ste nespravne cisla.");
		return 0;
	}
	
	printf("\nVase cislo - %d.\n", m); //Vypiseme dane cislo.
	printf("Interval je od cisla %d do %d.\n", a, b); //Vypiseme integral.
	
	k = nasobky_v_rozsahu(a, b, m);
	
	if(k == 0)
	{
		printf("\nV tomto rozsahu nie je ziadny nasobok.");
	}
	
	printf("\nPocet nasobkov v intervale (Hodnota): %d.", k); //Vypiseme hondotu.
	
}
