#include "gtest/gtest.h"

#include <cmath>
#include <iostream>
#include <log.h>

#include <mpi.h>

namespace flecsi {
namespace execution {
void mpi_init_task(const char * parameter_file);
}
} // namespace flecsi

using namespace flecsi;
using namespace execution;

TEST(sedov, working) {
  MPI_Init(nullptr, nullptr);
  mpi_init_task("sedov_nx20.par");
  MPI_Finalize();
}
