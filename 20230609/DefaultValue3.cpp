#include <iostream>

int BoxVolume(int length, int width=1, int height=1);

int main() {
  std::cout<<"[3,3,3] : "<<BoxVolume(3, 3, 3)<<"\n";
  std::cout<<"[5,5,D] : "<<BoxVolume(5,5)<<"\n";
  std::cout<<"[7,D,D] : "<<BoxVolume(7)<<"\n";
  std::cout<<"[D,D,D] : "<<BoxVolume(1)<<"\n";
  
}
int BoxVolume(int length, int width, int height)
{
  return length * width * height;
}