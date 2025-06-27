#ifndef CHAPTER_SIX_H
#define CHAPTER_SIX_H



// Description
// 输入一个整型数，存入变量i，通过子函数change把主函数的变量i除2，然后打印i，例如如果输入的为10，打印出5，如果输入的为7，打印出3

// Input
// 一个整型数

// Output
// 对应整型数除2后的商
int chapter_six_homework_one();


// Description
// 输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串（测试用例的字符串中含有空格），字符串的输入长度小于最初输入的整型数大小，
// 最后输出输入的字符串即可（无需考虑输入的字符串过长，超过了内存大小）；
// 注意下面问题：
//  char *p;
//  scanf("%d",&n);
//  p=malloc(n);
//  scanf("%c",&c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
//  fgets(p,n,stdin);
// 注意：OJ不支持fflush(stdin)清空标准输入缓冲区操作。
// OJ不支持gets，因为C11标准去掉了，部分学校机试可以用gets，部分不可以，因此建议使用fgets

// Input
// 一个整型数和一个字符串，例如
// 10
// hello

// Output
// 输出输入的字符串，上面输入的是hello，那么输出hello
int chapter_six_homework_two();

#endif