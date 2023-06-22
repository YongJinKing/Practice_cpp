#include <cstring>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
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
  char accID[10];
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
  int in_money = 0;
  cout << "[계좌개설]" << endl;
  cout << "계좌번호는 4자리 입니다." << endl;
  CheckId();
  cout << "이 름: ";
  cin >> name;
  cout << "입금액: ";
  cin >> in_money;
  strcpy(AccArr[AccNum].CusName, name);
  AccArr[AccNum].Money = in_money;
  AccNum++;
}
void CheckId() {
  char id[10];
  while (1) {
    cout << "계좌ID: ";
    cin >> id;
    if (strlen(id) == 4)
      break;
    else
      cout << "계좌번호 4자리 입력해 주세요." << endl;
  }
  strcpy(AccArr[AccNum].accID, id);
}