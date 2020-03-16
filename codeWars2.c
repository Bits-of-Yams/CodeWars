#include <stdio.h>

extern int binary_array_to_number(int anIntArray[], int arraySize);

int main(void)
{
	int intArray[] = {0, 1, 0, 1};
	int result = binary_array_to_number(intArray, 4);

	printf("\nintArray[] = {0, 1, 0, 1}\n");
	printf("Calling binary_array_to_number(intArray)\n");
	printf("Results = %d ; Expected = 5\n\n", result);

	return 0;
}
