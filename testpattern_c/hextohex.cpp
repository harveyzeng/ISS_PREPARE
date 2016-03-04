#include <fstream>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

	fstream infile;
	fstream outfile;
	
		infile.open("nop.hex", ios::in);
		outfile.open("temp.hex", ios::out | ios::trunc);
		char reg[8];
		char tmp;
	
		while(infile >> tmp){
			reg[6] = tmp;
			infile >> tmp;
			reg[7] = tmp;
			infile >> tmp;
			reg[4] = tmp;
			infile >> tmp;
			reg[5] = tmp;
			infile >> tmp;
			reg[2] = tmp;
			infile >> tmp;
			reg[3] = tmp;
			infile >> tmp;
			reg[0] = tmp;
			infile >> tmp;
			reg[1] = tmp;
			outfile.write(reg, 8);
			outfile << endl;
		}
		infile.close();
		outfile.close();
	
	return 0;
}
