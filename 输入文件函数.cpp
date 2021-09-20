#include<ctype.h>
#include<string.h>
#include<stack> 
#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;


int main()
{
	char a[10000]; //存放文本
    int num,swnum,casenum;//计数
    int lv;//等级 
    char b[100];//文件路径 
	cin>>b;
    ifstream infile; 
    infile.open(b);   //将文件流对象与文件连接起来 
    assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 

    char c;
    infile >> noskipws;
    int i=0;
     while (infile >> a[i]){
        i++;
    }
    for (int j = 0; j < i; j++){
        cout << a[j] ;
    }
    infile.close();             //关闭文件输入流 
} 
