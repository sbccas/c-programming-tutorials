// C program to print elements of Three-Dimensional Array
// with the help of nested for loop
#include <stdio.h>

int main()
{
	// initializing the 3-D array
	int arr[2][3][2]
		= { { { 0, 6 }, { 1, 7 }, { 2, 8 } },
			{ { 3, 9 }, { 4, 10 }, { 5, 11 } } };

	// Printing values of 3-D array
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 2; ++k) {
				printf("Element at arr[%i][%i][%i] = %d\n",
					i, j, k, arr[i][j][k]);
			}
		}
	}
	return 0;
}
