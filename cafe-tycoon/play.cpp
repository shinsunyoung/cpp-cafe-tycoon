#define UP 0x48
#define DOWN 0x50
#define LEFT 0x4b
#define RIGHT 0x4d

#include "main.h"

int rank_im = 1000; // 순위 ( 이벤트 2를 위해)
int money = 10000;
int month_see = 1; // 보여지는 month
int month_nonesee = 0;

int plus_money = 0; // 수익

int have_menu[] = { 1, 0, 0, 0, 0 };
int menu_count = 0; // 현재 메뉴
int menu_today = 0; // 오늘 메뉴 개발을 했음?

string sale_menu[] = { "아메리카노", "카페라떼", "생과일주스", "초콜릿밀크", "딸기라떼" };
int sale_menu_price[] = { 2000, 2500, 3000, 4500, 5000 };

string employ[] = { "꼬맹이", "찔찔이", "보통이", "똑또기", "엘릿" };
int employ_plus[] = { 0, 2, 3, 4, 5 };
int employ_count = 0; // 현재 내가 가지고 있는 직원으로도 사용 가능(배열 인덱스)

int cout_length = 65;

int customer[] = { 5, 10, 15, 20 };

int today_menu_price = sale_menu_price[menu_count];

int event_buff = 1;

string loading[8] = { "□□□□□□□" ,  "■□□□□□□" ,  "■■□□□□□" ,  "■■■□□□□" ,  "■■■■□□□" ,  "■■■■■□□" ,  "■■■■■■□" ,  "■■■■■■■" };

int money_length() {
	int i = 1, num_len = 1;

	while (money >= i) {
		i *= 10;
		num_len++;
	}

	if (money == 0) num_len++;

	return cout_length - num_len;
}

int rank_im_length() {
	int i = 1, num_len = 1;

	while (rank_im >= i) {
		i *= 10;
		num_len++;
	}

	if (rank_im == 0) num_len++;

	return num_len;
}

int customer_num_length(int count) {
	int i = 1, num_len = 1;

	while (count >= i) {
		i *= 10;
		num_len++;
	}

	if (count == 0) num_len++;

	return num_len;
}

int all_sell_length(int price) {


	int sell_length = 0;

	if (price < 100000) {
		sell_length = 5;
	}
	else {
		sell_length = 6;
	}

	return sell_length;
}

void ending() {
	rank_im = 1000 - (money / 120);
	if (rank_im < 1) rank_im = 1;

	system("cls");
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "              최종 랭크" << rank_im << " 위                                 " << endl;
	cout << "              최종 자본" << money << "원                                    " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	cout << "                                                                            " << endl;
	system("pause");

	if (rank_im == 1) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "            이것봐요 점장님! 오늘도 저희 카페가 TV에 나왔어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "            이것봐요 점장님! 오늘도 저희 카페가 TV에 나왔어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "           카페를 개업한지 엊그제 같은데 벌써 전국 1등 카페라니 ... " << endl;
		cout << "                      정말 너무너무 감격스러워요 ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "            이것봐요 점장님! 오늘도 저희 카페가 TV에 나왔어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           카페를 개업한지 엊그제 같은데 벌써 전국 1등 카페라니 ... " << endl;
		cout << "                      정말 너무너무 감격스러워요 ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                  " << cafe_name << "가(이) 이토록 발전할줄이야! " << endl;
		cout << "                앞으로도 이대로만 쭉 운영하면 세계 1등 카페도                    " << endl;
		cout << "                문제 없을거라고 확신해요! 점장님 최고!                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");


		system("cls");

		GRAY cout << "            이것봐요 점장님! 오늘도 저희 카페가 TV에 나왔어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           카페를 개업한지 엊그제 같은데 벌써 전국 1등 카페라니 ... " << endl;
		cout << "                      정말 너무너무 감격스러워요 ...                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                  " << cafe_name << "가(이) 이토록 발전할줄이야! " << endl;
		cout << "                앞으로도 이대로만 쭉 운영하면 세계 1등 카페도                    " << endl;
		cout << "                문제 없을거라고 확신해요! 점장님 최고!                      " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                                                                            " << endl;
		cout << "              　만족도 100%!  대 만족이에요 ( >0< )b             " << endl;
		cout << "            그럼 저는 해외 분기점 제의가 와서 미팅 가볼께요!                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else if (rank_im < 100) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "         이것봐요 점장님!  저희 카페가 100위 안에 들었어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "         이것봐요 점장님!  저희 카페가 100위 안에 들었어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "           1등까지 얼마 안남았다는게 느껴지네요! " << endl;
		cout << "      마침 금방 2호점을 하고 싶다는 카페에서 연락이 왔어요!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "         이것봐요 점장님!  저희 카페가 100위 안에 들었어요!              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "           1등까지 얼마 안남았다는게 느껴지네요! " << endl;
		cout << "      마침 금방 2호점을 하고 싶다는 카페에서 연락이 왔어요!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "       " << cafe_name << "도, 점장님도 모두 앞으로도 잘 부탁드려요! " << endl;
		cout << "                  만족도 70%! 만족스러워요!           " << endl;
		cout << "          앞으로 더 좋은 카페를 만들어봐요! (^_^)o    " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else if (rank_im < 500) {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "        흠 ... 성공한 카페는 아니지만 언젠간 성공할 날이 오겠죠?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "        흠 ... 성공한 카페는 아니지만 언젠간 성공할 날이 오겠죠?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "               조금만 더 전략을 잘 짜볼까요??  " << endl;
		cout << "       그래도 단골 손님들은 꾸준히 와서 나쁘지는 않네요!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY cout << "        흠 ... 성공한 카페는 아니지만 언젠간 성공할 날이 오겠죠?            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "               조금만 더 전략을 잘 짜볼까요??  " << endl;
		cout << "       그래도 단골 손님들은 꾸준히 와서 나쁘지는 않네요!                     " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                " << cafe_name << "! 차차 좋아질거에요! " << endl;
		cout << "                  만족도 50%! 그냥 그렇지만           " << endl;
		cout << "            카페 운영방법을 조금만 바꿔볼까요?? 'v'/    " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;

		system("pause");
		exit(0);
	}

	else {
		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                              웽~~~~~ 웽~~~~~                               " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		system("cls");
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		GRAY 		cout << "                              웽~~~~~ 웽~~~~~                               " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		WHITE cout << "                     파리만 날리네요 ... 만족도 0...  " << endl;
		cout << "                   저 " << cafe_name << " 퇴사하겠습니다(-_-)...                     " << endl;
		cout << "                                                                              " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		cout << "                                                                            " << endl;
		system("pause");

		exit(0);
	}

}

void sell() {
	for (int g = 0; g < 8; g++) {

		system("cls");

		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                           `                            ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                    `                                                   ■" << endl;
		cout << "■                                    `           `                       ■" << endl;
		cout << "■                                                                `       ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■           `               판매중 : " << loading[g] << "         `            ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                      `                              `                  ■" << endl;
		cout << "■                                      `                                 ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                 `                                      ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

		Sleep(300);
		system("cls");

		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                           `                            ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                      `                                                 ■" << endl;
		cout << "■                                     `             `                    ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                   `       판매중 : " << loading[g] << "    `                 ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                    `                   `                               ■" << endl;
		cout << "■                                                 `         `            ■" << endl;
		cout << "■                             `                                          ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

		Sleep(300);

	} // for문!
}

void sell_result() {

	int sell_result = ((customer[month_nonesee] + employ_plus[employ_count]) * today_menu_price) * event_buff;
	int customer_num = (customer[month_nonesee] + employ_plus[employ_count]);


	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                            @ 오늘의 수익 @                             ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                       온 손님의 수 : " << customer_num << " 명"; cout.width(34 - customer_num_length(customer_num)); cout.fill(' '); cout << "■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                       오늘의 메뉴 가격 : " << today_menu_price << "                          ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                       총 수익 :  " << sell_result; cout.width(40 - all_sell_length(sell_result)); cout.fill(' '); cout << "■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                      아무 키나 눌러 넘어갑니다.                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	month_nonesee += 1;
	month_see += 3;
	event_buff = 1;
	money += sell_result;
	plus_money = sell_result;

	_getch();

	if (month_nonesee == 4) ending();

}

void event_1() {
	int answer;

	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                       ** 점장님을 위한 퀴즈 **                         ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                     우리 카페의 이름은 무엇일까요?                     ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                             1. 동동카페                                ■" << endl;
	cout << "■                             2. 모두의 카페                             ■" << endl;
	cout << "■                             3. " << cafe_name;  cout.width(42 - cafe_name.length()); cout.fill(' '); cout << "■" << endl;
	cout << "■                             4. 나만의 카페                             ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                            답을 입력해주세요!                          ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	fflush(stdin);
	cout << "답 : ";
	cin >> answer;

	if (answer == 3) {
		int i = 0;
		while (i < 3) {
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
			cout << "■                            정답입니다!                                 ■" << endl;
			cout << "■                .  수익의 1.5배를 더 얻게 됩니다   '                    ■" << endl;
			cout << "■                      잠시후 판매를 시작합니다                          ■" << endl;
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
			Sleep(400);

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
			cout << "■                            정답입니다!                                 ■" << endl;
			cout << "■                '  수익의 1.5배를 더 얻게 됩니다                        ■" << endl;
			cout << "■                      잠시후 판매를 시작합니다      '                   ■" << endl;
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
			Sleep(400);
			i++;
		}
		event_buff = 1.5;
	}

	else {
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
		cout << "■                      _      -     -     -                              ■" << endl;
		cout << "■                -                              -                        ■" << endl;
		cout << "■                            오답입니다 ...          -                   ■" << endl;
		cout << "■                -  아직 완벽한 점장님이 되지 않으셨군요   -             ■" << endl;
		cout << "■                      잠시후 판매를 시작합니다                          ■" << endl;
		cout << "■                   -                             -                      ■" << endl;
		cout << "■                       -     -       -    -                             ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

		Sleep(3000);
	}

}
void event_2() {

	int i = 0;
	while (i < 3) {
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
		cout << "■                .        [ 랭킹 500위 이상 ]                            ■" << endl;
		cout << "■                             축하선물!!                                 ■" << endl;
		cout << "■                .   20,000원의 축하금을 받았습니다!   '                 ■" << endl;
		cout << "■                       잠시후 판매를 시작합니다                         ■" << endl;
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
		Sleep(400);

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
		cout << "■                '        [ 랭킹 500위 이상 ]                            ■" << endl;
		cout << "■                             축하선물!!                                 ■" << endl;
		cout << "■                '   20,000원의 축하금을 받았습니다!                     ■" << endl;
		cout << "■                       잠시후 판매를 시작합니다      '                  ■" << endl;
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
		Sleep(400);
		i++;
	}


}

void sell_day() {
	if (month_nonesee == 1) event_1();
	else if (rank_im < 500) event_2();
	sell();
	sell_result();
}


void devel_menu() { // 2. 메뉴 개발
	menu_count++;
	today_menu_price = sale_menu_price[menu_count];
	int i = 0;
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
		cout << "■                   " + sale_menu[menu_count] + "로 업그레이드 되었습니다!"; cout.width(30 - sale_menu[menu_count].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■             " << sale_menu_price[menu_count] << " 원의 가격으로 메뉴를 판매합니다!                      ■" << endl;
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
		cout << "■                   " + sale_menu[menu_count] + "로 업그레이드 되었습니다!"; cout.width(30 - sale_menu[menu_count].length()); cout.fill(' '); cout << "■" << endl;
		cout << "■                .                                                       ■" << endl;
		cout << "■             " << sale_menu_price[menu_count] << " 원의 가격으로 메뉴를 판매합니다!                      ■" << endl;
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

void employ_person() { // 3. 직원 고용
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
	int month = 0;

	int i = 10;
	int menu_num = 0; // 메뉴 선택지!!

	string menu_name[4] = { "1. 물 품 판 매", "2. 메 뉴 개 발", "3. 직 원 모 집", "4. 일 시 정 지" };
	string ischecked[4] = { "**************","","","" };

	string sysmsg = "오늘도 좋은 하루 되세요!";

	char key;

	while (true) {
		system("cls");

		rank_im = 1000 - (money / 120);

		if (rank_im < 1) rank_im = 1;

		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■"; cout.width(62); cout.fill(' ');  cout << " 경영 시작 "; YELLOW cout << month_see << " 개월 "; ORIGINAL cout << "째 ■" << endl;
		cout << "■ "; SKY_BLUE cout << "카페 [ "; YELLOW cout << cafe_name; SKY_BLUE cout << " ]"; cout.width(64 - cafe_name.length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■ "; SKY_BLUE cout << "점장 [ "; YELLOW cout << user_name; SKY_BLUE cout << " ]"; cout.width(64 - user_name.length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■ "; SKY_BLUE cout << "자본 [ "; YELLOW cout << money; SKY_BLUE cout << " ]"; cout.width(money_length()); cout.fill(' '); ORIGINAL  cout << "■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■                                                                        ■" << endl;
		cout << "■"; cout.width(63); cout.fill(' ');  cout << " 우리 카페는 전국 단위 "; YELLOW; cout.width(8 - rank_im_length()); cout.fill(' '); cout << rank_im << " 위!"; ORIGINAL cout << " ■" << endl;
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
				sell_day();
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