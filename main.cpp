#include <iostream>
#include <string>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k) {
	Individual* result = mPtr->mutate(indPtr, k);
	return result;
}

int main()
{

	string binarystr1, binarystr2;
	int k1, k2;
	cin >> binarystr1;
	cin >> k1;
	cin >> binarystr2;
	cin >> k2;

	Mutator* mutator_1 = new BitFlip();
	Mutator* mutator_2 = new Rearrange();
	Individual* individual_1 = new Individual(binarystr1);
	Individual* individual_2 = new Individual(binarystr2);

	Individual* individual_mutation_1 = execute(individual_1, mutator_1, k1);
	Individual* individual_mutation_2 = execute(individual_2, mutator_2, k2);

	int max = individual_mutation_2->getMaxOnes();
	cout << individual_mutation_1->getString() << " " << individual_mutation_2->getString() << " " << max << endl;
	
	return 0;
}
