#include "absl/flags/parse.h"

int main(int argc, char **argv) {
  absl::ParseCommandLine(argc, argv);
  return 0;
} 
