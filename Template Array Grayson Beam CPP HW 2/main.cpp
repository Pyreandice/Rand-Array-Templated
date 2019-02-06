#include <array>
#include <algorithm>
#include <iostream>
#include <random>
#include <stdexcept>

#include "template.h"

const int lower_index = 7;
const int upper_index = 27;


int main()
{
	/***
	 * Tries to create the new array with the lower value of 7 and an upper value of 27.
	 */
	the_boot::array_list<int, lower_index, upper_index> new_array;
	try
	{
		the_boot::array_list<int, lower_index, upper_index> new_array;
	}
	catch (int)
	{
		std::cout << "Error. Invalid index: error code DEX" << std::endl;
	}

	/**
	 * Populates the list_array class array with random values.
	 * May need to run more than once in case invalid values are entered.
	 * @return random values.
	 */
	for (auto x = lower_index; x < upper_index; x++)
	{
		new_array[x] = std::rand();
	}

	/***
	 * Iterates forward through the newly created and populated new_array array
	 * and displays the contents of the array at the position x.
	 */
	for (auto x = lower_index; x <= upper_index; x++)
	{
		try
		{
			std::cout << "new_array[" << x << "] = " << new_array[x] << std::endl;
		}
		catch (int)
		{
			std::cout << std::endl;
			std::cout << "Error: invalid index position..." << std::endl;
		}
	}

	/***
 * Iterates forward through the newly created and populated new_array array
 * and displays the contents of the array at the position x.
 */
	for (auto x = upper_index - 1; x >= lower_index; x--)
	{
		try
		{
			std::cout << "new_array[" << x << "] = " << new_array[x] << std::endl;
		}
		catch (int)
		{
			std::cout << std::endl;
			std::cout << "Error: invalid index position..." << std::endl;
		}
	}

	return 0;
}