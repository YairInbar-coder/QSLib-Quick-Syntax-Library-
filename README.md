# QSLib-Quick-Syntax-Library-
The Quick Syntax Library Makes Basic C++ Stuff Simpler For Example std::cout << "text"; becomes qs::print("text")

HOW TO INSTALL:
step 1: extract the zip file
step 2: open the properties window of your project
step 3: go to C/C++ → general → additional include directories → add the extracted folder
step 4: go to linker → general → additional library directories add the x64/x86 folder inside the lib folder
step 5: go to linker → input → additional dependencies and type qsLib.lib;
step 6: in the code #include <QuickSyntax.h> and test the library

List Of Functions:
output:
print(), println()
input:
getInt(), getStr(), getFloat(), getChar()
random:
randInt(), randFloat(), randBool()
casting:
toInt(), toStr(), toFloat(), toChar()
