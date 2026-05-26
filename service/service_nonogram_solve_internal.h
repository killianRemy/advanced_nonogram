#ifndef __SOLVE_INT_H
#define __SOLVE_INT_H

#include "../entity/nonogram.h"

typedef enum { VERIFIED_BLACK, VERIFIED_WHITE, UNKNOWN = 0 } VerifiedPixel;

typedef VerifiedPixel **GridSolver;

GridSolver createGridSolver(const unsigned char width,
                            const unsigned char height);

void deleteGridSolver(GridSolver solver, const unsigned char height);

void fillAllVerifiables(GridSolver solver, const unsigned char width,
                        const unsigned char height);

void fillAllVerifiableRows(GridSolver solver, const unsigned char width,
                           const unsigned char height);

void fillAllVerifiableColumns(GridSolver solver, const unsigned char width,
                              const unsigned char height);

void fillAllVerifiableRow(GridSolver solver, const unsigned char width,
                          const unsigned char rowIndex);

void fillAllVerifiableCol(GridSolver solver, const unsigned char colIndex,
                          const unsigned char height);

#endif // __SOLVE_INT_H
