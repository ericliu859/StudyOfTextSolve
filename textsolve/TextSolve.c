#include <stdio.h>
int main(){
	char text[12345];//定义字符数组,用于存文本文档
	int i = 1211;//待定位置,学号后4位
	char s[5] = "1121";//要替换的字符串，学号倒转
	freopen("p.txt","r",stdin);//打开p.txt,从标准输入读取
	scanf("%s",text);//读取
	fclose(stdin);//关闭p.txt
	int j;
	for(j=i;j<i+4;j++)//循环替换1211位的后四位
		text[j] = s[j-i];
	freopen("p.txt","w",stdout);//打开p.txt,从标准输出写入
	printf("%s",text);//写入
	fclose(stdout);//关闭p.txt
	return 0;
}
