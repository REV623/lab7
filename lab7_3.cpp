#include<iostream>

using namespace std;

int adiff(int A,int B){
  int C;
  A = A%360;
  B = B%360;
  if(A < 0){
    A += 360;
  }
  if(B < 0){
    B += 360;
  }
  if(A >= B){
    C = A-B;
  }
  if(B >= A){
    C = B-A;
  }
  if(C <= 180){
    return C;
  }else{
    return 360-C;
  }
}

int main()
{
  cout << adiff(180,270)<<" ";
  cout << adiff(210,45)<<" ";
  cout << adiff(0,360)<<" ";
  cout << adiff(10,350)<<" ";
  cout << adiff(95,260)<<" ";
  cout << adiff(90,-90)<<" ";
  cout << adiff(1000,280)<<" ";
  cout << adiff(60,244);
  return 0;
}
