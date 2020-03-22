#include <iostream>
#include <cstdlib>
#include<vector>

using namespace std;

int main() {
	string a;
	int b=1;
	getline(cin, a);
	for(int i=0;i<=a.length();i++){
		if(a[i]==' '||a[i]=='.'||a[i]=='?'||a[i]=='!')
		b++;
		
		if(a[i]!=' ')
		cout<<a[i];
		else if(a[i]==' ')
		cout<<", ";
	}
	cout<<"Recenica ima "<<b<<" rijeci.";
	return 0;
}
