#include <bits/stdc++.h>
using namespace std;

#define deb(x) cerr << #x << ": ", _print(x), cerr << nline

inline void _print(int x) { cerr << x; }
inline void _print(long long x) { cerr << x; }
inline void _print(bool x) { cerr << x; }
inline void _print(char x) { cerr << x; }
inline void _print(string x) { cerr << x; }
inline void _print(double x) { cerr << x; }
inline void _print(long double x) { cerr << x; }
template <typename T, typename V> void _print(pair<T, V> p);
template <typename T> void _print(vector<T> v);
template <typename T> void _print(multiset<T> m);
template <typename T> void _print(set<T> s);
template <typename T, typename V> void _print(map<T, V> m);
template <typename T, typename V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ", ";
  _print(p.second);
  cerr << "}";
}
template <typename T> void _print(vector<T> v) {
  cerr << '[';
  for (T i : v) {
    _print(i);
    cerr << ' ';
  }
  cerr << ']';
}
template <typename T> void _print(set<T> s) {
  cerr << '[';
  for (T i : s) {
    _print(i);
    cerr << ' ';
  }
  cerr << ']';
}
template <typename T> void _print(multiset<T> m) {
  cerr << '[';
  for (T i : m) {
    _print(i);
    cerr << ' ';
  }
  cerr << ']';
}
template <typename T, typename V> void _print(map<T, V> m) {
  cerr << '[';
  for (auto i : m) {
    _print(i);
    cerr << ' ';
  }
  cerr << ']';
}
