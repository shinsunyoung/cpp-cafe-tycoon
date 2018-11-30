#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // 콘솔창의 핸들정보 받기

// ** 무채색 **
#define BLACK                SetConsoleTextAttribute(COL, 0x0000);        // 검정색
#define WHITE                SetConsoleTextAttribute(COL, 0x000f);        // 흰색
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008);        // 회색
#define ORIGINAL            SetConsoleTextAttribute(COL, 0x0007);        // 밝은 회색 (default)

// ** 원색 ** 
#define RED                   SetConsoleTextAttribute(COL, 0x000c);        // 빨간색
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);        // 노란색
#define DARK_BLUE         SetConsoleTextAttribute(COL, 0x0001);        // 파란색
#define GREEN                SetConsoleTextAttribute(COL, 0x0002);        // 녹색
#define BLUE_GREEN        SetConsoleTextAttribute(COL, 0x0003);        // 청녹색
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);        // 검붉은색
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005);        // 보라색
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006);        // 금색
#define BLUE                  SetConsoleTextAttribute(COL, 0x0009);        // 파란색
#define HIGH_GREEN       SetConsoleTextAttribute(COL, 0x000a);        // 연두색
#define SKY_BLUE           SetConsoleTextAttribute(COL, 0x000b);        // 하늘색
#define PLUM                SetConsoleTextAttribute(COL, 0x000d);        // 자주색

#include <iostream> // 입출력
#include <string> // string 관련
#include <conio.h> // get 사용
#include <windows.h> // sleep 사용
#include <cstdlib> // 랜덤값 사용
#include <ctime> // 랜덤값 사용

using namespace std;

extern string cafe_name; // 카페 이름
extern string user_name; // 유저 이름

extern int money; // 자본

extern int month; // 경영 시작 일로부터 개월 수

extern int rank; // 경영 랭킹(전국)

extern int have_menu[]; // 가지고 있는 메뉴

void intro(); // 인트로 화면
void init();  // 유저 및 카페 이름 설정
void play(); // 게임 화면