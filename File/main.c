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
    int n,k,j,i,temp;
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
            for(i=0;i<n;i++)
            {
                fscanf(fp1,"%d",&a[i]);
            }
            for(j=0;j<n-1;j++)
            {
                for(k=0;k<n-1-j;k++)
                {
                    if(a[k]>a[k+1])
                    {
                        temp=a[k];
                        a[k]=a[k+1];
                        a[k+1]=temp;
                    }
                }
            }
            for(k=0;k<n;k++)
            {
                printf("%d ",a[k]);
                fprintf(fp2,"%d ",a[k]);
            }
            fprintf(fp2,"\n");
            printf("\n");
        }
             fclose(fp1);
             fclose(fp2);
    }
             return 0;
}
