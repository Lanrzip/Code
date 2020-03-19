#include <stdio.h> //是在程序编译之前要处理的内容，称为编译预处理命令。编译预处理命令还有很多，它们都以"#"开头，并且不用分号结尾。stdio.h是头文件，标准输入输出函数库。这个库中包括了输入输出函数的定义，比如下面要用到的scanf 和 printf 

void PrintN(int N)  //定义一个函数，名字叫PrintN，参数是一个整数
{//c语言的函数都是用一对花括号括起来的
   int i;  //定义一个整形变量，名字为i
   for (i=1;i<=N;i++){
       //for循环，开始条件是i=1,终止条件是i<=N，循环一次后执行的语句是i++也就是i=i+1
      printf("%d\n",i);//输出整数变量i的值，输出之后加回车
   }//for循环结束
   return;//函数返回调用处
}//函数定义结束

void PrintN_recursion(int N)  //定义一个函数，名字叫PrintN，参数是一个整数
{
   if (N){  //判断条件，这里是一种简写，准确来说，N=0,if（N）为False;N不是0,if(N)为True
      PrintN_recursion(N-1) ; //递归调用自身，参数有变化
	  printf("%d\n",N);//输出整数变量i的值，输出之后加回车
   }
   return;//函数返回调用处
}//函数定义结束

int main() //C语言的主函数，名字都是main，返回值一般都是int,
{
   int N;
   scanf("%d",&N);  //接收键盘输入一个整数，存储在变量N
//   printf("下面是PrintN的输出结果\n");
//   PrintN(N);   //调用自己定义的函数PrintN
   printf("下面是PrintN_recursion的输出结果\n");  
   PrintN_recursion(N);
   return 0;  //返回，返回值是0，因为函数的返回值类型是int所以这里返回0
}



