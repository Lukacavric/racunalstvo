#include <iostream>
#include <stdio.h>
#include <string.h>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main()
 {
	string velikavijest =
	"Mislim da sam vifio Elvisa u UFO. "
	"Danas sam izmjenio program. ";
	string zamjena = "CIA";
	string nadjiME = "UFO";
	int i = velikavijest.find(nadjiME, 0);
	if (i!=string::npos)
	velikavijest.replace(i, zamjena.size(),zamjena);
	cout<<velikavijest<<endl;
	return 0;
}
