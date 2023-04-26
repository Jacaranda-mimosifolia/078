//goto语句又被称为是无条件跳转语句 
//goto语句只能在一个函数内部跳转，它并不允许跳转出一个函数外部。
#include<stdio.h>
int main()
{
	//goto可以实现循环语句的功能
//	int a=0; 
//	began://标签 
//		if(a<10)
//		{
//			printf("a=%d\n",a);
//			a++;
//			goto began;//标签：began 
//		}
	
	//滥用goto语句会破坏程序的逻辑性和安全性。 
//	frist://标签 
//		printf("hello world!\n");
//		for(int i=0;i<10;i++)
//		{
//			for(int j=3;j<10;j++)
//			{
//				if(i==j)
//				{
//					goto end;//标签：end 
//				}
//			}
//		}
//		end://标签 
//			printf("Goodbye!\n");
//			goto frist;//标签：frint 
	return 0;
 } 	
