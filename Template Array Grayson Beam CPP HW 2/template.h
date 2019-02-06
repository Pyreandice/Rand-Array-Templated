#ifndef TEMPLATE_H_
#define TEMPLATE_H_
#include <array>
#include <stdexcept>
#include <list>

namespace the_boot
{
	template< typename T, int B, int R > class array_list
	{
	private:
		//array <double, 1518, 1538> list;
		T *array_templated;
		int index_lower;
		int index_upper;
		int index_range;
	public:
		/**
		 * Creates the element rules that make up the boiler plate of the class.
		 * Will throw an exception if the index_upper and/or index_lower values are invalid.
		 * @param index_lower the lowest value the array will hold.
		 * @param index_upper the highest value the array will hold.
		 * @param index_range the count between the highest and lowest values.
		 * @param array_templated the array which contains the list of objects.
		 * @return the list of array elements
		 */
		array_list()
		{
			if (B > 0 && B < R && R > 0)
			{
				index_lower = B;
				index_upper = R;
				index_range = index_upper - index_lower;
				array_templated = new T[index_range];
			}
			else
			{
				throw 11;
			}
		}

		/***
		 * Gets and returns the index_lower integer.
		 * @return index_lower.
		 */
		int index_lower_getter() const
		{
			return index_lower;
		}

		/***
		 * Gets and returns the index_upper integer.
		 * @return index_upper.
		 */
		int index_upper_getter() const
		{
			return index_upper;
		}

		/***
		 * Overload the subscript operator for this instance
		 * of the array_list class.
		 */
		T& operator[] (int dex)
		{
			if (dex >= index_lower && dex < index_upper)
			{
				return array_templated[dex - index_lower];
			}
			else
			{
				throw 10;
			}
		}

		/***
		 * Deletes array pointer.
		 */
		~array_list()
		{
			delete[] array_templated;
		}
	};
}

#endif // TEMPLATE_H_