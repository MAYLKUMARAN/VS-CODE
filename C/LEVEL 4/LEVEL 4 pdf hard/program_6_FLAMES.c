#include<stdio.h>
#include<string.h>
int main()
{
    printf("____________________");
    printf("|      FLAMES      |");
    printf("____________________\n");
	int a,b,c=0,l=0,i,j,k,ch,u,po;
	char y[20],p[20];
	printf("Enter name:");
	scanf("%s",y);
	printf("Enter name:");
	scanf("%s",p);
	a=strlen(y);
	b=strlen(p);
	a=a+b;
		for(i=0;i<b;i++)
		{
			for(j=0;j<strlen(y);j++)
			{
				if(p[i]==y[j])
				{
				c++;
				l=0;
					for(k=0;k<=strlen(y);k++)
					{
					if(k==j)
					{
                        continue; 
                    }
					else
					{
						y[l]=y[k];		
						l++;
					} 
                    }
                break;
				}
			}
		}
			ch=a-2*c;
		if(ch==3||ch==5||ch==14||ch==16||ch==18||ch==21||ch==23)
			printf("F\n");
		else if(ch==10||ch==19)
			printf("L\n");
		else if(ch==8||ch==12||ch==13||ch==17||ch==28)
			printf("A\n");
		else if(ch==6||ch==11||ch==15||ch==26)
			printf("M\n");
		else if(ch==2||ch==4||ch==7||ch==9||ch==20||ch==22||ch==24||ch==25)
			printf("E\n"); 
		else if(ch==1||ch==27)
			printf("S\n"); 
		else
			printf("No relation exist b/w you\n");
        printf("Press 1 and enter to continue or enter to end\n");
        scanf("%d",&u);
        if(u==1)
        {
		    main();
        }
        else
        {
            printf("THE END");
        }
return 0;
}