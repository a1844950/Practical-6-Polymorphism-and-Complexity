#ifndef Individual_H
#define Individual_H
#include <iostream>
#include <string>
using namespace std;

class Individual {
private:

	string binaryString;
	int length;
	string copyOfList;

public:
	Individual(string bin_str);
	Individual(int ,string ="");

	string getString();
	int getBit(int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength();
	void rearrangeBit(int pos);

};
#endif

