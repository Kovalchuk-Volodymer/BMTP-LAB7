#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertToLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char) str[i]);
    }
}
int isEnding(char lastChar) {
    return lastChar == '.' || lastChar == '!' || lastChar == '?' || lastChar == ')';
}
int containsDeveloperWords(char *text) {
    return strstr(text, "���������") != NULL ||
           strstr(text, "�����������") != NULL ||
           strstr(text, "developer") != NULL;
}
int main() {
    char input[256];
    printf("������ �������: ");
    fgets(input, sizeof(input), stdin);
    // ��������� ������� ������ �����, ���� �
    int lenght = strlen(input);
    if (lenght > 0 && (input[lenght - 1] == '\n' || input[lenght - 1] == '\r')) {
        input[lenght - 1] = '\0';
        lenght--;
    }
    // ��������, �� ������� ������ ����������
    if (lenght == 0 || !isEnding(input[lenght - 1])) {
        printf("����������� ������ �������.\n");
        return 1;
    }
    convertToLower(input);
    if (containsDeveloperWords(input)) {
        printf("���\n");
    } else {
        printf("ͳ\n");
    }
    return 0;
}
