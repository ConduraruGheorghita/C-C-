/*-------------------------------------------------------- Lucruri invatate: ----------------------------------------------------------------*/
/*
	-Clase (sunt niste template-uri) (entitati abstracte) (clasa surprinde o entitate din lumea reala cu toate atributele si functionalitatile specifice ei)
		-------exemplu clasa-------------------
			-numele clasei: angajat
			-atributele clasei: nume, prenume, CNP, salariu
			-metode: calculeaza salariu, mareste salariu, afiseaza zile de concediu
		-specificatori de acces: public, private
	-Obiectele (sunt instante ale claselor)  (un fel de variabile ale claselor, gen intr-un fel ca la structuri)
	-Mosteniri 
		-simple si multiple 
	-Constructori 
	
	-OOP -  Object Oriented Programming -(Programarea orientat pe obiecte): are la baza 4 mari principii pe care se bazeaza
		-Abstractizarea: procesul prin care "ascundem" anumite functionalitati pe care nu e nevoie sa le stim. (programul devine modular, format din parti, pentru ca si alte persoane pot folosi)
		-Incapsularea: procesul prin care tinem datele si functiile separate de exterior. Adica creem o capsula care delimiteaza interiorul de exterior 
						(ascunderea unor date pentru anumite entitati )
						Cu alte cuvinte, se refera la faptul ca nu ai acces direct la date
								,accesul se face printr-o interfata, mai exact settere si gettere
		-Mostenirea (Inheritence): da voie unor clase sa preia proprietati din alte clase 
		-Polimorfismul: procesul prin care putem sa creem mai multe copii ale aceleiasi metode care sa poata primi inputuri diferite (trebuie sa caut ce inseamna o metoda )


	Tipuri de functii membre:
	-Constructori (impliciti, fara parametrii, cu parametrii ) : responsabili de crearea obiectelor
	-Destructor: responsabil de stergerea obiectelor, de dezalocarea memoriei, etc (Atentie!!!!!, doar unul in fiecare clasa)
	-Functii de acces: permit accesul controlat din exterior la atributele declarate ca private sau protected cu ajutorul get-erelor si set-erelor 
	-Metode: operatii specifice obiectului 


*/


/*======================================================== End Lucruri invatate: ================================================================*/


#include <iostream> /* biblioteca iostream (de la input output stream) este o colectie de programe care ne ajuta la operatiile de citire de la tastatura si scriere pe ecran*/
#include <string.h>
#include <stdio.h>
#include <cassert>

using namespace std;/*Un namespace este un dictionar care ne ajuta sa identificam si sa folosim diferite componente ale unui programe
					using namespace std indica compilatorului ca dorim sa folosim namespace-ul standard pentru C++*/










/*-------------------------------------------------------- Clase ----------------------------------------------------------------*/
//Clasa e un fel de matrice care contine niste informatii
//Clasa se salveaza intr-un fisier separat si putem sa-l importam ori de cate ori vrem
//Clasele le folosim pentru a stoca niste functii care le putem folosi in acelasi program sau in programe diferite

/*======================================================== End clase ================================================================*/



class Salutari{			//am creat clasa Salutari
						//Identificatorii de acces se mai numesc si domenii de vizibilitate si sunt:public, private, protected 
	public:				//specificator de acces public: avem acces la toate functiile si variabilele sale atat in afara cat si in interiorul clasei
						// functiile le folosim in interiorul si in afara clasei
						//atributele sau metodele sunt vizibile si pot fi accesate din exterior 
	void spune ()		//functia pe care vrem sa o inseram intr-un obiect, in cazul de fata am creat o functie numita spune care va afisa "Salut"
	{
		cout << "Salut"<<endl;		//se afiseaza salut, iar endl trece pe linia urmatoare, adica e un fel de "\n"
	}
	void ceva()			//am creat alta functie care afiseaza "Nu sunt"
	{
		cout << "Nu sunt" << endl;
	}
};

class om{

	private:				//vizibilitatea este redusa la metodele clasei, 
							//daca nu precizam nici-un identificator de acces, default este private 
		int varsta;			//am declarat atributele 
		string nume;

	public:												//functiile din cadrul claselor se numesc metode 
		void seteazaVarsta(int a){
			varsta = a;
		}
		int arataVarsta(){
			return varsta;
		}
		void seteazaNume(string b){
			nume = b;
		}
		string arataNume(){
			return nume;
		}
};


//------------------------------------Mostenire (Inheritence)------------------------------
//Mostenirile sunt de 2 tipuri: simple si multiple
class animal : public om{		//clasa animal a mostenit tot ce are clasa om (functii si variabile-!!!!atentie voi specifica mai jos ceva legat de variabile!!!) si in plus am mai creat alte
								//variabile si functii pe langa cele mostenite
//class animal : public om, public ceva {}; //asta e o mostenire multipla, are 2 clase numite om si ceva care sunt public
	private:
		string Rasa;			//Atentie la variabile!!!! Trebuie sa avem grija ca numele variabilelor noi sa fie diferite fata de cele existente din clasa care am mostenit variabilele si functiile

	public:								//aici am creat alte functii
		void seteazaRasa(string c){
			Rasa = c;
		}
		string arataRasa(){
			return Rasa;
		}
};

class tren{
public:									//daca nu scriem cred ca default e private:
	string operatorul;
	int clasa;
	int vagon;

	/*
	Un constructor in c++ este o metoda speciala care este chemata automat atunci cand un obiect al unei clase este creat.
	Un constructor are acelas nume ca si clasa si este intotdeauna public de asemenea acesta nu are nicio valoare de returnat.
	Un lucru de tinut minte este faptul ca daca nu specificam un constructor in clasa, compilatorul va genera automat un constructor pentru noi, dar acest constructor nu va avea parametrii in interiorul acestuia.

	Constructorii sunt utilizati pentru a seta valori initiale pentru atribute.
	*/
	//constructorul are acelasi nume ca si clasa 
	tren (string x, int y, int z)
	{
		operatorul = x;
		clasa = y;
		vagon = z;
	}
};

//am creat o alta clasa si definim constructorul in afara acesteia
class tren2{
public:
	string Operator2;
	int Clasa2;
	int Vagon2;
	
	tren2 (string x, int y, int z); //atentie!!!! daca declar constructorul extern, atunci trebuie sa am punct si virgula aici, a sf liniei acesteia 
};
//declaram constructorul in afara clasei:
tren2 :: tren2(string x, int y, int z)
{
	Operator2 = x;
	Clasa2 = y;
	Vagon2 = z;
}

//crearea unei clase cu constructor invizibil 
class tren3{
	public:
	string Operator2;
	int Clasa3;
	int Vagon3;
	
	//constructor invizibil (cred ca asa e default )
	tren3(){
		
	}
};







/*------------------------------- Clase (Facem Soft) -----------------------------------*/
class Student{
public:
	char numeS[40];
private:
	int numar_matricolS;
protected:
	float medieS;
public:
	void init(char *n = "Anonim", int nr = 0, float m = 0)			//aceasta este o functie inline 
	{
		strcpy(numeS,n);
		numar_matricolS = nr;
		medieS = m;
	}
	
	char* returneaza_nume();	//functie definita in afara clasei (mai jos este definita in afara clasei)
};

char* Student :: returneaza_nume() 
//putem forta functia sa fie inline scriind inline inaintea functiei:
//inline char* Student :: returneaza_nume() 
{	
	return numeS;

} // :: este operator de rezolutie, ajuta la specificarea clasei din care functia respectiva face parte
//definim in afara clasei , tipul returnat (char*), clasa din care face parte obligatoriu (Student), la fel si de specificatorul de rezolutie (::) obligatoriu 









class Statie_Metrou{
	char denumire[20];
	int magistrala;
	char peron[20];
	int legatura;
	
public:
	void init(char* d="Statie oarecare", int m = 0, char* p = "nu are", int l = 1){     //functie inline 
																						//ATENTIE!!! Functiile inline sunt concepute pentru prelucrari simple si nu admit structuri repetitive in corpul lor (for, while, do-while)
		strcpy (denumire, d);
		magistrala = m;
		strcpy(peron, p);
		legatura = l;
	}
/*	void anunta_statie(){
		if ( legatura > 0 )
			cout<< "Ureaza statia "<< denumire<< ", de pe magistrala M " <<magistrala<<", cu peronul pe partea "<<peron<<", corespondenta cu magistrala M "<< legatura<<"."<<endl;
		else
			cout<< "Ureaza statia "<< denumire<< ", de pe magistrala M " <<magistrala<<", cu peronul pe partea "<<peron<<endl;
	}*/
	
	void anunta_statie();
};
void Statie_Metrou::anunta_statie()
{
	if ( legatura > 0 )
		cout<< "Ureaza statia "<< denumire<< ", de pe magistrala M " <<magistrala<<", cu peronul pe partea "<<peron<<", corespondenta cu magistrala M "<< legatura<<"."<<endl;
	else
		cout<< "Ureaza statia "<< denumire<< ", de pe magistrala M " <<magistrala<<", cu peronul pe partea "<<peron<<endl;
}




/*----------------------------------- Pointerul This (Facem Soft) --------------------------------------------------*/

/*Orice metoda primeste pe langa parametrii inca un parametru numit this (cuvant cheie) care contine adresa obiectului curent */

/*==================================== End Pointer This ==============================================*/




/*-------------------------------------- Functii de acces Set si Get  (Facem Soft) -----------------------------------*/

/*======================================End Functii de acces Set si Get=================================*/



/*------------------------------------------ Settere si Gettere -----------------------------------------*/

class Date{
	private:
		int m_nMonth;
		int m_nDay;
		int m_nYear;
		
	public:
		//Ghettere : sunt functii care returneaza ceva, iar numele functiilor pot fi oricare
		int GetMonth() { return m_nMonth;}
		int GetDay() { return m_nDay; }
		int GetYear() { return m_nYear; }
		
		
		//Settere: sunt functii care seteaza variabilele, numele lor pot fi oricare 
		void SetMonth (int nMonth) { m_nMonth = nMonth; }
		void SetDay (int nDay) { m_nDay= nDay; }
		void SetYear (int nYear) { m_nYear = nYear; }
};

class Change{
	private:
		int m_nValue;
	
	public:
		void SetValue(int nValue) { m_nValue = nValue; } //functie setter, seteaza variabila
		int GetValue() { return m_nValue; }				//functie getter, returneaza variabila 
};	

/*==========================================End Sett-ere si Gett-ere-----------------------*/








/*-------------------------------------------- Constructori -------------------------------*/

/*Un contructor este un membru ce este o functie ce primeste numele clasei, nu este de nici un tip si nu returneaza nimic.
Orice clasa creata caruia nu ii creem un constructor, aceasta isi creeaza singura un constructor gol de forma: fraction() { }
In constructor facem initializarile variabilelor (cele din private, o parte sau toate ) si putem chema functii cu aceasta.
*/

class Fraction{
	private:
		int m_nNumerator;
		int m_nDenumerator;
		
	public:
		Fraction () { //default constructor
			cout << "Hei!" << endl;
			m_nDenumerator = 0;		//am initializat/am dat valori variabilelor 
			m_nDenumerator = 1;
		}
		
		//ATENTIE!!! O clasa poate avea mai multi constructori!
		//Ei pot diferi intre ei prin numarul de parametrii si prin tipul lor 
		
		//Constructor cu parametrii 
		Fraction (int nNumerator, int nDenumerator = 1){
			assert(nDenumerator != 0)
			m_nNumerator = nNumerator;
			m_nDenumerator = nDenumerator;
		}
		
		Fraction (int nNumerator, double nDenumerator){
			cout << "Heya";
		}
		
		int GetNumerator() { return m_nNumerator; }
		int GetDenumerator() { return m_nDenumerator; }
		double GetFraction() { return static_cast<double>(m_nNumerator) / (m_nDenumerator); }
};

/*=========================================== End Constructori ==============================*/

/*---------------------------------------------- Destructori ----------------------------------*/
/* Destructorii (sunt membrii speciali) sunt folositi pentru a dezinitializa variabilele dintr-o clasa 
	Se dezinitializeaza variabile, pointer de char, string, pointer de integer, vectori
	Destructorii dezaloca memoria care le-a fost alocata variabilelor,membrilor
	Destructorul este unic, DOAR UNUL SINGUR pe clasa, este apelat cu kwarg-ul delete (de un obiect), doar daca este alocat dinamic (cu pointer, new )
	
	Daca obiectul este alocat static, nu mai este nevoie sa eliberam memoria, pentru ca atunci cand se va iesi din main, se va dezaloca singur 
	
	Dar daca alocam dinamic intr-o functie din clasa trebuie neaparat sa facem o functie tot in clasa care dezaloca memoria respectiva, pentru ca nu putem folosi
	delete in programul principal pentru a dezaloca memoria, pentru ca nu se poate (da eroare) (ma refer la obiectele alocate static care apeleaza functia/metoda  in care este alocat dinamic un membru)

*/

	class MyString{
		private:
			char *m_pchString;
			int m_nLenght;
		
		public:
		//constructor 
			MyString(const char *pchString=""){
				m_nLenght = strlen(pchString) + 1;
				
				m_pchString = new char[m_nLenght];
				
				strncpy(m_pchString, pchString, m_nLength);
				
				m_pchString[m_nLengh - 1] = '\0';
			}
		//destructor 
			~MyString(){
				delete[] m_pchString;
				
				m_pchString = 0;
			}
			
			char *GetString() { return m_pchString; }
			int GetLength() { return m_nLenght; }
	};

/*=============================================== End destructori ------------------------------*/











































int main ()				//programul principal
{
	Salutari Alex;		//pentru a crea un obiect scriem clasa (numele clasei) urmat de semnul . si numele obiectului
						//instanta unei clase poarta numele de obiect 
	Alex.spune();		//scriem numele obiectului urmat de semnul punct si folosim o functie care dorim din din clasa care apartine, mai exact functia spune ,in cazul nostru
	Salutari Mihai;		//am creat alt obiect cu numele Mihai
	Mihai.spune();		//
	Mihai.ceva();

	om Alex2;
	Alex2.seteazaVarsta(12);
	cout <<Alex2.arataVarsta() << endl;
	Alex2.seteazaNume("Alex");
	cout << Alex2.arataNume() << " are " << Alex2.arataVarsta() << " ani!" << endl;





//aici am folosit mostenire
	animal Bobitza;
	Bobitza.seteazaVarsta(12);
	Bobitza.seteazaNume("Bobitza");
	Bobitza.seteazaRasa("Pitbull");
	cout << Bobitza.arataNume() << " are " << Bobitza.arataVarsta() << " ani si este un " << Bobitza.arataRasa() << endl << endl;







//aici am lucrat cu constructori
	tren cfr1("regio", 1, 2);  //am chemat clasa si am creat niste valori (le-am declarat)
	tren cfr2("interegio", 2 , 5);
	cout << "Ati ales operatorul: " << cfr1.operatorul << ", clasa " << cfr1.clasa << ", si aveti bilet in vagonul: " << cfr1.vagon <<endl;
	cout << "Ati ales operatorul: " << cfr2.operatorul << ", clasa " << cfr2.clasa << ", si aveti bilet in vagonul: " << cfr2.vagon <<endl <<endl;
	
	tren2 cfr3("express", 1, 1);
	cout << "Ati ales operatorul: " << cfr3.Operator2 << ", clasa " << cfr3.Clasa2 << ", si aveti bilet in vagonul: " << cfr3.Vagon2 <<endl <<endl;
	
	
	
	
	
	
/*---------------------------------------- lucram la exemplul de pe youtube de la "Facem Soft" -----------------------*/

	Student s; //am declarat obiectul 
	s.init(); //cum nu am dat nici un parametru, acestea vor fi default, adica, in cazul nostru cele din clasa: numele "Anonim", matricolul 0 si media 0
			  //se apeleaza metoda s.init 
	cout << s.numeS<<endl; //putem accesa numele deoarece e definit public
	//cout <<s.matricolS;	//nu putem accesa deoarece matricolS e definit ca private 
	
	Student* ps;
	ps = &s;
	cout << ps->returneaza_nume()<<endl;	//se apeleaza metoda returneaza_nume
											//pentru a accesa functii si atribute trebuie sa folosim sageata "->"
											//in cazul nostru am afisat ce returneaza metoda returneaza_nume()


// pentru clasa Statie_Metrou
	Statie_Metrou piata_victoriei;
	piata_victoriei.init("Piata Victoriei", 2, "dreapta", 1);
	piata_victoriei.anunta_statie();


/*----------------------------------------Settere si Gettere -------------------------------*/
	Change cChange;
	cChange.SetValue(5);
	cout << cChange.GetValue() << endl;
	
	/*Incapsularea consta in declararea variabilelor in interiorul clasei in private si 2 metode (functii) publice : getter (functia/metoda returneaza ceva) si setter (seteaza variabila), accesul se face printr-o interfata
	cu ajutorul setterelor si getterelor.*/

/*========================================Settere si Gettere =================================*/


/*-------------------------------------------- Constructori -------------------------------*/

/*Un contructor este un membru ce este o functie ce primeste numele clasei, nu este de nici un tip si nu returneaza nimic.
Orice clasa creata caruia nu ii creem un constructor, aceasta isi creeaza singura un constructor gol de forma: fraction() { }
In constructor facem initializarile variabilelor (cele din private, o parte sau toate ) si putem chema functii cu aceasta.
*/

	Fraction f1, *f2, f3 (2, 2.1); //pentru f3 este apelat constructorul cu tipul int si double 
	
	cout << f1.GetFraction();		//atunci cand un obiect este declarat static (in cazul nostru f1 ), implicit (automat) se apeleaza constructorul acelei clase 
	
	//Gen daca am Fraction f1; se va apela constructorul, initializare si afisare in cazul nostru
	//Daca am Fraction *f2; nu se va apela constructorul , mai jos vedem cum folosim pointerul, cum alocam dinamic ca sa apelam constructorul 

	//rezultatul functiei de alocare dinamica:
	//new - C++				- pointer
	//malloc/calloc - C 	- pointer
	
	f2 = new Fraction(); //pentru a apela constructorul si a-l aloca dinamic folosim new , alocam pe heep cele 2 variabile, cele din constructor  ( f2 primeste new Fraction )
	
	f1.GetFraction();	//se apeleaza cei 2 constructori 
	f2->GetFraction();
									
									//se afiseaza cei 2 constructori 
	cout << f1.GetFraction() << endl;
	cout << f2->GetFraction() << endl;
/*=========================================== End Constructori ==============================*/

/*---------------------------------------------- Destructori ----------------------------------*/
/* Destructorii (sunt membrii speciali) sunt folositi pentru a dezinitializa variabilele dintr-o clasa 
	Se dezinitializeaza variabile, pointer de char, string, pointer de integer, vectori
	Destructorii dezaloca memoria care le-a fost alocata variabilelor,membrilor
	Destructorul este unic, DOAR UNUL SINGUR pe clasa, este apelat cu kwarg-ul delete (de un obiect), doar daca este alocat dinamic (cu pointer, new )
	
	Daca obiectul este alocat static, nu mai este nevoie sa eliberam memoria, pentru ca atunci cand se va iesi din main, se va dezaloca singur 
	
	Dar daca alocam dinamic intr-o functie din clasa trebuie neaparat sa facem o functie tot in clasa care dezaloca memoria respectiva, pentru ca nu putem folosi
	delete in programul principal pentru a dezaloca memoria, pentru ca nu se poate (da eroare) (ma refer la obiectele alocate static care apeleaza functia/metoda  in care este alocat dinamic un membru)

*/

	MyString *ms = new MyString(); //alocare dinamica de memorie pentru obiectul ms 
	
	//constructorul este apelat cu ajutorul kwarg-ului (sau kword, nu stiu sigur) delete 
	delete ms; //se apeleaza delete de un obiect DOAR CAND E ALOCAT DINAMIC

	MyString ms1; //s-a alocat static obiectul ms1, deci nu e nevoie sa apelam delete 
				//atunci cand se va iesi din functia main, ms1 va iesi din scopul functiei si va fi dezalocat  singur 
	
/*=============================================== End destructori ------------------------------*/




	return 0;			//din cauza ca avem int ( main() ), trebuie sa avem return 0    (e un fel de functie care returneaza ceva)
}
