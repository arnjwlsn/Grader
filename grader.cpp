#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

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
   double original_scale = 0, target_scale = 0;
   std::vector<double> vec;
   std::string input = "";

   std::cout << "Original grade point scale: ";
   std::cin >> original_scale;
   std::cout << "Target grade point scale: ";
   std::cin >> target_scale;
   std::cin.ignore();

   if(original_scale != 0 && target_scale != 0) {
      while(std::cin) {
         std::cout << "----------------------" << std::endl;
         std::cout << "Student score: ";
         std::getline(std::cin, input);
         parseInput(input, vec);

         if(vec.size() >= 2) {
            if(vec[1] != 0) {
               std::cout << "Offset: " << vec[1] << "%" << std::endl;
            }

            std::cout << "Grade: " << my_round(((vec[0]/original_scale)+(vec[1]/100))*target_scale, PRECISION) << std::endl;
         }

         // Reinitialize variables
         vec.clear();
         input = "";
      }
   }
   
   return 0;
}
