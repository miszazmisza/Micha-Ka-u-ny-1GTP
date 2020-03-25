#include <iostream>
#include <string.h>
using namespace std;

string gra1.tytul,gra1.gatunek,gra1.ocena;
string gra2.tytul,gra2.gatunek,gra2.ocena;
struct pierwsza {
    string gra1.tytul;
    string gra1.gatunek;
    int gra1.ocena;
};

struct druga {
    string gra2.tytul;
    string gra2.gatunek;
    int gra2.ocena;
};

int main(){

	cout<<"podaj nazwe gry 1";
	cin>>gra1.tytul;
	cout<<"podaj gatunek gry 1";
	cin>>gra1.gatunek;
	cout<<"podaj ocene gry 1 od 1-10";
	cin>>gra1.ocena;
	
	cout<<"podaj nazwe gry 2";
	cin>>gra2.tytul;
	cout<<"podaj gatunek gry 2";
	cin>>gra2.gatunek;
	cout<<"podaj ocene gry 2 od 1-10";
	cin>>gra2.ocena;
{

    pierwsza gra1; 
    
    pierwsza.tytul = gra1.tytul;
    pierwsza.gatunek =gra1.gatunek;
    pierwsza.ocena =gra1.ocena;
}
{

    druga gra2; 
    
    druga.tytul = gra2.tytul;
    druga.gatunek =gra2.gatunek;
    druga.ocena =gra2.ocena;
}

    cout << "pierwsza gra: " << gra1 << endl;
    cout<<"druga gra:"<< gra2 <<endl;

    return 0;
}
