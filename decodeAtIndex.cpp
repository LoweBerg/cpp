#include <iostream>
#include <string>
#include <array>

int main() {
    std::string inputString = "leet2code3";
    int k = 10;

    /* 
    this is the naïve solution, but it will fail for larger strings due to memory limits. To reduce required space,
    we need to avoid decoding the string in the first place. This leads to a reverse traversal solution.
    std::string output;
    int current;
    
    for(int i = 0; output.size() < k; i++) {
        current = inputString[i];
        bool isNum = (current < 58);

        if(isNum) {
            std::string temp = output;
            for(int j = 0; j < current - 49; j++) {
                output += temp;
            }
        } else {
            output += current;
        }
    }
    std::cout << std::string(1, output.at(k - 1));
    */

   /*
   this solution instead uses a reverse transversal to save as much memory as possible.
   This is done by first calculating only the length of the decoded string, and then decoding it backwards.
   */
   int length = 0;
   int i = 0;
   int current;

   while(length < k) {
        current = inputString[i];
        if(isdigit(current))
            length *= current - '0';
        else {
            length++;
        }
        i++;
   }

   for(int j = i - 1; j > -1; j--) {
        current = inputString[j];
        if(isdigit(current)) {
            length /= current - '0';
            k %= length;
        } else {
            if(k == 0 || k == length)
                std::cout << (char)current;
                break;
            length--;
        }
   }


}