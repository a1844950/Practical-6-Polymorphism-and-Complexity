#include <iostream>
#include <string>
#include "Individual.h"
using namespace std;

Individual::Individual(string b_str) {
	length = b_str.size();
	copyOfList = b_str;
	for (int i = 0; i < length; i++) 
		copyOfList[i] = '0';

	binaryString = b_str;
}

Individual::Individual(int lenght, string b_str)
{
	if (b_str == "")
	{
		string str(lenght, '0');
		this->binaryString = str;
	}
	else
		this->binaryString = b_str;
	this->length = lenght;
}

Individual::~Individual()
{

}

string Individual::getString() {
	return binaryString;
}
int Individual::getBit(int pos) {

	if (pos > length) 	return -1;
	if (binaryString[pos] == '1') return 1;

	return 0;
}
void Individual::flipBit(int pos) {
	if (binaryString[pos] == '1') binaryString[pos] = '0';
	else binaryString[pos] = '1';
}
int Individual::getMaxOnes() {

	int Maxones = 0;
	int sumOnes = 0;
	for (int i = 0; i < length; i++) {
		if (binaryString[i] == '1') {
			sumOnes += 1;
		}
		if (sumOnes > Maxones) {
			Maxones = sumOnes;
		}
		else if (binaryString[i] == '0') {
			sumOnes = 0;
		}
	}


	return Maxones;
}
int Individual::getLength() {
	return length;
}
void Individual::rearrangeBit(int pos) {

	string str = binaryString;
	string strinfo_2 = str.substr(0, pos -1);
	string strinfo_1 = str.substr(pos - 1, str.size());

	binaryString = strinfo_1+strinfo_2;
}