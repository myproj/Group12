#include "functions.h"

int factorial(int n){
	while(n<0)
	{
		printf("Re-enter n\n");
		std::cin>>n;
		return -1;
	}
	int ans = 1;
	for(int i=1; i<=n; ++i) ans *= i;
	return ans;
}
