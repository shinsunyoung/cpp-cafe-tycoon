#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#include "main.h"

int money = 100000;
int month;

int have_menu[] = { 1, 0, 0, 0, 0 };
int menu_count = 0;
int menu_today = 0; // 오늘 메뉴 개발을 했음?

int employ_count = 0; // 현재 내가 가지고 있는 직원으로도 사용 가능(배열 인덱스)


string today_menu = "";
int today_menu_price = 0;

int money_length() {
	int i = 1, num_len = 0;

	while (money > i) {
		i *= 10;
		num_len++;
	}

	return num_len;
}

void devel_menu() { // 2. 메뉴 개발
	string sale_menu[] = { "아메리카노", "카페라떼", "생과일주스", "초콜릿밀크", "딸기라떼" };
	int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };
	int my_num = -1;

	while (true) { // 없는 메뉴 선택 방지
		srand((unsigned int)time(NULL));
		my_num = rand() % 5;

		if (have_menu[my_num] == 0) {
			have_menu[my_num] = 1;
			break;
		}
	}

	menu_today = 1;
	int i = 0;
	while(i < 6) {
		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                         '     '     '                                  ■" << endl;
		cout << "■                    '                     '                             ■" << endl;
		cout << "■                                             '                          ■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■                   " + sale_menu[my_num] + "이(가) 개발되었습니다!"; cout.width(33 - sale_menu[my_num].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■                                               .                        ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                       .     .       .    .                             ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		Sleep(100);

		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                         .     .     .                                  ■" << endl;
		cout << "■                    .                     .                             ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                '                                                       ■" << endl;
		cout << "■                   " + sale_menu[my_num] + "이(가) 개발되었습니다!"; cout.width(33 - sale_menu[my_num].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                '                                                       ■" << endl;
		cout << "■                                               '                        ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                                             '                          ■" << endl;
		cout << "■                       '     '       '    '                             ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		Sleep(100);
		i++;
	}
	menu_count++;
}

void employ_person() { // 3. 직원 고용
	string employ[] = { "꼬맹이", "찔찔이", "보통이", "똑또기", "엘릿" };
	int employ_plus[] = { 0, 2, 3, 4, 5 };

	int i = 0;

	employ_count++;
	while (i < 6) {
		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                         '     '     '                                  ■" << endl;
		cout << "■                    '                     '                             ■" << endl;
		cout << "■                                             '                          ■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■                   " + employ[employ_count] + "이(가) 채용되었습니다!"; cout.width(33 - employ[employ_count].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■             " << employ_plus[employ_count] << " 명의 사람이 메뉴를 추가로 구매합니다!                    ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                       .     .       .    .                             ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		Sleep(100);
		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                         .     .     .                                  ■" << endl;
		cout << "■                    .                     .                             ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                '                                                       ■" << endl;
		cout << "■                   " + employ[employ_count] + "이(가) 채용되었습니다!"; cout.width(33 - employ[employ_count].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■             " << employ_plus[employ_count] << " 명의 사람이 메뉴를 추가로 구매합니다!                    ■" << endl;
		cout << "■                                             .                          ■" << endl;
		cout << "■                                             '                          ■" << endl;
		cout << "■                       '     '       '    '                             ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		Sleep(100);
		i++;
	}
}

void pausing() { // 4. 일시정지
	char key;

	while (1)
	{
		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                   - ⓟ * ⓐ * ⓤ * ⓢ * ⓔ * ⓓ -                      ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                      아무 키나 눌러 해제합니다                         ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		Sleep(100);
		key = _getch();
		if (key > 0)
			break;
	}
}

void play() { // 중간 제출 용으로 한 판의 분량만 만듦!
	month = 0;
	int rank = 1000; // 순위
	int i = 10;
	int menu_num = 0; // 메뉴 선택지!!

	string menu_name[4] = { "1. 물 품 판 매", "2. 메 뉴 개 발", "3. 직 원 모 집", "4. 일 시 정 지" };
	string ischecked[4] = { "**************","","","" };

	string sysmsg = "오늘도 좋은 하루 되세요!";

	char key;

	string sale_menu[] = { "아메리카노", "카페라떼", "생과일주스", "초콜릿라떼", "딸기라떼" };
	int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };

	string employ[] = { "꼬맹이", "찔찔이", "보통이", "똑또기", "엘릿" };
	int employ_plus[] = { 0, 2, 3, 4, 5 };
	int employ_count = 0;

	while (true) {
		system("cls");

		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■"; cout.width(62); cout.fill(' ');  cout << " 경영 시작 "; YELLOW cout << month << " 개월 "; ORIGINAL cout << "째 ■" << endl;
		cout << "■ "; SKY_BLUE cout << "카페 [ "; YELLOW cout << cafe_name; SKY_BLUE cout << " ]"; cout.width(64 - cafe_name.length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■ "; SKY_BLUE cout << "점장 [ "; YELLOW cout << user_name; SKY_BLUE cout << " ]"; cout.width(64 - user_name.length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■ "; SKY_BLUE cout << "자본 [ "; YELLOW cout << money; SKY_BLUE cout << " ]"; cout.width(63 - money_length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■"; cout.width(63); cout.fill(' ');  cout << " 우리 카페는 전국 단위 "; YELLOW cout << rank;  ORIGINAL cout << " 위! ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■"; cout.width(43); cout.fill(' ');  GOLD cout << "system : " << sysmsg << " "; cout.width(30 - sysmsg.length()); cout.fill(' '); ORIGINAL cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                   ■                                   ■" << endl;

		if (menu_num == 0) {
			ischecked[0] = "**************";
			ischecked[1] = "              ";
			ischecked[2] = "              ";
			ischecked[3] = "              ";
		}
		else if (menu_num == 1) {
			ischecked[0] = "              ";
			ischecked[1] = "**************";
			ischecked[2] = "              ";
			ischecked[3] = "              ";
		}
		else if (menu_num == 2) {
			ischecked[0] = "              ";
			ischecked[1] = "              ";
			ischecked[2] = "**************";
			ischecked[3] = "              ";
		}
		else if (menu_num == 3) {
			ischecked[0] = "              ";
			ischecked[1] = "              ";
			ischecked[2] = "              ";
			ischecked[3] = "**************";
		}

		cout << "■          "; cout << menu_name[0] << "           ■          " << menu_name[1] << "           ■" << endl; // 1.2번 메뉴 이름
		cout << "■          "; cout << ischecked[0] << "           ■          " << ischecked[1] << "           ■" << endl; // 1.2번 체크 여부
		cout << "■                                   ■                                   ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                   ■                                   ■" << endl;
		cout << "■          "; cout << menu_name[2] << "           ■          " << menu_name[3] << "           ■" << endl;
		cout << "■          "; cout << ischecked[2] << "           ■          " << ischecked[3] << "           ■" << endl;
		cout << "■                                   ■                                   ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

		key = _getch();

		if (key == -32) { // 방향키 입력인가?
			key = _getch();

			switch (key) {
			case UP:
			case DOWN:
				if (menu_num == 0 || menu_num == 1) menu_num += 2;
				else menu_num -= 2;
				break;
			case RIGHT:
				if (menu_num == 3) menu_num = 0;
				else menu_num++;
				break;
			case LEFT:
				if (menu_num == 0) menu_num = 3;
				else menu_num--;
				break;
			default:
				break;
			}
		}
		else if (key == 0xd)
		{
			if (menu_num == 0) {
				sysmsg = "0번";
			}
			else if (menu_num == 1) { // 메뉴 개발
				if (money < 10000) sysmsg = "자본이 부족합니다!";
				else if (menu_count == 4) sysmsg = "개발할 메뉴가 없습니다!";
				else if (menu_today == 1) sysmsg = "기회를 이미 사용하였습니다!";
				else {
					devel_menu();
					money -= 10000;
				}
			}
			else if (menu_num == 2) { // 직원 모집
				if (money < 30000) sysmsg = "자본이 부족합니다!";
				else if (employ_count == 4) sysmsg = "고용할 직원이 없습니다!";
				else {
					employ_person();
					money -= 30000;
				}
			}
			else if (menu_num == 3) { // 일시 정지
				pausing();
				sysmsg = "오늘도 좋은 하루 되세요!";
			}

		}
	}

}