#include <iostream>
#include <string>
#include "Mutator.h"
#include "Individual.h"
#include "Rearrange.h"
using namespace std;
Individual* Rearrange::mutate(Individual* list, int k) {

	lengthOfList = list->getLength();
	reminder = k % lengthOfList;
	if (reminder == 0)
		reminder = lengthOfList - 1;
	else reminder = reminder - 1;

	list->rearrangeBit(reminder+1);
	return list;
}