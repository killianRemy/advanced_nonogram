//
// Created by JAD on 18/05/2026.
//

#include "nonogrammeservice.h"

#include <stdio.h>

unsigned char isNonogramBlackRowEqualsBlackColumn(const Nonogram *nonogram) {
    return 0;
}

unsigned char isNonogramEachConstraintsLessOrEqualsThanDimension(const Nonogram *nonogram) {
    unsigned char blackCount;

    if (nonogram==NULL) return 0;

    const unsigned char width = nonogramGetWidth(nonogram);
    const unsigned char height = nonogramGetHeight(nonogram);

    unsigned char *constraintArray;
    for (unsigned char iRow = 0; iRow < height; iRow++) {
        constraintArray = nonogramRowsConstraintsToArray(nonogram, iRow);
        blackCount = 0;
        for (unsigned char iCell = 0; iCell < nonogramRowsConstraintsGetSize(nonogram, iRow); iCell++) {
            blackCount+=constraintArray[iCell];
        }
        if (iRow != 0) {
            blackCount += nonogramRowsConstraintsGetSize(nonogram,iRow) - 1;
        }
        if (blackCount>width)return 0;
    }
    for (unsigned char iColumn = 0; iColumn < width; iColumn++) {
        constraintArray = nonogramColumnsConstraintsToArray(nonogram, iColumn);
        blackCount = 0;
        for (unsigned char iCell = 0; iCell < nonogramColumnsConstraintsGetSize(nonogram, iColumn); iCell++) {
            blackCount+=constraintArray[iCell];
        }
        if (iColumn != 0) {
            blackCount += nonogramColumnsConstraintsGetSize(nonogram,iColumn) - 1;
        }
        if (blackCount>height)return 0;
    }

    return 1;
}

unsigned char isNonogramConstraintsCountEqualsDimension(const Nonogram *nonogram) {
    return 0;
}
