#include "time.h"
using namespace std;
char* print_current_time() {
    // 현재 시간 가져오기
    time_t now = time(0);

    // 시간을 로컬 시간으로 변환
    tm local_time; // 구조체를 미리 선언
    localtime_s(&local_time, &now); // 안전한 localtime_s 사용

    // 시간 문자열 형성: "YYYY-MM-DD HH:MM:SS"
    static char time_str[20]; // 버퍼 크기: "YYYY-MM-DD HH:MM:SS"는 19자 + NULL 종료 문자
    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", &local_time);

    return time_str;
}

