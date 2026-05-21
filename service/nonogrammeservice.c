//
// Created by JAD on 18/05/2026.
//

#include "nonogrammeservice.h"

#include <stdlib.h>

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

unsigned char
isNonogramEachConstraintsLessOrEqualsThanDimension(const Nonogram *nonogram) {
  return 0;
}

unsigned char
isNonogramConstraintsCountEqualsDimension(const Nonogram *nonogram) {
  return 0;
}
