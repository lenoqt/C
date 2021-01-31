// fig04_06.cpp
// Using a switch statement to count letter grades.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int total{0}; // sum of grades

   int gradeCounter{0}; // number of grades entered
   int aCount{0}; // count of A grades
   int bCount{0}; // count of B grades
   int cCount{0}; // count of C grades
   int dCount{0}; // count of D grades
   int fCount{0}; // count of F grades

   cout << "Enter the integer grades in the range 0-100.\n"
      << "Type the end-of-file indicator to terminate input:\n"
      << "  On UNIX/Linux/macOS type <Ctrl> d then press Enter\n"
      << "  On Windows type <Ctrl> z then press Enter\n";
   
   int grade;

   // loop until user enters the end-of-file indicator
   while (cin >> grade) {
      total += grade; // add grade to total
      ++ gradeCounter; // increment number of grades

      // increment appropiate letter-grade counter
      switch (grade /10) {
         case 9:  // grade was between 90
         case 10: // and 100, inclusive
            ++aCount;
            break; // exits switch
         case 8: // grade was between 80 and 89
            ++bCount;
            break; // exits switch

         case 7: // grade was between 70 and 79
            ++cCount;
            break; // exits switch

         case 6: // grade was between 60 and 69
            ++dCount;
            break; // exits switch

         default: // grade was less than 60
            ++fCount;
            break; // optional; exits siwtch anyway
      } // end switch
   } // end while

   // set floating-point number format
   cout << fixed << setprecision(2);

   // display grade report
   cout << "\nGrade Report:\n";

   // if user entered at least one grade ... 
   if (gradeCounter != 0) {
      // calculate average of all grades entered 
      double average = static_cast<double>(total) / gradeCounter;

      // output summary of results
      cout << "Total of the " << gradeCounter << " grades entered is "
         << total << "\nClass average is: " << average
         << "\nNumber of students who received each grade:"
         << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
         << "\nD: " << dCount << "\nF: " << fCount << endl;
   }
   else { // no grades were entered, so output appropiate message
      cout << "No grades were entered" << endl;
   }
}

