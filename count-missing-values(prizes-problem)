//Derek won a few prizes for the competitions he took part in.
//Each prize has determined height. He wants to order the prizes accordingly to their heights
//in such a way to make each of them ascending by one unit of height. He wants to count how many prizes
//he still needs to win in order to fill all the gaps.
#include <iostream>
#include <vector>
#include <algorithm>

int prizes(std::vector<int> &a)
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
	std::vector<int> b = { 2, 4, 6 };
	std::cout << "1) No. of prizes Derek still needs to win: " << prizes(a) << std::endl << "Expected output: 15;" << std::endl <<std::endl 
		<< "2) No. of prizes Derek still needs to win: " << prizes(b) << std::endl << "Expected output: 2;" << std::endl;
	return 0;
}
