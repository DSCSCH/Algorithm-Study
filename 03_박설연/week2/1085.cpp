﻿#include <iostream>
using namespace std;

int main(){
    int x, y, w, h, min;
    cin >> x >> y >> w >> h;
    min = x;
    if (min > y) min = y;
    if (min > w - x) min = w - x;
    if (min > h - y) min = h - y;
    cout << min;
    return 0;
}