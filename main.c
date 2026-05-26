#include <stdio.h>
#include "entity/nonogram.h"
#include "repository/nonogramfile.h"
#include "console/console.h"
#include "service/service_correctly_filed.h"
#include "service/service_nonogram_valid.h"
#include "service/service_nonogram_solve_internal.h"

int main(void) {
	Nonogram *nonogram = loadNonogramFromFile("../doc/6-empty.nono");

	displayNonogramWithConstraints(nonogram);
	// displayNonogram(nonogram);

	Constraint* constraints=nonogramColumnsConstraintsToArray(nonogram, 4);
	unsigned char constraintSize=nonogramColumnsConstraintsGetSize(nonogram,4);
	unsigned char height=nonogramGetHeight(nonogram);

	printf("%d\n",constraintSize);

	printf("%d\n",height);

	for (unsigned char i=0;i<constraintSize;i++) {
		printf("-%d",constraints[i]);
	}


	printf("\n%d", sumOFALlConstrainsPlusEmptyEqualsSize(constraints,constraintSize,height));


	deleteNonogram(nonogram);

	// system("pause");

	return 0;
}
