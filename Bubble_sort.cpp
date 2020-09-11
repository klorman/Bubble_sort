#include <iostream>

void get_array(int size_of_array, double* array) {
	std::cout << "Enter the elements of the array\n";
	for (int i = 0; i < size_of_array; i++)
		std::cin >> array[i];
}

void bubble_sort(int size_of_array, double* array) {
	int temp;

	for (int i = 0; i < size_of_array - 1; i++) {
		for (int j = 0; j < size_of_array - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

void print_sorted_array(int size_of_array, double* array) {
	for (int i = 0; i < size_of_array; i++)
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

int main() {
	double* array;
	int size_of_array = 0;
 
	std::cout << "Enter the size of the array: ";
	std::cin >> size_of_array;

	if (size_of_array <= 0) {
		std::cout << "Invalid size" << std::endl;
		exit(1);
	}

	array = (double*)calloc(size_of_array, sizeof(double));

	get_array(size_of_array, array);

	bubble_sort(size_of_array, array);

	print_sorted_array(size_of_array, array);

	free(array);
	return 0;
}