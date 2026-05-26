#include "service_nonogram_solve_internal.h"

GridSolver createGridSolver(const unsigned char width,
                            const unsigned char height) {
    return 0;
}

void deleteGridSolver(GridSolver solver, const unsigned char width,
                      const unsigned char height) {
    return;
}

void fillAllVerifiables(GridSolver solver, const unsigned char width,
                        const unsigned char height) {
    return;
}

void fillAllVerifiableRows(GridSolver solver, const unsigned char width,
                           const unsigned char height) {
    return;
}

void fillAllVerifiableColumns(GridSolver solver, const unsigned char width,
                              const unsigned char height) {
    return;
}

void fillAllVerifiableRow(GridSolver solver, const unsigned char width,
                          const unsigned char rowIndex) {
    return;
}

void fillAllVerifiableCol(GridSolver solver, const unsigned char colIndex,
                          const unsigned char height) {
    return;
}
//renvoi 1 si bon et 0 si pas bon
unsigned char sumOFALlConstrainsPlusEmptyEqualsSize(unsigned char *constraints, unsigned char constraintsSize,
                                                    unsigned char size) {
    unsigned char sum = 0;

    for (unsigned char i = 0; i < constraintsSize; i++) {
        sum += constraints[i];
    }
    sum += constraintsSize - 1;

    return sum==size;
}
