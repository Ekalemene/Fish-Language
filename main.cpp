#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath> // Для математических функций

using namespace std;

// Функция для проверки на наличие матерных слов
bool containsBadWords(const string& text) {
  string badWords[] = {"fuck", "shit", "bitch", "asshole", "damn", "hell", "cunt",
                       "бля", "сука", "пиздец", "ебать", "хуй", "жопа", "говно"};

  for (const string& badWord : badWords) {
    if (text.find(badWord) != string::npos) {
      return true;
    }
  }
  return false;
}

// Функция для вычисления факториала
int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  cout << "Welcome to Fish" << endl;
  cout << "By SmolCutiePie" << endl;
  cout << "Copyright (c) 2024 FishLang . All Rights Reserved." << endl;

  string a = "/start";
  cin >> a;

  if (a == "/start") {
    cout << "" << endl;
  } else {
    cout << "Syntax Error!" << endl;
    return 0;
  }

  while (true) {
    string b = "";
    cin >> b;

    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (containsBadWords(b)) {
      cout << "Be kinder =( Try again!" << endl;
    } else if (b == "!plus:") { // плюс
      cout << "";
      int c, d;
      cin >> c >> d;
      cout << c + d << endl;
    } else if (b == "!minus:") { // минус
      cout << "";
      int c, d;
      cin >> c >> d;
      cout << c - d << endl;
    } else if (b == "!mp:") { // умножение
      cout << "";
      int c, d;
      cin >> c >> d;
      cout << c * d << endl;
    } else if (b == "!dn:") { // деление
      cout << "";
      int c, d;
      cin >> c >> d;
      if (d != 0) {
        cout << c / d << endl;
      } else {
        cout << "I cant( Division on Zero!" << endl;
      }
    } else if (b == "?sst?") { // ShowSenTence
      cout << "";
      int e;
      cin >> e;
      cout << e << endl;
    } else if (b == "!rnd:") { // Случайное число
      cout << "";
      int min, max;
      cin >> min >> max;
      srand(time(0));
      int random = rand() % (max - min + 1) + min;
      cout << "Random Number: " << random << endl;
    } else if (b == "!ftrl:") { // Факториал
      cout << "";
      int n;
      cin >> n;
      if (n >= 0) {
        cout << "Factorial of " << n << ": " << factorial(n) << endl;
      } else {
        cout << "Error: Factorial is not defined for negative numbers!" << endl;
      }
    } else if (b == "!sqrt:") { // Квадратный корень
      cout << "";
      double x;
      cin >> x;
      if (x >= 0) {
        cout << "Square root of " << x << ": " << sqrt(x) << endl;
      } else {
        cout << "Error: Square root is not defined for negative numbers!" << endl;
      }
    } else if (b == "!pow:") { // Возведение в степень
      cout << "";
      double base, exponent;
      cin >> base >> exponent;
      cout << base << " raised to the power of " << exponent << ": " << pow(base, exponent) << endl;
    } else if (b == "!exit") {
      cout << "Bye user! :] " << endl;
      break;
    } else {
      cout << "Syntax Error!" << endl;
    }
  }

  return 0;
}
