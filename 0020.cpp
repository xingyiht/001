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
}//����1�����ҹؼ��ָ��� 

int main()
{   int i=0;
	char a[10000]; //����ı�
	char name[32][10]={"auto","break","case","char","const","continue","default","do ","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
	//�ؼ��ʴ�Ϊ���� 
    int num,swnum,casenum;//����
    int lv;//�ȼ� 
    char b[100];//�ļ�·�� 
	cin>>b>>lv;
    ifstream infile; 
    infile.open(b);   //���ļ����������ļ��������� 
    assert(infile.is_open());   //��ʧ��,�����������Ϣ,����ֹ�������� 
    infile >> noskipws;    
     while (infile >> a[i]){
        i++;
    }
    infile.close();             //�ر��ļ������� 
    int l=i;//�ı����� 
    i=0,num=0;  
    for(i=0;i<32;i++){
    	num=num+search_string(a,name[i]);
	}
    printf("total num: %d\n",num);
    if(lv==1)return 0; //����ؼ��ʸ��� 
    printf("switch num: %d\n",search_string(a,name[25]));
	if(lv==2)return 0;//���switch����	
	
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
    printf("%d\n",n);//���ÿ��switch��case���� 
    if(lv==3)return 0;}























