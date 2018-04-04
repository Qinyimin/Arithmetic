//全排列问题
#include"stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void perm(int list[], int low, int high) {
	if (low==high) {   
		for (int i = 0; i <= low; i++)
			cout << list[i];
		cout << endl;
	}
	else {	
		//（递归实现：每个元素与第一个元素交换；交换后,得到子序列,用函数perm得到子序列的全排列；最后,将元素交换回来,复原,然后交换另一个元素）
		for (int j = low; j <= high; j++) {
			swap(list[low], list[j]);
			perm(list, low + 1, high);
			swap(list[low], list[j]);
		}
	}
}
int main()
{
	int list[] = { 1,2,3 };
	perm(list, 0, 2);
	system("PAUSE");
	return 0;
}
