/*here we take 'n' number of input and print sum of dig in each case*/
#include <stdio.h>
int main(void)
{
	int i, j = 1; // j to print msg becoz i starts with number input by user , say 5;

	printf("ENtER No. of test cases: \n");
	scanf("%d", &i);
	while (i--)
	{
		printf("Enter your number %d: \n", j);
		int n, s = 0;
		scanf("%d", &n);
		int t = n;
		while (n > 0)
		{
			s += (n % 10);
			n /= 10;
		}
		printf("SUM of Digits of %d is :- %d \n\n", t, s);
		// t to print the msg bcoz n has become 0
		j++;
	}
	return 0;
}
