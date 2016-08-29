#include "functions.h"

int factorial(int n){
	while(n<0){
		std::cout<<"\nInvalid value of n. Please re-enter: ";
		std::cin>>n;
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
