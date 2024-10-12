#include"stdio.h"
void minnotes(int *,int *,int);
main()
{
	int amt,notes = 0;
	int currency[] = {2000,500,200,100,50,20,10,5,2,1};
	int i;
	printf("Enter the amount:");
	scanf("%d",&amt);
	for(i = 0;i<=9;i++)
	{
		minnotes(&amt,&notes,currency[i]);
	}
	printf("No. of Notes:%d",notes);
}
void minnotes(int *amt, int *notes, int c)
{
	*notes = *notes + *amt/c;
	*amt = *amt%c;
}



