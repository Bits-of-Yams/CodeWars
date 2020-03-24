#include <stdio.h>

extern int binary_array_to_int(int anIntArray[], int arraySize);

int main(void)
{
	int intArray1[] = {0, 1, 0, 1};
	int intArray2[] = {1, 1, 0, 0};
	int intArray3[] = {0, 0, 0, 0};
	int intArray4[] = {1, 1, 1, 1};
	int result = 0;

	printf("\n\e[1;36mCalling binary_array_to_int(intArray):\e[0m\n\n");

	printf("intArray1[] = {0, 1, 0, 1}\n");
	result = binary_array_to_int(intArray1, 4);
	printf("Results = %d ; Expected = 5\n\n", result);

	printf("intArray2[] = {1, 1, 0, 0}\n");
	result = binary_array_to_int(intArray2, 4);
	printf("Results = %d ; Expected = 12\n\n", result);

	printf("intArray3[] = {0, 0, 0, 0}\n");
	result = binary_array_to_int(intArray3, 4);
	printf("Results = %d ; Expected = 0\n\n", result);

	printf("intArray4[] = {1, 1, 1, 1}\n");
	result = binary_array_to_int(intArray4, 4);
	printf("Results = %d ; Expected = 15\n\n", result);



	return 0;
}
