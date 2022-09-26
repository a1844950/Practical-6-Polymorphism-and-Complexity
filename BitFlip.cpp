#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>
#include "BitFlip.h"
using namespace std;

Individual* BitFlip::mutate(Individual* list, int k) {
	lengthOfList = list->getLength();
	reminder = k % lengthOfList;
	if (reminder == 0) reminder = lengthOfList - 1;
	else 	reminder = reminder - 1;
	list->flipBit(reminder);
	return list;
}