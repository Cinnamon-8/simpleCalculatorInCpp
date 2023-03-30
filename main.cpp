
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>

void add() {
  int a, b;
  system("clear");
  std::cout << "Enter First Number\n";
  std::cin >> a;
  std::cout << "Enter Second Number\n";
  std::cin >>b;
  int c = a+b;
  std::cout <<a <<" + "<< b <<" = "<<c<<"\n";
  
}
void sub() {
  int a, b;
  system("clear");
  std::cout << "Enter First Number\n";
  std::cin >> a;
  std::cout << "Enter Second Number\n";
  std::cin >>b;
  int c = a-b;
  std::cout <<a <<" - "<< b <<" = "<<c<<"\n";
}
void mul() {
  int a, b;
  system("clear");
  std::cout << "Enter First Number\n";
  std::cin >> a;
  std::cout << "Enter Second Number\n";
  std::cin >>b;
  int c = a*b;
  std::cout <<a <<" * "<< b <<" = "<<c<<"\n";
}
void divi() {
  int a, b;
  system("clear");
  std::cout << "Enter First Number\n";
  std::cin >> a;
  std::cout << "Enter Second Number\n";
  std::cin >>b;
  int c = a/b;
  std::cout <<a <<" / "<< b <<" = "<<c<<"\n";
}
void mod() {
  int a, b;
  system("clear");
  std::cout << "Enter First Number\n";
  std::cin >> a;
  std::cout << "Enter Second Number\n";
  std::cin >>b;
  int c = a%b;
  std::cout <<a <<" % "<< b <<" = "<<c<<"\n";
}
void power() {
  int a, b;
  system("clear");
  std::cout << "Enter The Base :\n";
  std::cin >> a;
  std::cout << "Enter The Power\n";
  std::cin >>b;
  double c = pow(a,b);
  std::cout <<a <<" to the power "<< b <<" = "<<(int)c<<"\n";
}
void square() {
  double a;
  system("clear");
  std::cout << "Enter Number You Want Square Of \n";
  std::cin >> a;
  double c = pow(a,2);
  std::cout <<a <<" square = "<<(int)c<<"\n";
}
void squareroot() {
  
   double a;
  system("clear");
  std::cout << "Enter Number You Want SquareRoot Of \n";
  std::cin >> a;
  double c = sqrt(a);
  std::cout <<a <<" squareRoot is = "<<(int)c<<"\n";
}
void cube() {
   double a;
  system("clear");
  std::cout << "Enter Number You Want Cube Of \n";
  std::cin >> a;
  double c = pow(a,3);
  std::cout <<a <<" cube = "<<(int)c<<"\n";
}
int main() {
  int input;
  int i = 0;
  

  while (1) {
    std::cout<<'\n';
     std::cout << "Enter The Following \n";
    std::cout<<"0.Exit The Program ";
  std::cout << "1.Addition\n";
  std::cout << "2.Subtraction\n";
  std::cout << "3.Multiplication\n";
  std::cout << "4.Division\n";
  std::cout << "5.Modulo \n";
  std::cout << "6.Power\n";
  std::cout << "7.Square\n";
  std::cout << "8.Cube \n";
  std::cout << "9.Square Root \n";

    std::cout << "Enter the operator ==> ";
    std::cin >> input;
    if (input == 0) {
      goto end;
    }

    switch (input) {
    case 1:
      add();
      break;

    case 2:
      sub();
      break;
    case 3:
      mul();
      break;
    case 4:
      divi();
      break;
    case 5:
      mod();
      break;
    case 6:
      power();
      break;
    case 9:
      squareroot();
      break;
    case 7:
      square();
      break;
    case 8:
      cube();
      break;
    default:
      std::cout << "\nInvalid input\n";
      break;
    }
  }
end:
  std::cout << "Program Quitted\n";
  return 0;
}