//
//  main.c
//  20510
//
//  Created by apple on 14. 3. 5..
//  Copyright (c) 2014년 apple. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    /*
    printf("Hello");
    printf("Hello\n");
    printf("Hello\nTom");
    
    printf("2+2=4\n");
    printf("2+2=%d\n",2*2);
    printf("%d+%d=%d\n",2,2,4);
    printf("r=3, area=%f",3*3*3.14);
    */
    
//    printf("Tom! %s\n","hello");
//    printf("Initial is %c.%c.%c\n",'P','S','Y');
//    int eqfwefwefwewfqeqwweqfeqwfewfeqwfefwe ;
//    eqfwefwefwewfqeqwweqfeqwfewfeqwfefwe=10;
//    int hello=10;
//    printf("%d\n",hello);
//    int a=10;
//    char c='T', s[10]="Tom";
//    printf("a=%d, a의 주소는 %d\n",a,&a);
//    printf("a=%d, a의 주소는 %x\n",a,&a);
//    printf("%s's initial is %c\n",s,c);
    //traning no.1
//    int x=0,y=0;
//    printf("(%d,%d) ->",x,y);
//    x=x+5;
//    y=y-10;
//    printf(" (%d,%d)\n",x,y);

    int x1,y1,x2,y2;
    x1=0;
    y1=0;
    x2=2;
    y2=3;
    printf("(%d,%d) 부터(%d,%d)까지의 거리는 %f 입니다. \n",x1,y1,x2,y2,sqrt(pow((x1-x2),2)+pow((y1-y2), 2)));
    return 0;
}

