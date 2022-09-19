iinclude "main.h"
/**
 * rev-string - entry point
 * @s -inputted string
 * Return:void
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int st = 0;
	int i;

	while (s[st] != '\0')
		st++;

	for (i = 0; i < st; i++)
	{
		st--;
		reverse = s[i];
		s[i] = s[st];
		s[st] = rev;

	}
}
	
