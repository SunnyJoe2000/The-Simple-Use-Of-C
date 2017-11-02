//
//  main.c
//  The Simple Use Of C
//
//  Created by mac on 17/11/2.
//  Copyright © 2017年 SunnyJoe. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //    float fahr,celsius;
    //    int lower,upper,step;
    //
    //    lower = -17.778;
    //    upper = 148.888;
    //    step = 11;
    //
    //    celsius = lower;
    //    printf("\n");
    //
    //    while (celsius <= upper) {
    //
    //        fahr = celsius * 9 / 5.0 +32;
    //
    //        printf("%3.0f\t%3.1f\n",celsius,fahr);
    //        celsius    = celsius + step;
    //
    //    }
    
    //    int c;
    //    c = getchar();
    //
    //
    //    while (c!= EOF) {
    //        putchar(c);
    //        c= getchar();
    //
    //    }
    
    
    //    int c;
    //
    //    while ((c = getchar()) != EOF) {
    //
    //        putchar(c);
    //
    //    }
    
    
#pragma mark 验证getchar()!=EOF的值是0还是1
    
    //    if ((getchar()!=EOF) == 0) {
    //        printf("EOF=0");
    //
    //    }if ((getchar()!=EOF == 1)) {
    //        printf("EOF=1");
    //    }else {
    //        printf("EOF既不是0也不是1");
    //
    //    }
    
    
#pragma mark 打印eof的值
    
    //    printf("Hex = %x U= %u D = %d",EOF,EOF,EOF);
    
    
    
    //    int a,b;
    //
    //
    //    scanf("%d%d",&a,&b);
    //
    //
    //    printf("a= %d,b=%d,c=%d",a,b,a+b);
    //
    
    //    double nc;
    //
    //
    //
    //    for (nc = 0; getchar() == EOF; ++nc)
    //
    //        ;
    //
    //    printf("%.0f\n",nc);
    
    //    int c,nl;
    //
    //    nl = 0;
    //
    //    while ((c=getchar()) != EOF) {
    //        if (c == '\n') {
    //
    //            nl++;
    //
    //        }
    //        printf("%d\n",nl);
    //
    //
    //    }
    //    int c,nl;
    //
    //
    //
    //    nl = 0;
    //
    //    while ((c=getchar())!=EOF)
    //    {
    //        if (c==' ')
    //            ++nl;
    //
    //        printf("一共有%d个空格\n",nl);
    //
    //
    //    }
#pragma mark
    //    int c,nl;
    //    nl = 0;
    //
    //
    //    while ((c=getchar()) != EOF) {
    //
    //
    //
    //            putchar(c);
    //
    //
    //
    //
    //    }
    
    
    //    int c;
    //    int n = 1;
    //    while((c=getchar())!=EOF)
    //    {
    //
    //        if (c != ' ')
    //        {
    //            putchar(c);
    //        }
    //        else if( n != ' ') {
    //            putchar(c);
    //
    //        }
    //
    //
    //            n = c;
    //
    //
    //
    //
    //    }
    
    //    int c;
    //    int inspace=0;
    //
    //    while((c = getchar()) != EOF)
    //    {
    //        if(c == ' ')
    //        {
    //            if(inspace == 0)
    //            {
    //                inspace = 1;
    //                putchar(c);
    //            }
    //        }
    //        else
    //        {
    //            inspace = 0;
    //            putchar(c);
    //        }
    //    }
    
    //    int c,number;
    //    number = 0;
    //
    //    while ((c = getchar())!=EOF) {
    //
    //        if (c ==  ' ') {
    //            ++number;
    //
    //            if (number == 1) {
    //                putchar(c);
    //
    //
    //            }
    //        }
    //        else if(c != ' '){
    //            putchar(c);
    //            number = 0;
    //
    //        }
    //    }
    
    
    
    //    int c,inspace;
    //
    //    inspace = 0;
    //
    //    while ((c = getchar())!= EOF) {
    //        if (c == ' ') {
    //            if (inspace == 0) {
    //                inspace = 1;
    //                putchar(c);
    //            }
    //        }
    //        else if (c != ' ') {
    //            inspace = 0;
    //            putchar(c);
    //        }
    //    }
    
    int c, d;
    
    while ( (c=getchar()) != EOF)
    {
        d = 0;   //必须设置标志位，d=0表示直接原样打印输出
        if (c == '\\') {    //检测到输入中有1个反斜杠\，此处写法c =='\\'是正确的。
            putchar('\\');
            putchar('\\');
            d = 1;
        }
        if (c == '\t') {    //检测到输入中有一个隐式的制表符
            putchar('\\');
            putchar('t');
            d = 1;          //将标志位置1，防止输出\t后，继续输出1个隐式的制表符形式
        }
        if (c == '\b') {    //注：检测到有一个回退符。没有搞清楚如何输入？？
            putchar('\\');
            putchar('b');
            
            d = 1;
        }
        if (d == 0)     //如果输入中不含有上述三种符号，直接原样打印输出。
            putchar(c);
    }

    
    return 0;
}
