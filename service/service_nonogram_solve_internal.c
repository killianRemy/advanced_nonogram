#include "service_nonogram_solve_internal.h"

GridSolver createGridSolver(const unsigned char width,
                            const unsigned char height) {
  return 0;
}

void deleteGridSolver(GridSolver solver, const unsigned char width,
                      const unsigned char height) {
  return;
}

void fillAllVerifiables(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                        const unsigned char height) {
  return;
}

void fillAllVerifiableRows(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                           const unsigned char height) {
  return;
}

void fillAllVerifiableColumns(Nonogram *nonogram,GridSolver solver, const unsigned char width,
                              const unsigned char height) {
  return; //TODO here too
}

void fillAllVerifiableRow(Nonogram *nonogram, GridSolver solver, const unsigned char width,
                          const unsigned char rowIndex) {
  return;
}

void fillAllVerifiableColumn(Nonogram *nonogram,GridSolver solver, const unsigned char columnIndex,
                          const unsigned char height) {
  for (unsigned char i=0;i<height;i++) {

  }
}
