#include <stdio.h>
#include <stdlib.h>

/* istenilen birimden istenilen birime cevirme programý */

int main(void) {
	int secim,secim2;
	float uzunluk;
	printf("hangi birimden cevireceksin \n1- mm \n2- cm \n3- dm \n4- m \n5- km\n ->");
	scanf("%d",&secim);
	
	printf("Simdi de uzunlugu giriniz ->"); scanf("%f",&uzunluk);
	switch(secim)
	{
		case 1: uzunluk/=1000; break;
		case 2: uzunluk/=100; break;
		case 3: uzunluk/=10; break;
		case 4: uzunluk*=1; break;
		case 5: uzunluk*=1000; break;
		default: printf("Yanlis deger");break;
	}
	
	printf("Hangi birime cevireceksin\n1- mm \n2- cm \n3- dm \n4- m \n5- km\n ->");
	scanf("%d",&secim2);
	switch(secim2)
	{
		case 1: uzunluk*=1000; break;
		case 2: uzunluk*=100; break;
		case 3: uzunluk*=10; break;
		case 4: uzunluk/=1; break;
		case 5: uzunluk/=1000; break;
		default: printf("Yanlis deger");break;
	}
	
	printf("\n\nSonuc:%.2f\n\n",uzunluk);
	system("PAUSE");
	return 0;
}
