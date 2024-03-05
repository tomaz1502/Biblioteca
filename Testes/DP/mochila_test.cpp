#include <bits/stdc++.h>

const int MAX = 2e5;
const int MAX_CAP = 2e5 + 10;
const int INF = 2.1e9;

using namespace std;

#include "../../Codigo/DP/mochila.cpp"
#include "../minunit.h"

MU_TEST(mochila_1) {
  int n = 42;
  int cap = 150;
  for (int i = 0; i < n; ++i) {
    v[i] = 1;
    w[i] = 1;
  }

  auto answer = knapsack(n, cap);
  mu_check(true);
}

MU_TEST_SUITE(DP_mochila) {
  MU_RUN_TEST(mochila_1);
}
