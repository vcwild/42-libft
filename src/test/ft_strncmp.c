int	ft_strncmp(const char *s1, const char *s2, int n) {
	unsigned int	i;
	int				aux;

	i = 0;
	aux = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		aux = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}

/*
• 0, if the s1 and s2 are equal; -> 0
• a negative value if s1 is less than s2;
• a positive value if s1 is greater than s2.
*/