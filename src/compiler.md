# Compiler

There are generally two types of programming languages if we categorize them by how they are executed by the computer:

* Compiled Languages: Computers will first translate the whole source code to machine code, then the computers will directly execute the machine code.
* Interpreted Languages. Computers will read and execute the code line by line.

These two concepts are somehow vague for two reasons:

* Theoretically, every language can be implemented in two ways. The types of running does not depend on the language itself, but on how the compiler executes them.
* Some languages are executed in a fusion manner. For example, the programs written in Java will be first compiled into a intermediate form ([bytecode](https://en.wikipedia.org/wiki/Bytecode)), and then executed line by line.

Nevertheless, it is good to know that there are different ways in executing the program. In the following parts, we will use ``clang++`` as our default compiler. You can download and install the compiler from [Clang++](https://clang.llvm.org/).

## Examples on Compiling Source Code

Assume we wrote a simple program that only prints the `Hello World` to the console, as below:

#### **`simple.cpp`**
``` c++
#include<iostream>
using namespace std;

int main() {
    cout<<"Hello World"<<endl;
}
```

We can then compile the source into a 