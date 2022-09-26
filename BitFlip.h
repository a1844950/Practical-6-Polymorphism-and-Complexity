#ifndef BitFlip_H
#define BitFlip_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlip : public Mutator {
private:
	int lengthOfList;
	int reminder;

public:
	Individual* mutate(Individual* list, int k);
};
#endif


