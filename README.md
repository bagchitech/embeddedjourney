# embeddedjourney
Recording the milestones of learning in embedded systems


Steps to Execute the files
- rm -r build
- cmake -S . -B build -G "MinGW Makefiles"
- cmake --build build
- cd build
- ctest -V