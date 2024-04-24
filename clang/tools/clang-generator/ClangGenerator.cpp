#include "clang-c/Index.h"

int main(int argc, const char **argv) {
  CXIndex Index = clang_createIndex(0, 0);
  clang_disposeIndex(Index);
  return 0;
}
