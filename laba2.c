#define _CST_SECURE_NO_WARNING
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#define MAX_M 70
#define MAX_N 5
int main(int argc, char *argv[])
{
{
    int i,N,k=1,kmax=0,kmin=;
    char **p;
    char s[MAX_M]= {'\0'};
//count=-1;
    setlocale(LC_ALL, "Russian");
    printf("Введите число строк: ");
    scanf("%d",&N);
    p=(char**)malloc(N*sizeof(char*));
    if(!p)
    {
        printf("Память не выделена\n");
        return -1;
    }
    for(i=0; i<N; i++)
    {
        printf("Введите строку");
        scanf("%s", s);
        p[i]=(char*)malloc(strlen(s));
        strcpy(p[i], s);
        if(p[i]=" ")
		{
			k=k+1;
		}
		if(k>kmax)
		{
		k=kmax;
		}
		
        
        //memset(p[i], 0, MAX_M);
        
    }
    qsort(p[i],sizeof(char*), comp)	
    for(i=0; i<N; i++)
    {
		free(p[i]);
	}	
	free(p);
    int comp(const void *a, const void *b, int *k, int kmax)
    {
    const char **str1=(const char**)a;
    const char **str2=(const char**)b;
    return strcmp(*str1, *str2);
    }
    /*printf("Введите строки: ");
    scanf("%d",M);
    for (int i=0;i<N;i++)
    {
    if (s[i]=' ')
        k=k+1;

    if (k>kmax)
    {
        k=kmax;
        count++;
    }
    else
    k=kmid;
    {
    if (k>kmid)
    {
    kmid=kmin;
    k=kmid;
    count++;
    }
    }*/
    return 0;
//}
}
}
