#include <cstring>
#include <iostream>
using namespace std;

void ShowMenu();
void NewAccount();
void In_money();
void Out_money();
void ShowAllAcount();
void CheckId();

enum make_account { MAKE = 1, IN, OUT, SHOWALL, EXIT };

const int Name_leng = 10;

typedef struct {
  int accID;
  int Money;
  char CusName[Name_leng];
} Account;

Account AccArr[100];
int AccNum = 0;

int main() {
  int choose = 0;

  while (1) {
    ShowMenu();
    cin >> choose;
    switch (choose) {
    case MAKE:
      NewAccount();
    }
  }
}

void ShowMenu() {
  cout << "----Menu----"
       << "\n";
  cout << "1. 계좌개설"
       << "\n";
  cout << "2. 입 금"
       << "\n";
  cout << "3. 출 금"
       << "\n";
  cout << "4. 계좌정보 전체 출력"
       << "\n";
  cout << "5. 프로그램 종료"
       << "\n";
  cout << "선택 : ";
}
void NewAccount() {
  char name[Name_leng];
  cout << "[계좌개설]" << endl;
  CheckId();
  cout << "이 름";
  cin >> name;
  cout << "입금액";
  cin >> name;
}
void CheckId() {
  char id[5];
  while (1) {
    cout << "계좌ID: ";
    cin >> id;
    if (strlen(id) == 4)
      break;
    else
      cout << "계좌번호 4자리 입력해 주세요." << endl;
  }
}