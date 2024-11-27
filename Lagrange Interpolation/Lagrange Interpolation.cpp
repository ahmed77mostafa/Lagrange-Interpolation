#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float lagrange(float x, pair<float, float>p1, pair<float, float>p2);

int main()
{
    pair<float, float> p1, p2;
    float x;
    cin >> x;
    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cout << setprecision(x) << lagrange(x, p1, p2);
}

float lagrange(float x, pair<float, float>p1, pair<float, float>p2) 
{
    float right = p1.second * ((x - p2.first) / (p1.first - p2.first));
    float left = p2.second * ((x - p1.first) / (p2.first - p1.first));
    return right + left;
}
