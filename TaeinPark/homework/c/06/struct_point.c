#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

struct Person {   // 구조체 정의
    char name[20];        // 구조체 멤버 1
    int age;              // 구조체 멤버 2
    char address[100];    // 구조체 멤버 3
};

int main()
{
    struct Person p1;     // 구조체 변수 선언

    // 점으로 구조체 멤버에 접근하여 값 할당
    strcpy(p1.name, "박태인");
    p1.age = 33;
    strcpy(p1.address, "수원시 권선구 평동");

    // 점으로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1.name);       // 이름: 박태인
    printf("나이: %d\n", p1.age);        // 나이: 33
    printf("주소: %s\n", p1.address);    // 주소: 수원시 권선구 평동

    return 0;
}


