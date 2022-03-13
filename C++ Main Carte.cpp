/*--------------------------------------Elemente teoretice--------------------------*/
/*
Incapsulare

Polimorfism - permite programelor sa aplice aceeasi operatie la obiecte de tipuri diferite

Mostenire





O clasa reprezinta o abstractizare logica, iar un obiect are o existenta fizica. Cu alte cuvinte , un obiect este o instanta a unei clase.

893
Datele si functiile publice , pe care le contine clasa, sunt cunoscute de regula ca proprietati si metode. Metodele sunt cunoscute ca functii de interfata.


894
Operatorul de reolutie a domeniului e valabilitate (operatorul ::) este utilizat pentru a lega numele clasei de un nume de membru
De asemenea, poate sa permita programelor dumneavoastra sa acceseze un nume dintr-un domeniu inchis pe care il ascunde o declaratie locala cu acelasi nume.



Eticheta public
Spre deosebire de o structura, ai carei membrii sunt toti accesibili programului, o clasa poate avea membri pe care programul ii poate accesa direct
utilizand operatorul punct (.) si alti membri (denumiti membri privati) pe care programul nu ii poate accesa direct.
Eticheta public: identifica membrii clasei pe care programul ii poate utiliza cu operatorul punct. Daca doriti ca programul sa accesezeun anumit membru direct, trebuie sa delcarati
respectivul membru in carul membrilor publici ai clasei.
Unica modalitate de accesare a datelor si a metodelor private este prin intermediul metodelor publice.



901-----Sfat!!!!!!
Este de preferat sa se plaseze majoritatea datelor unui obiect in sectiunea privata a definitiei clasei.
*/
/*=======================================End elemente teoretice=====================*/

#include <iostream>
//#include <iomanip.h>
#include <string.h>

using namespace std;

	/*---------------------creem/definim clasa Carte----------------------------------*/
	class Carte {
	public:
		char titlu[256];
		char autor[64];
		float pret;

		void arata_titlu() {
			cout << titlu << "\n";
		}
		float da_pret() {
			return (pret);
		}
	};
	/*==========================End clasa carte========================================*/
	
	
	/*---------------------------- Clasa film ------------------------------------*/
	
	//clasa film utilizeaza trei variabile membre si doua functii membre 
	class film{
		public:
			char nume[64];
			char prim_actor[64];
			char al_doilea_actor[64];
			
			void arata_film();
			void initializare(char* nume, char* prim, char* al_doilea);
	};
	
	void film::arata_film(){
		cout << "Numele filmului: " << nume << endl;
		cout << "Interpreteaza: " << prim_actor << " si " << al_doilea_actor << endl << endl;
	}
	
	void film::initializare(char* nume_film, char* prim, char* al_doilea){
		strcpy(nume, nume_film);
		strcpy(prim_actor, prim);
		strcpy(al_doilea_actor, al_doilea);
	}
	/*============================ End clasa film ========================================*/

		
		
	/*------------------------------- Eticheta private: --------------------------------------*/
	class Carte{
		public:
			char titlu[256];
			char autor[64];
			float pret;
			void arata_titlu(){
				cout << titlu << endl;
			};
			float da_pret(){
				return (pret);
			};
			void arata_carte(){
				arata_titlu();
				arata_editura();
			};
			void atrib_editura(char* nume){
				strcpy(editura, nume);
			};
			
		private:
			char editura[256];
			void arata_editura(){
				cout << editura << endl;
			};
	};
	//Unica modalitate de accesare a datelor si a metodelor private este prin intermediul metodelor publice.
	
	//Metoda publica atrib_editura initializeaza membrul privat editura.Daca programul ar incerca sa acceseze direct membrul editura, compilatorul
	//ar genera o eroare.
	//In mod similar, programul utilizeaza metoda publica arata_carte, care la randul ei invoca metoda privata arata_editura. Din nou, programul nu 
	//poate accesa direct o metoda privata.
	
	//Concluzia mea, membrele private si metodele private se pot accesa doar prin metode publice.
	
	/*================================ End eticheta private ===========================*/
	
	
	
	
	/*--------------------------------------Class carte2--------------------------------------*/
	class Carte2{
		public:
			char titlu2[256];
			char autor2[64];
			float pret2;
			
			void arata_titlu2();
			float da_pret2();
			
			void arata_carte2();
			void atrib_editura2(char* nume);

		private:
			char editura2[256];
			void arata_editura2();
	};
	
	void Carte2::arata_titlu2(){
		cout << titlu2 << enld;
	};
	
	float Carte2::da_pret2(){
		return (pret2);
	};
	
	void Carte2::arata_carte2(){
		arata_titlu2();
		arata_editura2();
	};
	
	void Carte2::atrib_editura2(char* nume2){
		strcpy(editura, nume2);
	};
	
	void Carte2::arata_editura2(){
		cout << editura << endl;
	};
	/*=====================================End class carte2===================================*/
	
	
	
	
	
/*----------------------------------Program principal/meniu principal-------------------------------------------*/
/*void main()*/int main()
{
	/*-------------Clasa carte--------------------*/
	Carte capitole;

	strcpy(capitole.titlu, "Jamsa's C/C++ Programmer's Bible");
	strcpy(capitole.autor, "Jamsa si Klander");

	capitole.pret = 49.95;
	capitole.arata_titlu();

	//cout << "Pretul cartii este " << setprecision(2) << capitole.da_pret();
	cout << "Pretul cartii este " << capitole.da_pret() << endl;
	/*=============End clasa carte=========================*/
	
	
	/*-------------------- Clasa film------------------------------*/
	film fugar, neobosit; //s-au creat doua obiecte de tip film 
	fugar.initializare("Fugarul","Harrison Ford", "Tommy Lee Jones");
	neobosit.initializare("Nopti albe in Seattle", "Tom Hanks", "Meg Ryan");
	
	fugar.arata_film;
	neobisit.arata_film;
	/*=====================End clasa film==============================*/
	
	
	/*-------------------------Operatorul de rezolutie :: -----------------------*/
	int i; //global
	void f ();
		int i; //local
		::i = 10; //se refera la i global, nu i local 
	
	
	/*========================= End Operatorul de rezolutie :: ========================*/
	
	
	
	/*---------------------------------- Eticheta private: --------------------------------*/
	Carte bible;
	
	strcpy (bible.titlu, "Jamsa's C/C++ Programmer's Bible");
	stpcpy (bible.autor, "Jamsa si Klander");
	bible.pret = 49.95;
	bible.atrib_editura("Jamsa Press");
	bible.arata_carte();
	/*================================== End Eticheta private: =============================*/
	
	
	
	/*---------------------------------Class carte2---------------------------------------*/
		Carte2 capitole2;
		stpcpy(capitole2.titlu2, "Jamsa's C/C++ Programmer's Bible");
		stpcpy(capitole2.autor2, "Jamsa si Klander");
		capitole2.pret2 = 49.95;
		capitole2.atrib_editura2("Jamsa Press");
		capitole2.arata_carte2();
	/*==================================End Class carte2===================================*/
	
}
/*=================================== End Program principal ======================================================*/