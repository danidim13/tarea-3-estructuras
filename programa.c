
int function(int a, int b, int c, int d, int e, int f, int g);
int main(int argc, char *argv[])
{
	function(5, 6, 12, 9, 53, 2, 8);
	return 0;
}

int function(int a, int b, int c, int d, int e, int f, int g)
{
	if (g > 4) {
		return (a + b + c + d) - (e + f);
	} else {
		return (a + b + c + d + e) - f;
	}
}
