#include<ctype.h>
#include<string.h>
#include<stack> 
#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;
int search_string(char *target,char *search)
{
    bool judge = true;
    int n = 0;
    for(int i = 0; i < strlen(target); i++)
{
    judge = true;
    for(int j = 0; j < strlen(search); j++)
    if(target[i+j] != search[j])
{
    judge = false;
    break;
}
    if(judge)
    n++;
}
return n;
}//函数1：查找关键字个数 

int main()
{   int i=0;
	char a[10000]; //存放文本
	char name[32][10]={"auto","break","case","char","const","continue","default","do ","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	//关键词存为数组 
    int num,swnum,casenum;//计数
    int lv;//等级 
    char b[100];//文件路径 
	cin>>b>>lv;
    ifstream infile; 
    infile.open(b);   //将文件流对象与文件连接起来 
    assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 
    infile >> noskipws;    
     while (infile >> a[i]){
        i++;
    }
    infile.close();             //关闭文件输入流 
    int l=i;//文本长度 
    i=0,num=0;  
    for(i=0;i<32;i++){
    	num=num+search_string(a,name[i]);
	}
    printf("total num: %d\n",num);
    if(lv==1)return 0; //输出关键词个数 
    printf("switch num: %d\n",search_string(a,name[25]));
	if(lv==2)return 0;//输出switch个数	
	
	printf("case num: ");
	bool judge = true;
    int n = 0;
    for(int i = 0; i < l; i++)
{   
    if(a[i]=='s'&&a[i+1]=='w'&&a[i+2]=='i'&&a[i+3]=='t'&&a[i+4]=='c'&&a[i+5]=='h'&&n!=0){
    	printf("%d ",n);
    	n=0;
	}
    judge = true;
    for(int j = 0; j < strlen(name[2]); j++)
    if(a[i+j] != name[2][j])
{
    judge = false;
    break;
}
    if(judge)
    n++;
}
    printf("%d\n",n);//输出每个switch的case个数 
    if(lv==3)return 0;}























