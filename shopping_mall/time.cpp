#include "time.h"
using namespace std;
char* print_current_time() {
    // ���� �ð� ��������
    time_t now = time(0);

    // �ð��� ���� �ð����� ��ȯ
    tm local_time; // ����ü�� �̸� ����
    localtime_s(&local_time, &now); // ������ localtime_s ���

    // �ð� ���ڿ� ����: "YYYY-MM-DD HH:MM:SS"
    static char time_str[20]; // ���� ũ��: "YYYY-MM-DD HH:MM:SS"�� 19�� + NULL ���� ����
    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", &local_time);

    return time_str;
}

