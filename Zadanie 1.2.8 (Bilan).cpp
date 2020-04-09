#include <stdio.h>
#include <math.h>

unsigned int nasobky_v_rozsahu (int a, int b, unsigned int m){
	
	int c, d;
	
	printf("Zadajte cislo, zaciatok a koniec intervalu:\n");
	scanf("%d%d%d", &m, &a, &b);
	
	if(a > b || m > b || m == 0)
	{
		printf("\nNezadali ste spravne cisla.");
		return 0;
	}
	
	printf("\nVase cislo - %d.\n", m);
	printf("Interval je od cisla %d do %d.\n", a, b);
	
	d = m * m / m;
	c = (a + (a >= 0) * (d - 1)) / d * d; //Najdeme prvy nasobok intervalu od cisla a do b.
	
	if(c > b)
	{
		printf("\nCislo nie je v tomto rozsahu.");
		return 0;
	}
	
	printf("\nPrvy nasobok intervalu: ");
	printf("%d\n", c);
	
	printf("Vsetky nasobky intervalu: ");
	
	for(int i = c; i <= b; i += m) //Pomocou prveho nasobku najdeme vsetky nasobky intervalu.
	{
		printf("%d ", i);
	}	
	
}

int main(){
	
	int a, b;
	unsigned int m;
	
	nasobky_v_rozsahu(a, b, m);
	
}
