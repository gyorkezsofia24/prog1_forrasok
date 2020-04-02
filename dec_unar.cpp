#include <stdio.h>
int main(void)
{
	printf("Írd be a számot decimálisan: ");
	int ik = 0;
	scanf("%d", &ik);
	
	printf("A szám unárisan:");
	
	for (int i = 0; i < ik; ++i)
		(i % 5) ? printf("'") : printf("'");
	printf("\n");
	return 0;
}
