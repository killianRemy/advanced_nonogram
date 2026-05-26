#include "service_nonogram_solve.h"
#include "service_correctly_filed.h"
#include "service_nonogram_valid.h"

int nonogramSolve(Nonogram *nono) {
  if (!nono || !isNonogramValid(nono) || !isNonogramCorrectlyFilled(nono))
    return 0;
  return 1;
}
