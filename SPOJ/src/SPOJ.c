/*
 ============================================================================
 Name        : SPOJ.c
 Author      : Somshubra Majumdar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int compare(const void *p, const void *q){
	int l = *(const int*)p;
	int r = *(const int*)q;

	return l-r;
}

int main(void) {
	int t,i;
	int *N = NULL;
	scanf("%d",&t);
	N = (int*) calloc(t, sizeof(int));

	for(i = 0; i < t; i++){
		scanf("%d",&N[i]);
	}

	qsort(N,t,sizeof(int),compare);

	for(i = 0; i < t; i++){
		printf("%d\n",N[i]);
	}

	return EXIT_SUCCESS;
}*/


/*
int main(){

	int i = 1,N,count = 0, temp,k,t;


	scanf("%d",&N);

	for(k = 0; k < N; k++){
		scanf("%d",&t);
		temp = t;
		count = 0;

		while(t/5 != 0){

			count += temp/pow(5,i);
			t /= 5;
			i++;
		}

		printf("%d\n",count);
		i = 1;

	}
	return 0;
}*/

/*int main(){
	int a,b,c;

	scanf("%d%d%d", &a, &b, &c);
	while(a != 0 || b != 0 || c != 0){

		if( b-a == c-b){
			printf("AP %d\n",(c+(c-b)));
		}
		else if(b/a == c/b){
			printf("GP %d\n",(c*(c/b)));
		}

		scanf("%d%d%d", &a, &b, &c);
	}

	return 0;
}*/



int main(void)
{
  int cases,i,x,y,j;
  int value[30000];

  scanf("%d",&cases);

  for(i=0;i<cases;i++)
  {
    scanf("%d %d",&x,&y);
    if(x > 10000 || y > 10000)
    	value[i] = -1;
    else if(x == 0 && y == 0){
    	value[i] = -1;
    }
    else{
    if(y>x || (x%2!=0 && y%2==0) || (x%2==0 && y%2!=0 ) || (x>2 && y==0))
      value[i]=-1;

    else
    {
      if(x==y && ((x%2)==0))          /* when both same and even */
       value[i]=2*x;

      else if(x==y && ((x%2)!=0))     /* when both same and odd */
        value[i]=(2*x)-1;

      else if(x%2==0 && y%2==0)       /* when both even and different */
        value[i]=x+y;
      else if(x%2!=0 && y%2!=0)       /* when both odd  and different */
        value[i]=x+y-1;
    }
    }
  }

  printf("\n");
  for(j=0;j<i;j++)
  {
    if(value[j]==-1)
     printf("No Number\n");
    else
     printf("%d\n",value[j]);
  }
  return 0;
}
