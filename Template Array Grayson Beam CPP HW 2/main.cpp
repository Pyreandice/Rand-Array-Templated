// Author: Grayson Beam

#include <array>
#include <algorithm>
#include <iostream>
#include <random>
#include <stdexcept>

#include "template.h"

const int lower_index = 7;
const int upper_index = 27;
const int size_minus = 1;


int main()
{
	/***
	 * Tries to create the new array where the first element
	 *  is stored at position 7 and an upper element is
	 *  stored at a position of 27.
	 *  @param lower_index the first position in the array.
	 *  @param upper_index the last position in the array.
	 *  @return the array only if the values are real numbers.
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
	 * @param lower_index the first position in the array.
	 * @param upper_index the last position in the array.
	 * @return random values.
	 */
	for (auto x = lower_index; x < upper_index; x++)
	{
		new_array[x] = std::rand();
	}

	/***
	 * Iterates forward through the newly created and populated new_array array
	 * and displays the contents of the array at the position x.
	 *  @param lower_index the first position in the array.
	 *  @param upper_index the last position in the array.
	 *  @param x the current item in the array.
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
	* @param lower_index the first position in the array.
	* @param upper_index the last position in the array.
	* @param x the current item in the array.
	*/
	for (auto x = upper_index - size_minus; x >= lower_index; x--)
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