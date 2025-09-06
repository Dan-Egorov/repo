#include <iostream>

int fib(int n){
	if (n == 0){
		return 0;
	}
       	if (n == 1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	int numb = 0;
	std::cin >> numb;
	std::cout << fib(numb) << std::endl;
	return 0;
}
