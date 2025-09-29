#include <iostream>
 
 void n_1() {
double number;

  std::cout << "Enter number: ";

  std::cin >> number;

  if (number > 0) {

    std::cout << "positive" << std::endl;
  } else if (number < 0) {
    std::cout << "negative" << std::endl;
  }
}
   void n_2(){
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << "You entered an even number." << std::endl;
    } else {
        std::cout << "You entered an odd number." << std::endl;
    }   
   }
   void n_3(){
     int num1, num2;
 
    std::cout << "Enter number one: ";
    std::cin >> num1;

    std::cout << "Enter number two: ";
    std::cin >> num2;
 
    if (num1 == num2) {
        std::cout << "the numbers are equal" << std::endl;
    } else {
        std::cout << "The numbers are not equal" << std::endl;
    }   
   }
   void n_4(){
    int number; 
    std::cout << "Enter number: ";
    std::cin >> number;
  
    if (number % 5 == 0) {
        std::cout << "number " << number << " divided into five" << std::endl;
    } else {
        std::cout << "number " << number << " not divisible by five" << std::endl;
    }   
   }
   void n_5(){
    int age;
 
    std::cout << "Enter your age: ";
    std::cin >> age;
 
    if (age >= 18) {
        std::cout << "Are you an adult" << std::endl;
    } else {
        std::cout << "Are you a minor" << std::endl;
    }
   }
   void n_6(){
     int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "number " << number << " is negative" << std::endl;
    } else {
        std::cout << "number " << number << " It is not negative" << std::endl;
    }
   }
   void n_7(){
    char sim = 'A';

    std::cout << "Enter simvol: ";
    std::cin >> sim;

    if (sim == 'A'){
        std::cout << "Correct!" << std::endl;
    }
        else if (sim != 'A'){
            std::cout << "Incorrect" << std::endl;
        }
    }
   void n_8() {
    int num1, num2;

  std::cout << "Enter number one: ";
  std::cin >> num1;

  std::cout << "Enter number two: ";
  std::cin >> num2;

  if (num1 > 0 && num2 > 0) {
    std::cout << "Both numbers are positive" << std::endl;
  } else {
    std::cout << "Both numbers are positive" << std::endl;
  }
   }
   void n_9(){
    int num1, num2;

    std::cout << "Enter number one: ";
    std::cin >> num1;

    std::cout << "Enter number two: ";
    std::cin >> num2;

    if (num1 == 0 || num2 == 0) {
        std::cout << "At least one of the numbers equals zero" << std::endl;
    } else {
        std::cout << "None of the numbers is zero" << std::endl;
    }
   }
   void n_10(){
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (!(number == 10)) {
        std::cout << "The number is not equal to 10";
    }
   }
int main() {
    n_1();
    n_2();
    n_3();
    n_4();
    n_5();
    n_6();
    n_7();
    n_8();
    n_9();
    n_10();
    return 0;
}
