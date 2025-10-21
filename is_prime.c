int is_prime(int n)
{
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;

	int limit = 0;
	while (limit * limit < n) limit++;
	if (limit * limit > n) limit--;

	size_t i = 5;
	while (i <= limit)
	{
		if (n % i == 0 || n % (i + 2) == 0) return 0;
		i += 6;
	}
	return 1;
}
