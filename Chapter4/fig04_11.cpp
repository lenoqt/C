// fig04_11.cpp
// Using the miniz-cpp header only library to write and read ZIP file.
#include <iostream>
#include <string>
#include "zip_file.hpp"
using namespace std;

int main() {
   cout << "Enter a ZIP file name: ";
   string zipFileName;
   getline(cin, zipFileName); // inputs a line of text

   // string literals separate only by whitespace are combined
   // into a single string by the compiler
   string content{
      "This chapter introduces all but one of the remaining control "
      "statements--the for, do...while, switch, break and continue "
      "statemens. We explore the essentials of counter-controlled "
      "iteration. We use compound-interest calculations to begin "
      "investigating the issues of processing monetary amounts. First, "
      "we discuss the representational errors associated with "
      "floating-point types. We use a switch statement to count the "
      "number of A, B, C, D and F grade equivalents in a set of "
      "numeric grades. We show C++17's enhancements that allow you to "
      "initialize one or more variables of the same type in the "
      "headers of if and switch statements."};

   //out << "\ncontent.length(): " << content.length();
   miniz_cpp::zip_file output; // create zip_file object
   // write content into a text file in output
   output.writestr("intro.txt", content); // create file in ZIP
   output.save(zipFileName); // save output to zipFileName

   miniz_cpp::zip_file input{zipFileName}; // load zipFileName

   // display input's file name and directory listing
   cout << "\n\nZIP file's name: " << input.get_filename()
      << "\n\nZIP file's directory listing:\n";
   input.printdir();

   // display info about the compressed intro.txt file
   miniz_cpp::zip_info info{input.getinfo("intro.txt")};
   cout << "\nFile name: " << info.filename
      << "\nOriginal size: " << info.file_size
      << "\nCompressed size: " << info.compress_size;
   // original file contents
   string extractedContent{input.read(info)};
   cout << "\n\nOriginal contents of intro.txt:\n" << 
      extractedContent << endl;
}
