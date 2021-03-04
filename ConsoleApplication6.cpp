//int* wskaznik_tab = new int[10]; dynamiczna tablica na 10 elementow


//Proszê napisaæ program, który bêdzie pobiera³ od u¿ytkownika n
//nazwisk i umieszcza³ je w tablicy o rozmiarze n, gdzie n to ustalona
//sta³a.Nazwiska maj¹ byæ ró¿nej d³ugoœci, a po zakoñczeniu
//wype³niania tablicy nie mog¹ zajmowaæ wiêcej miejsca ni¿ liczba/
//znaków w nich + 1.
//W jednym rozwi¹zaniu proszê skorzystaæ z klasy string, a w drugim z
//napisów w stylu jêzyka C.
#include <iostream>
#define N 10
using namespace std;
#pragma warning (disable: 4996)
#include <string>
int main(){	
	//C
	char* tablica[N]; //tablica pointerow
	for (int i = 0; i < N; i++) {
		char buffor[20];//pomocnia zmeinna na input 
		fgets(buffor, 20, stdin);//input
		tablica[i] = (char*)malloc(strlen(buffor) *sizeof(char));// teraz wskaznik wskazuje miejsce z wystarczjaajca iloscia miejscae
		strcpy(tablica[i],buffor);//strcpy(wskaznik na wskaznik, wskaznik na buffor)


	}
	//C++ ze stringami
	string words[10];
	for (int i = 0; i < 10; i++) {
		cin >> words[i];
	}         
	return 0;
}

