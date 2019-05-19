#include <algorithm>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
	int SZ, P;
	while (~scanf("%d%d",&SZ,&P) && SZ+P) {
		int circle = (int)(sqrt(P-0.1)+1)/2;
		int center = (SZ+1)/2;
		int left = P - (2*circle-1)*(2*circle-1);
		if (left <= circle*2) {
			printf("Line = %d, column = %d.\n",center+circle,center+circle-left);
		}else if (left <= 4*circle) {
			left = left - 2*circle;
			printf("Line = %d, column = %d.\n",center+circle-left,center-circle);
		}else if (left <= 6*circle) {
			left = left - 4*circle;
			printf("Line = %d, column = %d.\n",center-circle,center-circle+left);
		}else {
			left = left - 6*circle;
			printf("Line = %d, column = %d.\n",center-circle+left,center+circle);
		}
	}
	return 0;
}
