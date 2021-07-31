//
// Created by 이인성 on 2021/07/31.
//

#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T, N, M;
  scanf("%d", &T);
  for(int i=0; i<T; i++) {
    scanf("%d%d", &N, &M);
    vector<vector<int>> country;
    country.resize(N);
    for(int j=0; j<N; j++) {
      country[j].resize(N, 0);
    }
    for(int j=0; j<M; j++) {
      int index1, index2;
      scanf("%d%d", &index1, &index2);
      country[index1-1][index2-1]++;
    }
//    for(int i=0; i<N; i++) {
//      for(int j=0; j<N; j++) {
//        printf("%d ", country[i][j]);
//      }
//      printf("\n");
//    }
    printf("%d\n", N-1);
  }
  return 0;
}