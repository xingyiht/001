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
printf("输入字符串:\n");
gets(target);
printf("输入要查找的字符串\n");
scanf("%s",search);
printf("出现的次数为：%d\n",search_string(target,search));
}
