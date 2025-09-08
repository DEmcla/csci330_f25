#include <iostream>

int main() { return 0; }
// /usr/bin/ld:
// /usr/lib/gcc/x86_64-linux-gnu/11/../../../x86_64-linux-gnu/Scrt1.o: in
// function `_start':
// (.text+0x1b): undefined reference to `main'
// collect2: error: ld returned 1 exit status
// This was my output after running that command