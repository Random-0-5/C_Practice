/*对于一个字符串来说，定义一次循环移位操作为：将字符串的第一个字符移动到末尾形成新的字符串。

给定两个字符串s1和s2，要求判定其中一个字符串是否是另一字符串通过若干次循环移位后的新字符串的子串。
例如CDAA是由AABCD两次移位后产生的新串BCDAA的子串，而ABCD与ACBD则不能通过多次移位来得到其中一个字符串是新串的子串。

输入
一行，包含两个字符串，中间由单个空格隔开。字符串只包含字母和数字，长度不超过30。
输出
如果一个字符串是另一字符串通过若干次循环移位产生的新串的子串，则输出true，否则输出false。*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_substring_after_rotation(const char *s1, const char *s2) {
    // 创建一个新字符串 s1s1，长度是 s1 的两倍
    char s1s1[60]; // s1 的最大长度为 30，因此 s1s1 长度可以是 60
    strcpy(s1s1, s1);      // 先复制 s1
    strcat(s1s1, s1);      // 再将 s1 连接到自己后面

    // 检查 s2 是否是 s1s1 的子串
    return strstr(s1s1, s2) != NULL;
}

int main() {
    char s1[31], s2[31]; // 定义字符串数组，长度最大为 30，留一个字符给结束符
    // 输入两个字符串
    scanf("%s %s", s1, s2);
    
    // 输出结果
    if (is_substring_after_rotation(s1, s2)) {
        printf("true\n");
    }
    else if(is_substring_after_rotation(s2, s1)){
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}
