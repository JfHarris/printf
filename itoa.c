/**
 * _itoa - converts int  into string
 * @value: the int to convert
 * @newString: String to store converted int
 * Return: string conversion of the int
 */
char *_itoa(int value, char *newString)
{
	int i = 0;
	int n = value;
	int r;

	newString[11] =  '\0';
	if (n < 0)
	{
		n = -n;
	}
	while (n)
	{
		r = n % 10;
		newString[11 - i - 1] = r + 48;
		n = n / 10;
		i++;
	}
	if (value < 0)
	{
		i++;
		newString[11 - i] = '-';
	}
	return (newString + 11 - i);
}
