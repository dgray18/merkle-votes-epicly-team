#include <stdio.h>
#include<iostream>
#include<fstream>
#include "pMT.h"
using namespace std;


void readFile(string fileName)
{
std::fstream in("mv_test.txt");

if (!in) {
    cout << "unable to open file";
    return 0;
}

char test[255];
string line;
char delimeter(':');
while(in){
    in.getline(test, 255, delimeter);

    cout << test << endl;
}
in.close();
return 0;
}


int main(int argc, char **argv)
{

	system("pause");
	return 0;
}
