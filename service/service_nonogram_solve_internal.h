#ifndef __SOLVE_INT_H
#define __SOLVE_INT_H

#include "../entity/nonogram.h"

typedef enum { VERIFIED_BLACK, VERIFIED_WHITE, UNKNOWN = 0 } VerifiedPixel;

typedef VerifiedPixel **GridSolver;

GridSolver createGridSolver(const unsigned char width,
                            const unsigned char height);

void deleteGridSolver(GridSolver solver, const unsigned char width,
                      const unsigned char height);

void fillAllVerifiables(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                        const unsigned char height);

void fillAllVerifiableRows(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                           const unsigned char height);

void fillAllVerifiableColumns(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                              const unsigned char height);
//TODO here too

void fillAllVerifiableRow(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                          const unsigned char rowIndex);

void fillAllVerifiableColumn(Nonogram *nonogram,GridSolver solver, const unsigned char columnIndex,
                          const unsigned char height);
//TODO here

#endif // __SOLVE_INT_H
