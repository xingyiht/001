#include <stdio.h>
#include <string.h>
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
}
int main()
{
char target[400] = {0},search [400] = {0};//
printf("�����ַ���:\n");
gets(target);
printf("����Ҫ���ҵ��ַ���\n");
scanf("%s",search);
printf("���ֵĴ���Ϊ��%d\n",search_string(target,search));
}
