#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>

#error Procedura x_sir utilizeaza siruri far //am utilizat directiva directiva catre preprocesor #error pentru a afisa un mesaj de eroare si a incheia compilarea. Aceasta este o generarea a unei erori neconditionate
											 //Se foloseste atunci cand se lucreaza cu un grup de programatori si doresc sa-i avertizez asupra modificarilor pe care le-am facut


#define FOREVER 1					// cand folosim macroinstructiuni sau constante intr-un program trebuie sa le dam nume sugestive, care descriu cu acuratete scopul lor
#define TOPIRE 0					// preprocesorul lucreaza cu instructiuni introduse cu caracterul #, acestea sunt adesea denumite directive catre preprocesor
#define LINIE 128
#define TITLU "Totul despre C/C++"
#define CAPITOL "Macroinstructiuni"
#define TRUE 1
#define FALSE 0
#define PI 3.1415

void main (void)
{	
	// tipuri de variabile mai jos
	/*	Cum si cand se foloseste precizia?
	
		Pentru formatarea valorilor in virgula mobila, prima valoare indica numarul minim de caractere din total? Adica se pune si punctul? Se pun si numerele de dupa punct?
		Iar pentru formatarea valorilor in virgula mobila ,in format exponential semnul + se pune in calcul la formatare? Ce simbolizeaza +00 ?
	
		Sa ma uit din nou la aliniere la stanga, ce se intampla daca am valoare mare pentru spatii si nr mic apoi un text? va fi spatiu mare de la nr pana la text?
	
		Vreau sa testez backslash cand trece pe linia urmatoare si cum il pot afisa in text, fara sa aibe functia de a trece pe linia urmatoare (sa fie afisat ca si caracter, sa nu aibe functie)
	
		Sa ma informez despre specificatorul de format %n pentru ca nu am inteles nimic!
	
		Sa ma uit inca o data la incremetarile prefixe si postfixe
	
		Unde se folosesc unele operatii precum: complementarea, SAU pe biti, etc
		se poate folosi operatia de complementare pe numere in virgula mobila? Dar cu format exponential? Cum?
		
		Nelmuriri, intrebari: 
			-pagina 90 subcap 94: despre deplasare pe biti spre drepta pentru signed (cum e declarat ca unsigned? sau cum se declara?)
			-subcap 105 cand se foloseste operatorul logic nu, variabila trebuie sa fie adevarata (cand e simpla)?
				=raspuns: //am descoperit pe compilator online ca !0 va fi mereu 1 iar !1, !2, !3...!n va fi mereu 0
			-care este regula pentru instructiunea continue?
			-ce face instructiunea goto ,unde si cat de des se foloseste?
			-la subcapitolul 143: eliminarea unei macroinstructiuni sau a unei constante, cum se mai poate scrie exemple si unde se foloseste? pentru ce?
			-subcap 145 directive pragma, cand se folosesc? unde se folosesc?
			-unde se trec macroinstructiunile, directivele si conditiile
			-ce se intampla cu celelate caractere ale sirului atunci cand plasam caracterul NULL undeva prin mijlocul sirului?
			-care e faza cu parametrul n din functia strxfrm? doar sizeof al fisierului sursa se scrie? alte valori mai mari si mai mici nu se pot scrie? Am observat ca daca e mai mica valoarea lui n, atunci apar unele caractere diferite, testeaza si vei vedea
			-de ce nu functioneaza functia streql la compilare?
	
	*/
	
	
	
	/*
	REGULI:
		-Daca dorim rapiditate, utilizam o macroinstructiune. Daca ne intereseaza mai mult dimensiunea programului, utiliam o unctie.
			(daca utilizam de 15 ori o anumita macroinstructiune, vor fi inserate 15 copii diferite. Ca urmare, dimensiunea programului executabil va creste)
			(Cand utilizam o functie, programul apeleaa codul functiei, adica se ramnifica spre el. dezavantajuleste ca dureata putin mai mult executarea)
		-NU PLASAM SPATIU INTRE NUMELE MACROINSTRUCTIUNII SI PARAMETRII SAI
		-La fiecare macroinstructiune vedem ca valorile sunt incluse intre paranteze. Definitiile macroinstructiunilor includ parametrii intre paranteze pentru a accepta expresii
		-Caracterul NULL este ASCII 0 (se stabileste sfarsitul sirului)
		-Declar sirurile de caractere putin mai mari dacat m-am gandit ca am nevoie. Daca programul meu genereaza din cand in can erori, sa examinez codul pentru a vedea daca nu cumva se produce o astefel de suprascriere.
	*/
	
	/*
	AVERTISMENTE:
		-Deoarece sunt stocate in mod diferit, constantele de tip caracter si cele e tip sir de caractere nu sunt similare si trebuie sa avem grija sa le tratam in mod diferit in programe.
	*/
	
	int varsta = 31, x, suma, valoare = 255, pozitiv = 32767, negativ = -32768;	// intreg cu semn (16 biti sau i se mai spune 2 octeti)
	int greutate = 60, inaltime = 162, valoare1;
	int neg_int = -5, poz_int = 5;
	int valoare2 = 5, valoare3 = 10, valoare4 = 255;
	int val_int = 5, secunde_pe_ora;
	int rest, rezultat, variabila, val = 0, val1 = 1;
	int val2 = 0xFF, total1, suma1, jumatate1;
	int varsta1 = 21, inaltime1 = 75;
	int utilizatorul_are_caine = 2, caine = 1, dalmatian = 1, utilizatorul_are_calculator = 0;
	int contor, contor2 = 0, contor3 = 0;
	int contor1, contor5, contor6, contor7;
	int i1,j1, contor8, contor9, contor10;
	int numar_vocale = 0, nr_consoane = 0;
	int contor11 = 1;
	
	
	char litera1 = 'A'; 					// un singur caracter (exemplu litere, punctuatie...) (8 biti sau 1 octet)
	char litera2 = 65;						// variabila litera i se atribuie caracterul A
	char calificativ;
	char litera3;
	char litera4 = 'B';
	char litera5;
	char carte[LINIE];
	char nume[LINIE];
	
	float procent = 3.14, raza = 12.34E-2, pret = 525.75, rata_impozit = 0.06; 	// numere reale cu virgula mobila in simpla precizie
	float pi = 3.14159, raza = 2.0031;
	float neg_flt = -100.23, poz_flt = 100.23;
	float valoare5 = 1.23456, val_flt = 3.33, media;
	float variabila1, impozit_vanzari = 0.065;
	float procent1;
	float salariu1 = 40000.0;
	
	double d; 								// numere reale in format cu virgula mobila in dubla precizie
											// numarula 12.34E+2 mai poate fi scris ca 1234.0 sau 12.34*10 la puterea 2 
											// 64 de biti sau 8 octeti
	
	unsigned int secunde, valoare1 = 42000; // valori pozitive de pit int , valorile nu mai sunt intre -32768 si 32768 ci 0 si 65535
	unsigned int calificativ = 10;
	
	unsigned char chenar_meniu; 			// caracter din setul ASCII extins
	
	long int nr, un_milion = 1000000; 		// numarul poate fi reprezentat pe 32 de biti in loc de 16 biti; 
											// Modificatorul de tip long cere compilatorului  sa dubleze numarul de biti pe care il foloseste pentru a reprezenta valori intregi
	
	long double nr_foarte_mare;
	
	unsigned long int nr_mare; 				// numarul e reprezentat pozitiv pe 32 de biti(variabilele de tip int pot pastra valori in intervalul
											//-32768 panala 32767; modificatorul de tip unsigned ii indica compilatorului sa nu foloseasca cel mai semnificativ bit ca bit de
											// semn,ci sa il foloseasca pentru a reprezenta valori poiztive mari, in intervalul 0-65535)
	
	register int total; 					// modificatorul register pastreaza variabila intr-un registru pentru a face programul mai performant pentru ca e mai rapid de accesat
	
	short int numar_mic; 					// modificatorul e tip short se foloseste pentru  "situatia de depasire" in cazul in care se muta un program dintr-un mediu pe 16 biti intr-unul pe 32 de biti 
											// (programul a fost scris pentru compilator care suporta 16 biti iar la mutare pentru noul compilator care suporta 32 de biti, adica mai mult) (adica sa fie folositi tot 16)
	
	signed int val3 = -1;
	
	signed char optiune_meniu; 				// modificatorul de tip signed este asemanator cu short, adica se foloseste pentru a putea folosi depasirea in cazul in care mutam programul scris pe intr-un compilator care poate
											// reprezenta variabile de tip unsigned char
	
	unsigned semnal_stare;					// cand folosim cei 3 modificatori de tip (unsigned, short, long) ne este permis sa omitem particula "int"
	short valoare_mica;						// ---	
	long numar_foarte_mare; 				// ---
	
	unsigned u_val = 1;
	unsigned u_val1 = 65535;
	unsigned val5 = 1, val6 = 5, val7 = 65534;
	
	long distanta = 1234567;
	
	unsigned _rotl (unsigned val4, int contor4); // functia _rotl si _rotr rotesc bitii unei valori unsigned la stanga sau la dreapta
												 // variabila contor4  specifica numarul de rotatii pe care le efectueaza valoarea
	unsigned _rotr (unsigned val4, int contor4); 
	
	typedef unsigned long int ULINT;		// am folosit intructiunea typedef si am definit NUME DE TIP "ULINT" care este identic cu tipul unsigned long int (adica am creat un tip propriu)
											// ideal este sa scriem cu majuscule tipurile create de noi pentru a putea fi identificate mai usor si de alti programatori
	ULINT secunde_din_ianuarie;				// am declarat o variabila de tip ULINT 
	ULINT populatia_lumii_2000;
	
	char caracter_ASCII_de_atentionare = '\a';  // Caracter ASCII de atentionare
	char backspace = '\b';						// Backspace 		
	char avans_hartie = '\f';					// Avans hartie
	char linie_noua = '\n';						// Linie noua
	char retur_de_car = '\r';					// Retur de car
	char tabulator_orizontal = '\t';			// Tabulator orizontal
	char tabulator_vertical = '\v';				// Tabulator vertical
	char backsplash = '\\';						// Backslash
	char apostrof = '\'';						// Apostrof
	char ghilimele = '\"';						// Ghilimele
	char semnul_intrebarii = '\?';				// Semnul intrebarii
	char valoare_ASCII_in_octal = '\nnn';		// Valoare ASCII in octal
	char valoare_ASCII_in_hexazecimal = '\xnnn';// Valoare ASCII in hexazecimal
	
	char titlu[255] = "Totul despre C/C++";
	
	total = suma = valoare = 0;				// cand se intalneste astfel de atribuire multipla, compilatorul va atribui valorile de la dreapta la stanga
											// ideal ar fi sa utilizam atribuiri multiple NUMAI pentru initilizarea variabilelor
	
	printf ("Totul despre C/C++");
	
	printf ("Totul ");
	printf ("despre ");
	printf ("C/C++");
	
	printf ("Aceasta este linia unu. \n"); 	// \n se numeste caracter linie noua
	printf ("Aceasta este linia a doua");
	printf ("\n");
	
	printf ("%d + 1 este %d\n", pozitiv, pozitiv+1); // situatie de depasire: 32767 + 1 este -32768 (bitul cel mai semnificativ,adica cel din capatul din stanga, este 0 pentru numere pozitive)
	printf ("%d - 1 este %d\n", negativ, negativ-1); // situatie de depasire: -32768 - 1 este 32767 (bitul cel mai semnificativ,adica cel din capatul din stanga, este 1 pentru numere negative)

	printf ("Varsta utilizatorului este %d\n", varsta); 						// specificatorii de format sunt reprezentati prin semnul de procent (%) urmat de o litera (acea litera specifica tipul valorilor) si se plaseaza in primul parametru al functiei printf
																				// specificatorul de format %d se foloseste pentru a afisa valori si variabile e tip int
	printf ("%d plus %d egal %d\n", 1, 2, 1+2);
	printf ("Impozitul de vanzari este %d\n", pret * 0.07);
	printf ("Detalii despre utilizator: %d greutate, %d inaltime\n", greutate, inaltime);
	
	printf ("Valoarea zecimala %d este %o in octal\n", valoare, valoare); 		// specificatorul de format %o se foloseste pentru a afisa valori si variabile in octal  (se va afisa pe ecran numarul 377)
	printf ("Valoarea zecimala %d este %x in hexazecimal\n", valoare, valoare);	// specificatorul de format %x se foloseste pentru a afisa valori si variabile in hexazecimal cu minuscule(se va afisa pe ecran ff)
	printf ("Valoarea zecimala %d este %X in hexazecimal\n", valoare, valoare); // specificatorul de format %x se foloseste pentru a afisa valori si variabile in hexazecimal cu MAJUSCULE(se va afisa pe ecran FF)
	
	printf ("Afiseaza 4200 ca unsigned %u\n", valoare1);	// specificatorul de format %u se foloseste  pentru a afisa valorile de tip unsigned (se va afisa 42000)
	printf ("Afiseaza 4200 ca int %d\n", valoare1);			// daca folosim  %d in loc de %u, printf va trata valoarea respectiva ca fiind de tip int si probabil va afisa un rezultat gresit (se va afisa -23536)
	
	printf ("Un milion este %ld\n", un_milion);	// Specificatorul de format %ld se foloseste pentru a afisa valorile e tip long int (se va afisa 1000000)
	printf ("Un milion este %d\n", un_milion);	// Daca folosim % printf va trata valoarea ca fiind int si probabil ca va afisa un rezultat gresit (se va afisa 16960)

	printf ("Pretul este %f\n", pret);								// specificatorul de format %f se foloseste pentru a afisa valorile de tip float, adica valori in virgula mobila (se va afisa 525.750000)
	printf ("Impozitul pe vanzari este %f\n", pret * rata_impozit); // ---//--- (se va afisa 31.544999)

	printf ("Litera este %c\n", 'A'); // specificatorul de format %c se foloseste pentru a afisa valorile de tip char (se va afisa A)
	printf ("Litera este %c\n", 65);  // ---//--- (se va afisa A)

	printf ("Aria cercului este %e\n", 2 * pi * raza); // specificatorul de format %e se foloseste pentru a afisa valori in virgula mobila in format exponential (se va afisa 1.258584e+01)
	printf ("Aria cercului este %E\n", 2 * pi * raza); // diferenta intre specificatorul de format %e si %E  este ca a doua se afiseaza cu majuscula E (se va afisa 1.258584E+01)

	printf ("Numarul 0.1234 este afisat in formatul %g\n", 0.1234);			//specificatorul de format %g si %G se foloseste ca functia printf sa aleaga %f sau %e, pentru a oferi utilizatorului o afisare cat mai convenabila (se va afisa 0.1234)
	printf ("Numarul 0.00001234 este afisat in formatul %G\n", 0.00001234); //--//--, diferenta intre specificatorul de format %g si %G este ca atunci cand programul va alege %E pentru %G sau %e pentru %g (se va afisa 1.234E-05)

	printf ("Numele acestei carti este %s\n", titlu); // specificatorul de format %s este folosit pentru a afisa un sir de caractere (se va afisa: Numele acestei carti este Totul despre C/C++)
	printf ("Adresa valorii variabilei este %p\n", &valoare); // specificatorul de format %p este folosit pentru  a afisa o adresa de memorie (se lucreaza cu pointeri pentru adrese de memorie) (posibil se va afisa FFF4)
															  // valoarea pointerului si formtul utilizat de printf difera de la un sistem de operare la altul
	
	printf ("Valoarea intraga este %+d si %+d\n", neg_int, poz_int);		//pentru a indica functiei printf sa afiseze semnul valorii, includem un semn plus imediat dupa % in specificatorul de format (se va afisa -5 si +5)
	printf ("Valoarea in virgula mobila este %+f %+f\n", neg_flt, poz_flt); // ---//--- (se va afisa -100.230003   +100.230003)

	printf ("%1d\n", valoare2);	//valoarea plasata dupa % precizeaza numarul minim de caractere pe care il ba avea iesirea
								//acest procedeu se numeste FORMATAREA UNEI VALORI (intregi in cazul acesta)
								//alinierea prestabilita este la dreapta!!!
	printf ("%2d\n", valoare2);
	printf ("%3d\n", valoare2);
	printf ("%4d\n", valoare2);
	/*
	Se va afisa pe ecran:
	5
		5
			5
				5
	*/
	printf ("%5d\n", valoare3);  //printf va introduce trei spatii libere inainte de valoare, deoarece se foloseste numarul minim de caractere (adica 3 spatii libere plus 2 cifre/caractere de la numarul 10 inseamna 5)
								 //daca valoarea pe care dorim sa o afisam are mai multe caractere decat am precizat, printf va folosi numarul de caractere necesar pentru afisarea corecta a valorii
	
	printf ("%01d\n", valoare2); // i-am indicat functiei printf sa adauge eoiruti inaintea valorii, plasand un 0 imediat dupa % in specificatorul e format
	printf ("%02d\n", valoare2);
	printf ("%03d\n", valoare2);
	printf ("%04d\n", valoare2); 
	/*
	Se va afisa pe ecran:
	5
	05
	005
	0005
	*/
	
	printf ("Valoarea zecimala %d este %#o in octal\n", valoare4, valoare4);		// pentru a indica functiei sa adauge prefixul potrivit unei valori octale 
																				// sau hexazecimale  , plasati caracterul # imediat dupa % in specificatorul e format
																				// se va afisa: 255 este 0377 in octal
	printf ("Valoarea zecimala %d este %#x in hexazecimal\n", valoare4, valoare4);// se va afisa: 255 este 0xff in hexazecimal
	printf ("Valoarea zecimala %d este %#X in hexazecimal\n", valoare4, valoare4);// se va afisa: 255 este 0xFF in hexazecimal
	
	printf ("%8.1f\n",valoare5);	//pentru formatarea valorilor in virgula mobila precizam doua valori imediat dupa % in specificatorul e format %d:
									//prima valoare indicand numarul minim de caractere pe care vrem sa il afisam
									//a doua valoare comunica functiei printf numarul de cifre pe care vrem sa le afiseze de la dreapta punctului zecimal (adica de la punct spre dreapta)
	printf ("%8.3f\n",valoare5);	
	printf ("%8.5f\n",valoare5);	
	/*
	Se va afisa:
	      1.2
	   1.234
	1.23456
	*/
	
	printf ("%12.1e\n", valoare5); // pentru formatarea valorilor in virgula mobila, in format exponential
	printf ("%12.3e\n", valoare5);
	printf ("%12.5e\n", valoare5);
	/*
	Se va afisa:
	        1.2e+00
		 1.234e+00
	 1.23456e+00
	*/
	
	printf ("Aliniere la dreapta %5d a valorii\n", val_int);	
	printf ("Aliniere la stanga %-5d a valorii\n", val_int);	// pentru aliniere la stanga am plasat semnul minus imediat dupa % in specificatorul de format
	printf ("Aliniere la dreapta %7.2f a valorii\n", val_flt);
	printf ("Aliniere la stanga %-7.2f a valorii\n", val_flt);	// si aici este aliniere la stanga pentru o valoare in virgula mobila
	/*afisarea pentru asta se gaseste la pagina 73, subcapitol 70*/
	
	printf("Aliniere stanga cu semn %-+3d\n", val_int); // dorim sa combinam specificatorii de format 
														// Se va afisa: Aliniere stanga cu semn +5
	
	printf ("Acest text este foarte lung si pentru ca este atat de \ lung, nu va incapea pe o singura linie."); // am plasat caracterul backslash (\) la sfarsitul liniei, ceea ce va face ca textul sa continue pe linia urmatoare


	printf ("Linie 1\nLinie 2\nLinie 3\n");
	
	printf ("\033[30m"); //Am folosit secventa escape pentru a afisa iesirea in culori: Negru - culoare de prim-plan
						 //Instructiunea printf selecteaza culoare de prim plan negru 
	printf ("\033[31m"); // ---//--- Rosu - culoare de prim-plan
	printf ("\033[32m"); // ---//--- Verde - culoare de prim-plan
	printf ("\033[33m"); // ---//--- Portocaliu - culoare de prim-plan
	printf ("\033[34m"); // ---//--- Albastru - culoare de prim-plan
	printf ("\033[35m"); // ---//--- Magenta - culoare de prim-plan
	printf ("\033[36m"); // ---//--- Clan - culoare de prim-plan
	printf ("\033[37m"); // ---//--- Alb - culoare de prim-plan
	
	printf ("\033[40m"); // ---//--- Negru - culoare de fundal
	printf ("\033[41m"); // ---//--- Rosu - culoare de fundal
	printf ("\033[42m"); // ---//--- Verde - culoare de fundal
	printf ("\033[43m"); // ---//--- Portocaliu - culoare de fundal
	printf ("\033[44m"); // ---//--- Albastru - culoare de fundal
	printf ("\033[45m"); // ---//--- Magenta - culoare de fundal
	printf ("\033[46m"); // ---//--- Clan - culoare de fundal
	printf ("\033[47m"); // ---//--- Alb - culoare de fundal
	
	printf ("\033[47;31m"); // printf scrie doua secvente escape. Driverul ANSI permite specificarea culorilor de ecran prin separarea cu punct si virgula (;)
	
	printf ("\033[10;25H"); //pozitioneaza cursorul la randul 10 si coloana 25
	printf ("\033[1A"); // muta cursorul cu 1 rand mai sus
	printf ("\033[2B"); // muta cursorul cu 2 randuri mai jos
	printf ("\033[10C"); // muta cursorul cu 10 coloane la dreapta
	printf ("\033[10D"); // muta cursorul cu 10 coloane la stanga
	printf ("\033[S"); // stocheaza pozitia curenta a cursorului
	printf ("\033[U"); // restaureaza pozitia curenta a cursorului
	printf ("\033[2j"); // sterge ecranul si muta cursorul la pozitia home
	printf ("\033[K"); // sterge pana la sfarsitul liniei curenta


	secunde_pe_ora = 60 * 60;
	media = (5 + 10 + 15 + 20) / 4;
	printf ("Numarul de secunde intr-o ira este %d\n", secunde_pe_ora);
	printf ("Media numerelor 5, 10, 15 si 20 este %f\n", media);
	printf ("Numarul de secunde in 48 minute este %d\n", secunde_pe_ora - 12 * 60);
	
	reultat = 10 / 3;
	rest = 10 % 3;
	printf ("10 impartit la 3 egal %d rest %d\n",rezultat, rest); // am folosit operatorul modulo % pentru restul inmartirii a doua numere intregi

	variabila = variabila + 1; // in aceasta instructiune creste valoarea variabilei variabila
	variabila++; //se foloseste operator de incrementare pentru a adauga 1 la valoarea variabilei variabila
	
	while (val <= 100)  //se utilizeaza operatorul de incrementare pentru a tipari valorile de la 0 la 100
	{
		printf ("%d\n", val);
		val++
	}
	
	printf("Utilizarea postfix %d\n", val1++);		//se va afisa 1 cand se utilieaza operatorul postfix, se utilizeaza mai intai valoarea variabilei, afisand valoare 1 apoi incrementeaa variabila, obtinand 2
	printf("Valoarea dupa incrementre %d\n", val1); //se va afisa 2
	val = 1;										
	printf("Utilizarea prefix %d\n", ++val1);		//se va afisa 2 cand se utilizeaza operatorul prefix, se incrementeaza mai intai variabila, obtinand 2 apoi afiseaza valoarea incrementata deja
	printf("Valoarea dupa incrementre %d\n", val1); //se va afisa 2
	
	val1--; // decrementare postfix
	--val1; // decrementare prefix
		//aceleasi reguli se aplica si in cazul decrementarilor prefixe si postfixe ca mai sus
	
	printf("0 | 0 este %d\n", 0 | 0); //se utilizeaza operatorul SAU pe biti!!!ATENTIE!
									  //se va afisa 0
	printf("0 | 1 este %d\n", 0 | 1); //se va afisa 1
	printf("1 | 1 este %d\n", 1 | 1); //se va afisa 1
	printf("1 | 2 este %d\n", 1 | 2); //se va afisa 3
	printf("128 | 127 este %d\n", 128 | 127); //se va afisa 255
	
	printf ("0 & 0 este %d\n", 0 & 0); // se utilizeaza operatia SI pe biti!!!
										//se va afisa 0
	printf ("0 & 1 este %d\n", 0 & 1);	//se va afisa 0
	printf ("1 & 1 este %d\n", 1 & 1);	//se va afisa 1
	printf ("1 & 2 este %d\n", 1 & 2);	//se va afisa 0
	printf ("15 & 127 este %d\n", 15 & 127);//se va afisa 15
	
	printf ("0 ^ 0 este %d\n", 0 ^ 0); // se utilizeaza operatia SAU exclusiv pe biti!!!
										//se va afisa 0
	printf ("0 ^ 1 este %d\n", 0 ^ 1);	//se va afisa 1
	printf ("1 ^ 1 este %d\n", 1 ^ 1);	//se va afisa 0
	printf ("1 ^ 2 este %d\n", 1 ^ 2);	//se va afisa 3
	printf ("15 ^ 127 este %d\n", 15 ^ 127);//se va afisa 112
	
	printf("%X complementat este %X\n", val2, ~val2); // se foloseste operatorul de complementare (~)
													  // adica bitii care contineau unu in valoarea initiala devin zero, iar cei care contineau zero devin unu in valoarea rezultata
													  // se va afisa: FF complementat este FF00
	
	total1 = total + 100;  // limbajul C dispune de o notatie prescurtata pentru reprezentarea operatiei
	total1 += 100;	
	
	suma1  = suma - 5;
	suma1 -= 5;
	
	jumatate1 = jumatate1 / 2;
	jumatate1 /= 2;

	variabila1 += 10;
	variabila1 <<= 2;
	variabila1 &= 0xFF;
	variabila1 *= 1.05;
	
	if (punctaj >= 60)
		calificativ = 'A';
	else
		calificativ = 'R';
	
	printf ("Variabila de tip int foloseste %d octeti\n", sizeof(int));				//cand programul declara o variabila, compilatorul de X aloca memorie pentru stocarea valorii variabilei.
																					//opratorul C sizeof returneaza numarul de biti alocati unei variabile sau unui tip
																					//se va afilsa: Variabila de tip int foloseste 2 octeti
	printf ("Variabila de tip float foloseste %d octeti\n", sizeof(float));			//se va afilsa: Variabila de tip float foloseste 4 octeti
	printf ("Variabila de tip double foloseste %d octeti\n", sizeof(double));		//se va afilsa: Variabila de tip double foloseste 8 octeti
	printf ("Variabila de tip unsigned foloseste %d octeti\n", sizeof(unsigned));	//se va afilsa: Variabila de tip unsigned foloseste 2 octeti
	printf ("Variabila de tip long foloseste %d octeti\n", sizeof(long));			//se va afilsa: Variabila de tip long foloseste 4 octeti
	
	printf ("%u (unsigned) deplasat la stanga de 2 ori este %u\n", u_val, u_val << 2);   //deplasare pe bit la stanga de 2 ori
	printf ("%u (unsigned) deplasat la dreapta de 2 ori este %u\n", u_val, u_val >> 2);  //deplasare pe bit la drepta de 2 ori (este important tipul variabilei cand se face deplasare spre dreapta (cand e 0 e pozitiv iar cand e 1 e negativ))
	printf ("%u (unsigned) deplasat la stanga de 2 ori este %u\n", u_val1, u_val1 << 2); //deplasare pe bit la stanga de 2 ori
	printf ("%u (unsigned) deplasat la dreapta de 2 ori este %u\n", u_val1, u_val1 >> 2);
	printf ("%d (signed) deplasat la stanga de 2 ori este %d\n", val, val << 2);
	printf ("%d (signed) deplasat la dreapta de 2 ori este %d\n", val, val >> 2);
	
	printf ("%u rotit la dreapta o data este %u\n", val5, _rotr(val5, 1));			//se afiseaza: 1 rotit la dreapta o data este 32768	(cand rotim la dreapta, bitul cel mai putin semnificativ al valorii devine cel mai semnificativ)
	printf ("%u rotit la dreapta de doua ori este %u\n", val6, _rotr(val6, 2));		//se afiseaza: 5 rotit la dreapta de doua ori este 16385	
	printf ("%u rotit la stanga de doua ori este %u\n", val7, _rotl(val7, 2));		//65534 rotit la stanga de doua ori este 65531	(cand rotim la stanga, bitul cel mai semnificativ al valorii devine cel mai putin semnificativ)

	if (varsta1 == 21)
		printf ("Varsta utilizatorului este 21\n");
	if (varsta1 != 21)
		printf ("Varsta utilizatorului este 21\n");
	if (varsta1 >= 21)
		printf ("Varsta utilizatorului este mai mare de 20\n");
	else //atunci cand plasati o instructiune else in cadrul programului, acest else va fi asociat cu cea mai apropiata instructiune if care nu are asociat un else (se refera la faptul in care avem 2 if-uri si un else si nu exista acolade { } )
		if (varsta1 <= 20)
			printf ("Varsta utilizatorului este mai mic decat 21\n");
	
	if (utilizatorul_are_caine) && (caine == dalmatian) //cand scriu (utilizatorul_are_dalmatian) inseamna utilizatorul_are_dalmatian != 0
													   // conditia contine SI logic && si se executa cand ambele conditii sunt indeplinite
		printf ("Utilizatorul are caine si este dalmatian\n");
	
	if ((utilizatorul_are_caine) || (utilizatorul_are_calculator)) // conditia contine SAU logic ||  si se executa cand cel putin una din conditii este indeplinite
		printf ("Utilizatorul are caine sau calculator\n");
		
	if (! utilizatorul_are_caine)
		printf ("Trebuie sa cumparati un dalmatian\n");
	
	
	if ((impozit_vanzari - 0.065)<= 0.001) // conditionarea pentru variabile in virgula mobila se face in acest mod, nu trebuie testat valori in virgula mobila exacta, ci intervale acceptabile de valori

	while (1) // aceasta este o bucla infinita, aceasta instructiune se mai poate scrie: while (1 != 0) 
	while (FOREVER)//aceasta este o bucla infinita, aceasta instructiune se mai poate scrie: while (FOREVER != 0) adica 1 != 0
	while (!TOPIRE)//aceasta este o bucla infinita, aceasta instructiune se mai poate scrie: while (!TOPIRE != 0) adica !0 != 0 inseamna 1 != 0
				   //am descoperit pe compilator online ca !0 va fi mereu 1 iar !1, !2, !3...!n va fi mereu 0
	
	for (contor = 1; contor <=10; contor++) //aceasta este o instructiune for si are 4 sectiuni: o initializare, un test si o incrementare, iar a patra instructiune contine instructiunile pe care le repeta bucla for
											//s-a folosit incrementare
		printf ("%d\n", contor); 
	
	for (; contor2 < 10; contor2++) //am atribuit mai sus (unde am declararile int) valoarea 0 variabilei contor2 iar aici o putem omite, dar trebuie sa includem punctul si virgula (nu uita!)
		printf(" %d ", contor2);
	printf ("\n");
	
	for (; contor3 < 10; )
		printf(" %d ", contor3++);
	printf ("\n")
	
	for (contor1 = 10; contor1 >= 1; contor1--) // s-a folosit decrementare
		printf(" %d ", contor1);
	printf ("\n");
	
	for (contor5 = 0; contor <= 100; contor5 += 10) //limbajul C ne permite sa incrementam sau sa decrementam valoarea variabilei contor cu orice marime
		printf(" %d ", contor5);
	printf ("\n");

	for (contor6 = -100; contor6 <= 100; contor6 += 5)
		printf(" %d ", contor6);
	printf ("\n");
	
	for (litera3 = 'A'; ltera3 <= 'Z'; litera3++)
		printf("%c ", litera3);
	printf ("\n");

	for (procent1 = 0.0; procent1 <= 10.0; procent1 += 0.5)
		printf ("%f ", procent1);
	printf ("\n");
	
	for (contor7 = 1; contor7 <= 100; contor7++) //bucla vida
	{
		
	}
	
	for (i1 = 0, j1 = 100; i1 <= 100; i1++, j1++) //limbajul C ne permite sa incrementam mai multe variabile intr-o bucla for, separand operatiile tot prin virgula
		printf ("i= %d j = %d\n",i1 ,j1);
	printf ("\n");
	
	contor8 = 1;				//Initialiare variabila de control
	while (contor8 <= 100)		//Testare variabila de control
	{
		printf ("%d ", contor8);//Executa instructiunile	
		contor8++;				// Modifica variabila e control
	}
	printf ("\n");
	
	printf ("Valori pare\n");	//nu am inteles instructiunea continue!!!
	for (contor9 = 1; contor9 <= 100; contor9++)
	{
		if (contor9 % 2) //impar
		continue;					//daca intr-o bucla for apare instructiunea continue, se va executa imediat sectiunea de incrementare a buclei si apoi se va resta conditia de sfarsit
									//in cazul nostru, daca se indeplineste conditia si restul este 1 care e diferit de 0, adica numarul este par, atunci se va executa instructiunea continue care incrementeaza bucla apoi se va testa conditia de sfarsit
		printf ("%d ", contor9);
	}
	printf ("\n");
	printf ("Valori impare\n");
	for (contor9 = 1; contor9 <= 100; contor9++)
	{
		if (!(contor9 % 2)) //par
		continue;
		printf ("%d ", contor9);
	}
	printf ("\n");
	
	for (contor10 = 1; contor10 <= 100; contor10++)
	{
		if (contor10 == 50)
			break;					// instrusctiunea break opreste bucla for cand ajunge la 50
		printf("%d ", contor10);
	}
	printf ("\n");
	
	switch (litera4) {
		case 'A' : system("DIR"); //Afiseaza continutul directorului
			break;
		case 'B' : system("TIME");// Modifica ora sistemului
			break;
		case 'C' : system ("DATE");//Modifica data sistemului
			break;
	};
	printf ("\n");
	
	for (litera5 = 'A'; litera5 <= 'Z'; litera5++) 	//executare in cascada cu mai multe instructiuni case
	switch (litera5){
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': nr_vocale++;
			break;
		default: nr_consoane++;				//daca nu se potriveste nici una din optiunile care preced caul default, se va executa instructiunea (instructiunile) corespunzatoare acestuia
	};
	printf ("Numarul de vocale este %d\n", nr_vocale);
	printf ("Numarul de consoane este %d\n", nr_consoane);
	
	
	/* Capitol 2 - Definirea constantelor */
	
	
	printf ("Titlul cartii este %s\n", TITLU); //inainte de a incepe compilarea, preprocesorul va inlocui fiecare nume de constanta cu valoare ei
	printf (CAPITOL);

	printf ("Fisierul %s ete in stadiu de test\n", __FILE__); // preprocesorul de C defineste constanta __FILE__ ca fiind egala cu numele fisierului sursa curent. In cazul nostru fisierul e Main.cpp
															  // se va afisa: Fisierul Main.cpp este in stadiu de test
	
	printf ("Am trecut de linia %d\n", __LINE__); // uneori dorim ca sa aflam numarul liniei curente al fisierului sursa pe masura ce compilatorul trece prin diverse puncte ale programului folosind constanta __LINE__
	printf ("Am trecut de linia %d\n" __LINE__);
	
	printf ("Fisier %s: Am trecut de linia %d\n", __FILE__, __LINE__); //Se va afisa: Fisier Main.cpp: Am trecut de linia (curenta, ma uita in stanga si vad nr liniei)
	#line 100 "Main2.cpp"
	printf ("Fisier %s: Am trecut de linia %d\n", __FILE__, __LINE__); //Se va afisa: Fisier Main2.cpp: Am trecut de linia 100

	printf ("Versiune Beta: Ultima compilare %s %s\n", __DATE__, __TIME__); // uneori dorim ca preprocesorul sa lucreze cu data si ora curente.Aici se afiseaa un mesaj care contine data si ora ultimei compilari
	
	#ifdef __STDC__							//daca este definita constanta __STDC__ , compilatorul este compatibil cu standardul ANSI,daca nu este definita, compilatorul nu este compatibil
	 printf ("Compatibilitate ANSI C\n");
	#else
	 printf ("Nu este in modul ANSI C\n");
	#endif

	#ifdef __cplusplus						//aceasta se foloseaste ca preprocesorul sa determine daca utilizam un compulator de C sau e C++, pentru a sti ca sa se proceseze instructiunile in mod corespunzator
	 printf ("Se utilizeaza C++\n");
	#else
	 printf ("Se utilizeaza C\n");
	#endif

	#ifdef _MSC_VER
		printf ("Microsoft\n"); //Daca se utilizeaza compilatorul Visual C__ se va afisa Microsoft sau Borland daca se utilizeaza compilatorul Borland C++
	#endif
	#ifdef __BORLANC__
		printf ("Borland\n");
	#endif
	
	#ifdef BIBL_MEA
	#ifndef FCT_MELE
	#include "cod_meu.h"
	#endif
	#endif
	
	//se mai poate scrie
	
	#if defined (BIBL_MEA) && !defined(FCT_MELE)
	#include "cod_meu.h"
	#endif
	
	#define SUMA(x, y) ((x) + (y)) //NU PLASAM SPATIU INTRE NUMELE MACROINSTRUCTIUNII SI PARAMETRII SAI (in cazul nostru nu plasam spatiu intre suma si paranteza deschisa SUMA(x, y))
								   //La fiecare macroinstructiune vedem ca valorile sunt incluse intre paranteze. Definitiile macroinstructiunilor includ parametrii intre paranteze pentru a accepta expresii
	printf ("3 + 5 = %d\n", SUMA(3, 5));
	printf ("3.4 + 3.1 = %f\n", SUMA(3.4, 3.1));
	printf ("-100 + 1000 = %d\n", SUMA(-100, 1000));
	
	/* Capitol 3 - Siruri*/
	
	//Atunci cand programele isi creeaza propriile siruri citind caractere de la tastatura, trebuie sa plaseze caracterul NULL la sfarsitul sirului pentru a-i marca sfarsitul
	//Un sir de caractere este un tablou de caractere terminat cu NULL
	
	char sir1[256];
	char sir2[256];
	char sir3[] = "\"Stop!\", spuse ea.\n"; //am utilizat secventa escape \" pentru a plasa ghilimelele intr-o constanta de tip sir de caractere
	char sir4[256];
	char titlu_carte[] = "Totul despre C/C++";
	char titlu1[] = "Totul despre C/C++";
	char carte[128];
	char nume1[64] = "Totul despre ";
	char nume2[64] = "Bill";
	char buffer1[64] = "Totul despre C/C++";
	char destinatie1[64];
	
	int i, lungime;
	
	
	
	
	for (i = 0; i < 26; i++)						//se utilizeaza bucla for pentru a atribui literele de la A la z sirului de caractere.Apoi se plaseaza caracterul NULL dupa litera Z pentru a astabili sfarsitul fisierului
		sir1[i] = 'A' + i;
	sir1[i] = NULL;
	printf("Sirul de caractere contine %s\n", sir1); //Se va afisa: Sirul de caractere contine ABCDEFGHIJKLMNOPQRSTUVWXYZ
	
	
	for (i = 0; i < 26; i++)
		sir2[i] = 'A' + i;
	sir2[10] = NULL;								 // Se atribuie caracterul NULL lui sir[10], care este locatia imediat urmatoare literei J. Atunci cand printf afiseaza continutul sirului, se va opri la litera J
	printf("Sirul de caractere contine %s\n", sir2); // Functia printf va afisa fiecare caracter al sirului, pana la caracterul NULL. Se va afisa: Sirul de caractere contine ABCDEFGHIJKL
	
	printf(sir3);

	printf ("Introduceti un sir de caractere si apoi apasati Enter:\n");
	gets(sir4);															//se utilizeaza functia gets pentru a citi un sir de caractere de la tastatura.
	for (i = 0; sir4[i] != NULL; i++)									// se foloseste bucla for pentru a afisa caracterele sirului unul cate unul, pana can conditia sir4[i] != NULL este evaluata ca falsa
		putchar (sir4[i]);
	printf("\nNumarul de caractere in sir este %d\n", i);
	
	printf ("%s contine %d caractere\n", titlu_carte ,strlen(titlu_carte)); // pentru a determina numarul de caractere dintr-un sir, compilatorul de C ofera functia strlen, care returneaza numarul de caractere din sir. 
																			//Se va afisa: Totul despre C/C++ contine 35 caractere
	
	strcpy(carte, titlu);
	printf("Numele cartii e %s\n", carte);	//Am copiat continutul unui sir (parametrul sursa) de caractere in alt sir (parametrul destinatie) cu functia strcpy
											//Functia strcpy returneaa un pointer care indica inceputul sirului destinatie

	strcat(nume1, "C/C++");					//Functia strcat concateneaza (adauga) un sir de caractere la un sir tinta, adica adauga continutul unui sir de caractere la altul.
	printf("Numele cartii este %s\n", nume);

	strncat(nume2, "si Hillary", 3);		//Functia strncat adauga primele n caractere ale sirului sursa la sirul destinatie
	printf("Ai votat cu %s?\n", nume2);		//Pentru ca, in caul nostru, avem valoarea lui n 3 se va copia doar "si " 
											//Daca n este mai mare decat numarul de caractere din sirul sursa, functia strncat va copa toate caracterele pana la sfarsitul sirului, nu mai mult
	
	lungime = strxfrm(destinatie1, buffer1, sizeof(buffer1));						//functia strxfrm copiaza continutul unui sir de caractere in alt sir pana la numarul de caractere precizat in parametrul n si apoi returneaza lungimea sirului rezultat.
																					//Parametrul n in cazul nostru este sizeof(buffer1), adica fix lungimea sirului sursa 
																					//variabila lungime a luat valoarea lungimii sirului rezultat returnata de catre functia strxfrm
	printf("Lungimea %d Destinatie %s Buffer %s\n", lungime, destinatie1, buffer1);	

	printf("Testare Abc si Abc %d\n", streql("Abc", "Abc"));		//functia streql se foloseste pentru a stbili daca doua siruri contin aceleasi caractere.
	printf("Testare abc si Abc %d\n", streql("abc", "Abc"));		//functia streql returneaza valoarea 1 daca cele doua siruri sunt egale si valoarea 0 daca ele nu sunt egale
	printf("Testare abcd si abc %d\n", streql("abcd", "abc"));
	
	printf("Testare abcd si abc %d\n", strieql("abcd", "abc"));		//functia strieql se foloseste pentru a compara doua siruri de caractere fara a tine seama daca literele sunt mari sau mici
	printf("Testare abcd si abc %d\n", strieql("abcd", "abc"));		//functia strieql converteste fiecare caracter din fiecare sir de caractere in majuscule inainte de a compara cele doua siruri
	printf("Testare abcd si abc %d\n", strieql("abcd", "abc"));

	printf(strlwr("Totul despre C/C++\n"));		//cu functia strlwr convertim un fisier de caractere in minuscule
	printf(strupr("Totul despre C/C++\n"));		//cu functia strupr convertim un fisier de caractere in majuscule
	printf(strupr("Totul despre C/C++\n"));



	/*
	POINTERI
	
	*/
	
	int contor12[10], contor14 = 1;
	int *iptr;						//declarare variabila pointer
	
	float salarii[5];
	
	long distante[10];

	printf("Adresa variabilei contor este %x\n", &contor11);	//pentru a determina adresa unei variabile, programele trebuie sa utilizeze operatorul adresa al limbajului C, caracterul ampersand (&)
	printf("Adresa variabilei salariu este %x\n", &salariu1);
	printf("Adresa variabilei distanta este %x\n", &distanta);
	
	printf("Adresa matricei contor12 este %x\n", &contor12);		//compilatorul de C trateaza matricele ca pointeri la primul element al matricei 
	printf("Adresa matricei salarii este %x\n", &salarii);		//daca aplicam operatorul adresa unei matrice, compilatorul de C returneaza adresa de inceput a matricei 
	printf("Adresa matricei distane este %x\n", &distante);
	
	printf("Adresa matricei %x &contor12 este %x\n",contor12, &contor12);	//aplicarea operatorului adresa unei matrice este reduntanta (reduntanta se refera la inutil, supraambundenta inutila a expresiilor)
	printf("Adresa matricei %x &salarii este %x\n",salarii, &salarii);
	printf("Adresa matricei %x &distante este %x\n",distante, &distante);

	iptr = &contor12; //atribuie adresa lui contor14, lui iptr
	printf("Valoarea lui iptr %x Valoarea lui contor14 %d Adresa lui contor %x\n", iptr, contor, &contor); // pentru a pastra pointerii trebuie declarate variabile pointeri. Pentru a declara un pointer, trebuie sa specificati tipul valorii pe care pointerul o indica (cum sunt int, float char etc) si un asterisc (*) inaintea numeui variabilei
																										   // ca pentru orice variabila, trebuie sa atribuim o valoare unei variabile pointer inainte de a putea folosi pointerul in cadrul programului. Atunci cand atribuiti o valoare unui pointer, de fapt atribuiti o adresa 
																										   // programul declara variabila pointer iptr si atribuie pointerului adresa variabilei contor apoi afiseaza valoarea variabilei pointer, impreuna cu adresa variabilei contor 
																											
	
	
}	


