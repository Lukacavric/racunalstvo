#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main() {
	int a;
	cout<<"Upisi vrijeme u sekundama: ";
	cin>>a;
	for (a;a>0;a--){
		Sleep (1000);
		cout<<a<<endl;
	}
	system("pause");
	return 0;
}
