#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

const double FINAL_MAX_POINTS = 2.5;
const int PRECISION = 3;

double my_round(double value, int decimal_places) {
   double precision = pow(10.0, (double)decimal_places);
   return round(value*precision)/precision;
}

void parseInput(std::string input, std::vector<double> &vec) {
   std::stringstream ss(input);
   double score = 0, offset = 0;

   ss >> score >> offset;
   vec.push_back(score);
   vec.push_back(offset);
}

int main() {
   double total = 0;
   std::vector<double> vec;
   std::string input = "";

   std::cout << "Total points possible: ";
   std::cin >> total;
   std::cin.ignore();

   if(total != 0) {
      while(std::cin) {
         std::cout << "Student score: ";
         std::getline(std::cin, input);
         parseInput(input, vec);

         if(vec.size() >= 2) {
            if(vec[1] != 0) {
               std::cout << "Offset: " << vec[1] << "%" << std::endl;
            }

            std::cout << "Grade: " << my_round(((vec[0]/total)+(vec[1]/100))*FINAL_MAX_POINTS, PRECISION) << std::endl;
         }

         // Reinitialize variables
         vec.clear();
         input = "";
      }
   }
   
   return 0;
}
