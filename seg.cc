#include <memory>
#include <future>

#include "absl/flags/parse.h"
#include "absl/time/time.h"
#include "ctx.h"

int main(int argc, char **argv) {
  absl::ParseCommandLine(argc, argv);
  auto ctx = Ctx::with_timeout(absl::Seconds(10));

  return 0;
} 
