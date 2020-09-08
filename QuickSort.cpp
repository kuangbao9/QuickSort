#include<stdio.h>


void QuickSort(int *aa, int left, int right)
{
	int i,j,tmp,t;
	if(left > right)
		return;
	i=left;
	j=right;
	tmp = aa[left];
	while(i != j)
	{
		while(i<j && tmp <= aa[j])
			j--;
		while(i<j && tmp >= aa[i])
			i++;
		if(i < j)
		{
			t = aa[i];
			aa[i] = aa[j];
			aa[j] = t;
		}
	}
	aa[left] = aa[i];
	aa[i] = tmp;
	QuickSort(aa, left, i-1);
	QuickSort(aa, i+1, right);
}
int main()
{
	int i;
	int a[7] = {5, 2, 10, 8, 6, 4, 7};
	QuickSort(a,0,6);
	for(i=0; i<7; i++)
		printf("%d ", a[i]);
	printf("%n");
	return 0;
}
