/*-------------------------------------------------------
 * Tarea de Analisis de Algoritmos: 11369 - Shopaholic
 * Fecha: 30-03-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdio.h>

int i, j, t, n, sum, count;

int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}

int main(int argc, char const *argv[])
{
	scanf("%d", &t);
    for (i = 0; i < t; i++) {
    	scanf("%d", &n);
    	int p[n];
    	for (j = 0; j < n; j++) {
            scanf("%d", &p[j]);
        }

	    qsort(p, n, sizeof(int), compare);
	    count = 2;
	    sum = 0;

	    while(count < n) {
	    	if (n < 3) {
	    		break;
	    	}
            sum += p[count];
	    	count += 3;
	    }

	    printf("%d\n", sum);
	}
    return 0;
}
