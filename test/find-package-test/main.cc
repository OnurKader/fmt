#include "fmt/format.hpp"

int main(int argc, char** argv) {
  for(int i = 0; i < argc; ++i)
    fmt::print("{}: {}\n", i, argv[i]);
}
