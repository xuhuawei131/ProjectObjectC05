//
//  main.c
//  ProjectObjectC05
//
//  Created by lingdian on 17/8/21.
//  Copyright © 2017年 lingdian. All rights reserved.
//

#include <stdio.h>
int strLength(char* str){
    int length=0;
    for (; str[length]!=0; length++)
        ;
    return length;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    char* p="abc";//只要看到双引号 就要自然想到 在尾部添加0 或者是'\0' 这里的指针指向的是一块常量 不可被修改
    sizeof(p);//指针类型的大小 永远是int的大小 一般是4个字节
    char ns[]="abc";//相当于char ns[]={'a','b','c',0}
    sizeof(ns);//一个数组是有大小的 大小是每个元素的空间大小乘以数组的个数
    //虽然都是abc字符串 但是他们是不同的，p指向的是一个字符串常量 p[0]='b' 相当于'a'='b' 这明显是错误的
    char ns1[]={'a','b','c'};//打印的时候 出了 abc正常输出之外 后面还有其他的东西 直到0出现
    char ns2[10]={'a','b','c'};//abc00000
    char ns3[3]="abcdefg";//输出的结果是 abc后面乱码 因为分配的空间就那么大
    return 0;
}
