#include <stdio.h>

void main(){
	//定义一个数组
	int a[5]={1,2,3,4,5};
	//将数组的指针指向这个首地址
	int * p=a;
	//这里a表示的是整个数组
	int * p1=(int*)(&a+1);
	//0x20=2*16=32
	//0x24=36 0x28=40
	//按4字节顺序存储，顺序存储在大数据的某些算法
	//push ：入栈操作
	//QWORD:Quad Words 64位=8字节
	//DWORD:Double Words 32位=4字节
	printf("hello,beifeng%d,%d",*(p+1),*(p1-1));
	printf("\r\n%d",*(a+1));
}