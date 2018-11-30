#include "main.h"

string user_name;
string cafe_name;

void init() { // 카페 이름, 유저 이름 설정하기
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
	cout << "■                      점장님! 이름을 알려주세요 :)                      ■" << endl;
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
	cout << "■                                                                        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	fflush(stdin);
	cout << "점장 이름 : ";
	getline(cin, user_name);
	fflush(stdin);

	if (user_name == "") user_name = "user";

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
	cout << "■                 이 예쁜 카페의 이름은 뭐라고 지으셨나요?               ■" << endl;
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
	cout << "■                                                                        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	cout << "카페 이름 : ";
	getline(cin, cafe_name);

	if (cafe_name == "") cafe_name = "cafe";

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
	cout << "■                         이제 게임을 시작할게요                         ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                         멋진 카페로 가꿔주세요!                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                     시작하려면 엔터 키를 눌러주세요                    ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■                                                                        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;

	system("pause");
}