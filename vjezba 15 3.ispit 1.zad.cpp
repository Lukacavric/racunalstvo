#include <iostream>
#include <cstdlib>
#include <cctype>
#define MAX 100

using namespace std;

int main() {
	char niz[MAX];
	int i, s=0, b=0;
	cout<<"Unesite string: ";
	gets (niz);
	for (i=0;niz[i]!='\0';i++){
		if (isalpha(niz[i])) s++;
		else
		if (isdigit(niz[i])) b++;
	}
	cout<<"Niz sadrzi "<<s<<" slova"<<endl;
	cout<<"Niz sadrzi "<<b<<" brojeva"<<endl;
	return 0;
}
