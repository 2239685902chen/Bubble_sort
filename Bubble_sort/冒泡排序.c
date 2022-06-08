#include <stdio.h>
#include <assert.h>
void Bubble(int* q, int w)
{
	assert(q);
	int* d = q;
	int r = 0;
	int u = 0;
	int y = 1;
	for (r = 0; r < w - 1; r++)
	{
		int t = 0;
		q = d;
		int* e = q;
		int* x = q + 1;
		for (t = 0; t < w - 1 - r; t++)
		{
			if (*e > *x)
			{
				u = *e;
				*e = *x;
				*x = u;
				y = 0;
			}
			e++;
			x++;
		}
		if (y)
		{
			break;
		}
	}
}
int main()
{
	int q[] = { 5,3,7,9,1,4,2,6,8 };
	int w = 0;
	int e = sizeof(q) / sizeof(q[0]);
	Bubble(q, e);
	for (w = 0; w < e; w++)
	{
		printf("%d ", q[w]);
	}
	printf("\n");
	return 0;
}