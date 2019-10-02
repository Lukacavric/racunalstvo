#include <iostream>
#include <cstdlib>

using namespace std;
//Potrebno je napraviti program koji æe uèitati i ispisati èlanove niza


int main() {
	cout<<"ispis niza"<<endl;
	int n;
	cout<<"unesite broj clanova niza: ";
	cin>>n;
	int a[n];
	cout<<"unesite clanove niza: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"ispis niza: "<<endl;
	for (int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
