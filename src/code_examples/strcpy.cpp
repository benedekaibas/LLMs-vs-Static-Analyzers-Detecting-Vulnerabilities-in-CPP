#include <iostream>
#include <cstring>

void foo() {
  char source[] = "Static Analyis"; // 14 chars
  char destination[14]; // not enough space -> buffer overflow
  
  strcpy(source, destination);
  std::cout << destination;
}

int main() {
  foo();
}
