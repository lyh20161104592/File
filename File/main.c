//
//  main.c
//  File
//
//  Created by lyh20161104592 on 17/6/13.
//  Copyright © 2017年 lyh20161104592. All rights reserved.
//

#include<stdio.h>
int main(){
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//lyh20161104592//Desktop//File//input.txt","r+");
    fw=fopen("//Users//lyh20161104592//Desktop//File//output.txt","w");
    int a,b,c;
    fscanf(fr,"%d %d",&a,&b);
    c=a+b;
    printf("%d+%d=%d \n",a,b,c);
    fprintf(fw,"%d+%d=%d \n",a,b,c);
    return 0;
}
