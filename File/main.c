//
//  main.c
//  File
//
//  Created by lyh20161104592 on 17/6/13.
//  Copyright © 2017年 lyh20161104592. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a[20];
    int n,k,j,i,o,temp,v,b,m,tem;
    printf("直接排序请按1\n" "文件中排序请按2\n");
    scanf("%d",&o);
    if(o==1)
    {
        int a[10];
        int j,i,k;
        int temp;
        printf("请输入十个整数\n");
        for(i=0;i<=9;i++)
        {
            scanf("%d",&a[i]);
        }
        for(j=0;j<9;j++)
        {
            for(k=0;k<9-j;k++)
            {
                if(a[k]>a[k+1])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for(k=0;k<i;k++)
        {
            printf("%d ",a[k]);
        }
        
        printf("\n");
    }
    else
    {
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("//Users//lyh20161104592//Desktop//File//paixu.txt","r+");
    fp2=fopen("//Users//lyh20161104592//Desktop//File//paixuout.txt","w+");
    if(fp1==NULL)
    {
      printf("打开文件错误，要打开的文件可能不存在\n");
    }
    else
    {
        while(fscanf(fp1,"%d",&n)!=EOF)
        {
            for(b=0;b<n;b++)
            {
                fscanf(fp1,"%d",&a[b]);
            }
            for(m=0;m<n-1;m++)
            {
                for(v=0;v<b-1-m;v++)
                {
                    if(a[v]>a[v+1])
                    {
                        tem=a[v];
                        a[v]=a[v+1];
                        a[v+1]=tem;
                    }
                }
            }
            for(v=0;v<n;v++)
            {
                printf("%d ",a[v]);
                fprintf(fp2,"%d ",a[v]);
            }
            fprintf(fp2,"\n");
            printf("\n");
        }
             fclose(fp1);
             fclose(fp2);
    }
}

return 0;
}
