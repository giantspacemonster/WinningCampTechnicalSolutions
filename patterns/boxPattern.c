/*
 * Given a number Nm write a program to print:
 *  - Given value of n forms the outer most rectangulat box layer
 *  - Value of n reduces by 1 and forms an inner rectangular box layer
 *  - The second step is repeated until n reduces to 1.
 * Example
 * Input: 4
 * Output:
 * 4 4 4 4 4 4 4
 * 4 3 3 3 3 3 4
 * 4 3 2 2 2 3 4
 * 4 3 2 1 2 3 4
 * 4 3 2 2 2 3 4
 * 4 3 3 3 3 3 4
 * 4 4 4 4 4 4 4
 */
#include <stdio.h>
#include <stdlib.h>
void printPattern(int N)
{
	int size = 2 * N - 1; // Calculate the size of the array
	int arr[size][size];

	// Fill the array with the pattern
	for (int layer = 0; layer < N; layer++)
	{
		int value = N - layer; // Value to be filled in the current layer
		for (int i = layer; i < size - layer; i++)
		{
			for (int j = layer; j < size - layer; j++)
			{
				arr[i][j] = value;
			}
		}
	}

	// Print the array
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return 1;
	}

	// Convert the command-line argument to an integer
	int N = atoi(argv[1]);
	// Check if the conversion was successful
	if (N <= 0)
	{
		printf("Please provide a valid positive integer.\n");
		return 1;
	}
	printPattern(N);
	return 0;
}
