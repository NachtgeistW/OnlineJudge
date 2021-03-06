/*
执行用时：
28 ms
内存消耗：
6 MB
*/
bool isPalindrome(int x) 
{
        if (x < 0)
		return false;

	int num = x, num_bit = 0, vec[1001];

	for (int& i : vec)
		i = -1;

	do
	{
		vec[num_bit] = num % 10;
		num /= 10;
		num_bit++;
	} while (num != 0);

	if (num_bit == 1)
		return true;

	if (num_bit % 2 == 0)
	{
		for (int i = num_bit / 2 - 1, j = num_bit / 2; i >= 0; i--, j++)
			if (vec[i] != vec[j])
				return false;
	}
	else
	{
		for (int i = num_bit / 2 - 1, j = num_bit / 2 + 1; i >= 0; i--, j++)
			if (vec[i] != vec[j])
				return false;
	}
	return true;
    }
};