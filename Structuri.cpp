#include <iostream>
using namespace std;

/*-------------------- Structuri sau Articole -------------------------------*/

/*Structurile (Articolele) permit declararea unor ansambluri eterogene de date ce pot fi manipulate unitar */

typedef struct{
	char nume[40];
	int matricol;
	float medie;
} Student;

//alt mod de definire al unei structuri
struct Student2{
	char nume2[40];
	int matricol2;
	float medie2;
};

//alt mod de definire al unei structuri:
struct{
	char nume3[40];
	int matricol3;
	float medie3;
} s3 = {"Popescu Vasile", 124, 9.2}, *ps3; //cum structura nu are nume, nu le mai putem referi, asa ca le declaram aici (la sfarsitul structului,dupa acolada { )






int main(){
	Student s = {"Popescu Ion", 123, 9.5};
	cout << s.nume <<endl;
	
	Student *ps;
	ps = &s;
	cout << (*ps).matricol<<endl; // cand am pus *lang ps se spune ca dereferentiez
								  // operatorul . (punct) are o prioritate mai mare decat operatorul asterisc (operator de referentiere)
								  // pentru asta am fortat ordine operatiilor prin paranteze rotunde
	//similar, pot scrie altfel:
	cout << ps -> matricol<< endl;; //este identic cu cout << (*ps).matricol;
	
	
	
	
	
	
	
	return 0;
}
