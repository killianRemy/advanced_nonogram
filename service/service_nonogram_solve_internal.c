#include "service_nonogram_solve_internal.h"

#include <stdlib.h>

GridSolver createGridSolver(const unsigned char width,
                            const unsigned char height) {
  GridSolver val = malloc(sizeof(VerifiedPixel *));
  for (int i = 0; i < height; i++) {
    val[i] = malloc(width * sizeof(VerifiedPixel *));
    for (int j = 0; j < width; j++)
      val[i][j] = UNKNOWN;
  }
  return val;
}

void deleteGridSolver(GridSolver solver, const unsigned char height) {
  if (!solver)
    return;
  for (int i = 0; i < height; i++)
    free(solver[i]);
  free(solver);
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
