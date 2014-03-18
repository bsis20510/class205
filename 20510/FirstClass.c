//
//  main.c
//  20510
//
//  Created by apple on 14. 3. 5..
//  Copyright (c) 2014년 apple. All rights reserved.
//

#include <stdio.h>

int main()
{
/*
    int r;
    double pi;
    printf("반지름 값과 원주율 값을 입력하시오. ex) 3,4.15:");
    scanf("%d,%lf",&r,&pi);
    printf("원의 넓이는 %.3f입니다",r*r*pi);

    char firstName,middleName;
    printf("First Initial: ");
    scanf("%c\n",&firstName);
    printf("Middle initial: ");
    scanf("%c", &middleName);
    printf("%c.%c\n",firstName,middleName);
*/
    char str[20];
    printf("Your name:");
    gets(str);
    printf("Name: %s\n",str);
    printf("Last name's inital %c\n",str[0]);
 }

