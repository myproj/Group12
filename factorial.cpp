#include "functions.h"

int factorial(int n){
	while(n<0){
	printf("Re-enter n\n");
		//std::cout<<"\nInvalid value of n. Please re-enter: ";
		std::cin>>n;
	}
 //    if(n!=1){
	// return(n * factorial(n-1));
 //    }
 //    else return 1;
	int ans = 1;
	for(int i=1; i<=n; ++i) ans *= i;
	return ans;
}
