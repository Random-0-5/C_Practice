/*����һ���ַ�����˵������һ��ѭ����λ����Ϊ�����ַ����ĵ�һ���ַ��ƶ���ĩβ�γ��µ��ַ�����

���������ַ���s1��s2��Ҫ���ж�����һ���ַ����Ƿ�����һ�ַ���ͨ�����ɴ�ѭ����λ������ַ������Ӵ���
����CDAA����AABCD������λ��������´�BCDAA���Ӵ�����ABCD��ACBD����ͨ�������λ���õ�����һ���ַ������´����Ӵ���

����
һ�У����������ַ������м��ɵ����ո�������ַ���ֻ������ĸ�����֣����Ȳ�����30��
���
���һ���ַ�������һ�ַ���ͨ�����ɴ�ѭ����λ�������´����Ӵ��������true���������false��*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_substring_after_rotation(const char *s1, const char *s2) {
    // ����һ�����ַ��� s1s1�������� s1 ������
    char s1s1[60]; // s1 ����󳤶�Ϊ 30����� s1s1 ���ȿ����� 60
    strcpy(s1s1, s1);      // �ȸ��� s1
    strcat(s1s1, s1);      // �ٽ� s1 ���ӵ��Լ�����

    // ��� s2 �Ƿ��� s1s1 ���Ӵ�
    return strstr(s1s1, s2) != NULL;
}

int main() {
    char s1[31], s2[31]; // �����ַ������飬�������Ϊ 30����һ���ַ���������
    // ���������ַ���
    scanf("%s %s", s1, s2);
    
    // ������
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
