//int* wskaznik_tab = new int[10]; dynamiczna tablica na 10 elementow


//Prosz� napisa� program, kt�ry b�dzie pobiera� od u�ytkownika n
//nazwisk i umieszcza� je w tablicy o rozmiarze n, gdzie n to ustalona
//sta�a.Nazwiska maj� by� r�nej d�ugo�ci, a po zako�czeniu
//wype�niania tablicy nie mog� zajmowa� wi�cej miejsca ni� liczba/
//znak�w w nich + 1.
//W jednym rozwi�zaniu prosz� skorzysta� z klasy string, a w drugim z
//napis�w w stylu j�zyka C.
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

