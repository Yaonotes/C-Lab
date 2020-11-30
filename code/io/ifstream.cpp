#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

void read(const char *filename) {
  ifstream ifs(filename, std::ifstream::in);
  char c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }

  ifs.close();
}

int main() {
  read("input.c");
  return 0;
}