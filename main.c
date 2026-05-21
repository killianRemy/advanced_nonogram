#include <stdio.h>
#include "entity/nonogram.h"
#include "repository/nonogramfile.h"
#include "console/console.h"
#include "service/nonogrammeservice.h"

int main(void) {
    Nonogram *nonogram = loadNonogramFromFile("../doc/jad.nono");

    displayNonogramWithConstraints(nonogram);


    printf("\n\n");

    for (unsigned char i = 0; i < nonogramGetHeight(nonogram);i++) {
        printf("%d\n", isNonogramRowCorrectlyFilled(nonogram, i));
    }

    deleteNonogram(nonogram);


    // system("pause");

    return 0;
}
