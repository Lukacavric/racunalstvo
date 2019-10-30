#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int a, b;
	char X[15]={'1', '2', '3', '4', '5', '6', '7', '8', '9', '1', '1', '1', '1', '1','\0'};
	for(a=0;a<7;a++){
		cout<<a<<". broj niza je: "<<X[a]<<endl;
	}
	cout<<endl;
	for(a=6;a>-1;a--){
		cout<<a<<". broj niza je: "<<X[a]<<endl;
	}
	cout<<endl;
	for(a=0;X[a]!='\0';a++){
		if(X[a]!='L'||'l'){
			b++;
		}
	}
	if(b>0){
		cout<<"Nema slova L ni l u nizu";
	}
	else{
		cout<<"ima slova L ili l u nizu";
	}
	return 0;
}
