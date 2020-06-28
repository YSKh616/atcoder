#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  vector<int> A(N);

  // 点数を格納
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }
  
  int sum = 0;

  // 合計計算
  for (int i = 0; i < N; i++)
  {
    sum += A.at(i);
  }

  int avg = 0;
  avg = sum / N;

  for (int i = 0; i < N; i++)
  {
    int diff = 0;
    if (avg - A.at(i) > 0) diff = avg - A.at(i);
    else diff = (avg - A.at(i)) * (-1);
    cout << diff << endl;
  }
  
}
