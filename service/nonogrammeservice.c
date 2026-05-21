//
// Created by JAD on 18/05/2026.
//

#include "nonogrammeservice.h"

unsigned char isNonogramBlackRowEqualsBlackColumn(const Nonogram *nonogram) {
  if (!nonogram)
    return 0;
  // preset
  int blackLines = 0;
  int blackRows = 0;

  // parsing rows
  for (int i = 0; i < nonogramGetHeight(nonogram); i++) {
    unsigned char *tiles = nonogramRowsConstraintsToArray(nonogram, i);
    for (int i = 0; i < nonogramRowsConstraintsGetSize(nonogram, i); i++)
      blackRows += tiles[i];
    free(tiles);
  }

  // parsing columns
  for (int i = 0; i < nonogramGetWidth(nonogram); i++) {
    unsigned char *tiles = nonogramColumnsConstraintsToArray(nonogram, i);
    for (int i = 0; i < nonogramColumnsConstraintsGetSize(nonogram, i); i++)
      blackLines += tiles[i];
    free(tiles);
  }

  // check
  return blackRows == blackLines;
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
