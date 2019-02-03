#include <iostream>

void swap_ptr(int *x, int *y){
  int temp {*y};
  *y = *x;
  *x = temp;
}

void swap_ref(int &x, int &y){
  int temp {y};
  y = x;
  x = temp;
}

int main(){

std::cout << "Here's two variables and their values, no kidding.\n";
int x {5};
int y {1000};

std::cout << "X is " << x << std::endl;
std::cout << "Y is " << y << std::endl;

swap_ptr(&x, &y);

std::cout << "You'll never guess what. The values of X and Y have been swapped via pointer!\n";
std::cout << "X is " << x << std::endl;
std::cout << "Y is " << y << std::endl;

swap_ref(x, y);

std::cout << "You'll never guess what else. The values of X and Y have been swapped again, via reference!\n";
std::cout << "X is " << x << std::endl;
std::cout << "Y is " << y << std::endl;

int sillyviewervar;
std::cin >> sillyviewervar;

return 0;
}
