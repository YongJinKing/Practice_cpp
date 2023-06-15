#include <iostream>

void swap(int *a, int *b) {
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}
void swap(char *a, char *b) {
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
void swap(double *a, double *b) {
  double temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int num1 = 20, num2 = 30;
  swap(&num1, &num2);//참조자를 사용하여 주소 할당
  std::cout << num1 << " " << num2 << std::endl;

  char ch1 = 'A', ch2 = 'Z';
  swap(&ch1, &ch2);
  std::cout << ch1 << " " << ch2 << std::endl;

  double db1 = 1.111, db2 = 5.555;
  swap(&db1, &db2);
  std::cout << db1 << " " << db2 << std::endl;
}