#include<ctype.h>
#include<string.h>
#include<stack> 
#include<iostream>
#include<fstream>
#include<cassert>
using namespace std;


int main()
{
	char a[10000]; //����ı�
    int num,swnum,casenum;//����
    int lv;//�ȼ� 
    char b[100];//�ļ�·�� 
	cin>>b;
    ifstream infile; 
    infile.open(b);   //���ļ����������ļ��������� 
    assert(infile.is_open());   //��ʧ��,�����������Ϣ,����ֹ�������� 

    char c;
    infile >> noskipws;
    int i=0;
     while (infile >> a[i]){
        i++;
    }
    for (int j = 0; j < i; j++){
        cout << a[j] ;
    }
    infile.close();             //�ر��ļ������� 
} 
