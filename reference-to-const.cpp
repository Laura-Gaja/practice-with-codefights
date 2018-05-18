//Derek won a few prizes for the competitions he took part in.
//Each prize has determined height. He wants to order the prizes accordingly to their heights
//in such a way to make each of them ascending by one unit of height. He wants to count how many prizes
//he still needs to win in order to fill all the gaps.
#include <iostream>
#include <vector>
#include <algorithm>

const int prizes(std::vector<int> &a)
{
	std::sort(a.begin(), a.end()); int index = 0;
	int counter = 0;
	for (int i = a[0]; i < a[a.size() - 1]; ++i)
	{
		if (a[index] != i)
		{
			++counter;
		}
		else
		{
			++index;
		}
	}
	return counter;
}

int main()
{
	std::vector<int> a = { 20, 5, 3 };

	//We CAN:
	//Assign constant (return) value to the non-const variable:
	int c = prizes(a);

	//Initialize reference to const with the const (return) value:
	const int &const_ref_var = prizes(a);

	//Initialize reference to const with the expression consisting of const (return) value and an int literal
	const int &ce = prizes(a) + 1;
	std::cout << prizes(a) << " ---> " << ce << std::endl;

	//Initialize reference to const with the int literal
	const int &cf = 1;
	std::cout << cf << std::endl;

	/*
	//We CANNOT:
	//Initialize reference to non-const with the const (return) value:
	int &non_const_ref_to_const = prizes(a);

	//Initialize reference to non-const with a non-lvalue:
	int &cd = 1;

	*/
	return 0;
}
