# 오늘 1일차에서 파악해야할 내용

## C언어 데이터 타입
```make
1비트 - 컴퓨터가 표현할 수 있는 최소 단위(0 혹은 1)
8비트 -> 1바이트

1비트가 표현할 수 있는 숫자는 ? 0과 1로 두 가지: 2^1
2비트가 표현할 수 있는 숫자는 ? 00, 01, 10, 11로 네 가지: 2^2
3비트가 표현할 수 있는 숫자는 ? 000, 001, 010, 011, 100, 101, 110, 111로 여덟가지: 2^3

int - 4바이트(32비트): -2^31 ~ (2^31 - 1):
표현 개수는 2^32, 여기서 빼기 1이 발생하는 이유는 0을 포함하기 때문입니다.
short - 2바이트(16비트): -2^15 ~ (2^15 - 1)
char - 1바이트(8비트): -2^7 ~ (2^7 - 1)

long long int - 8바이트(64비트): -2^63 ~ (2^63 - 1)

float - 4바이트:
IEEE 표준을 따르고 있으며 이 내용은 union 수업시 고속 계산에 활용하는 케이스로 설명합니다.
double - 8바이트

long double - 16바이트(128비트)
```

## 리눅스 명령어
```make
ls -> list의 약자로 현재 디렉토리의 리스트를 보여줍니다.
      사용법 1) ls
      사용법 2) ls 디렉토리명
      사용법 3) ls -R
                현재 위치부터 하위의 모든 정보를 보여줌
      사용법 4) ls -a
                리눅스에서 숨김 파일은 맨 앞에 '.'이 옵니다.
                숨김파일을 포함해서 리스트를 보여줍니다.

clear -> 화면이 아래쪽으로 내려가서 맨 위로 올리고 싶은 경우
         혹은 화면이 지저분해서 정리하고 싶은 경우 사용합니다.

cp -> 복사 명령어
      사용법 1) cp 복사대상 사본명
      사용법 2) cp -r 복사대상(디렉토리) 사본명

mkdir -> make directory의 약자로 디렉토리를 생성합니다.
         사용법 1) mkdir 디렉토리명
         사용법 2) mkdir -p 디렉토리명1/디렉토리명2/디렉토리명3/
                   이와 같이 만들면 디렉토리1 내부에 디렉토리2가 만들어지고
                   디렉토리2 내부에 디렉토리3 이 만들어지는 형식입니다.

cd -> change directory의 약자로 디렉토리를 이동하는 목적으로 사용합니다.
      . <- 의 경우 현재 위치를 의미합니다.
      .. <- 의 경우 사우이 디렉토리를 의미합니다.
      ex) cd ../.. 인 경우에는 2칸 상위로 이동하는 것을 의미합니다.
          현재 위치가 proj/Lv01-02/SanghoonLee 라고 가정
          위의 명령을 입력하면 proj 로 이동됩니다.

pwd -> password의 약자인데 사실상 현재 디렉토리의 위치를 보여줍니다.
       (가장 와닿지 않는 명령어중 하나)
       여기서 ~ 은 '/home/여러분계정명' 을 의미합니다.
       그래서 cd ~ 을 입력하고 pwd 명령을 입력하면 '/home/계정명' 이 보입니다.
       *** 결국 물결(~)은 사용자 계정의 홈 디렉토리를 의미합니다. ***

sudo -> 윈도우로 치면 관리자 권한 실행을 의미합니다.
        권한이 없다고 나오면 sudo를 입력합니다.
        sudo su의 경우 관리자 권한으로 로그인을 하므로 모든 접근이 가능하지만
        주의하지 않을 경우 디렉토리 설정이 꼬이면서 문제가 발생할 수 있습니다.

adduser -> 사용자 계정 추가
           사용법) sudo adduser 계정명(test)
                   비밀번호 입력후 앤터 앤터 앤터 ...
                   이후 su 계저명을 통해 로그인 가능
                   cd ~ 을 하고 pwd를 하면 위에서 설명했던
                   /home/계정명인 /home/test 를 확인할 수 있습니다.

vi -> 리눅스 터미널에서 사용하는 편집기
      사용법) vi 편집할파일명
      shift + i: 커서 맨 앞으로 이동하기
      shift + a: 커서 맨 뒤로 이동하기

gcc -> 리눅스 전용 컴파일러 모음중 C 컴파일러에 해당함
       사용법 1) gcc 컴파일할코드
                 실행시 ./a.out
       사용법 2) gcc -o 실행파일명 컴파일할코드
                 실행시 ./실행파일명

rm -> 삭제 명령어
      사용법 1) rm 삭제할파일명
      사용법 2) rm -rf 디렉토리명
      주의할 점) rm -rf /
                 이렇게 하면 재설치 ^^;;;
                 어차피 재설치를 해야하는 상황이라면 한 번 재미삼아 해보는것도 좋습니다.
                 돌리면 1분내로 컴퓨터가 알아서 정지하는 것을 볼 수 있습니다.
```





