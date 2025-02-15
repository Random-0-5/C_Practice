/*在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，简单的加密算法虽然不足以完全避免情报被破译，
但仍然能防止情报被轻易的识别。我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，A-Y的字母用其后继字母替代，
把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。

输入
输入一行，包含一个字符串，长度小于80个字符。
输出
输出每行字符串的加密字符串。*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define len_max 80

int main(void) {
	char* intelligence = (char*)malloc(len_max * sizeof(char));
	fgets(intelligence, len_max, stdin);
	intelligence[strcspn(intelligence, "\n")] = 0;

	size_t len=strlen(intelligence);

	for (int i = 0; i < len; i++) {
		if ((intelligence[i] >= 'a' && intelligence[i] <= 'y') ||
			(intelligence[i] >= 'A' && intelligence[i] <= 'Y'))
		{
			intelligence[i] += 1;
		}
		else if (intelligence[i] == 'z' || intelligence[i] == 'Z')
			intelligence[i] -= 25;
		else
			continue;
	}
	intelligence[len] = '\0';

	printf("%s", intelligence);

	free(intelligence);
	return 0;
}