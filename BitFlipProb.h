#ifndef BitFlipProb_H
#define BitFlipProb_H
#include "Mutator.h"
#include "Individual.h"
#include <iostream>
#include <string>

class BitFlipProb : public Mutator {
private:
	double p;

public:
	Individual* mutate(Individual* list, int k);
};
#endif