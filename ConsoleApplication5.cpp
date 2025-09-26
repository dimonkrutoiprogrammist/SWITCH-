


/*



Пользователь с клавиатуры вводит 5 оценок
студента. Определить, допущен ли студент к экзамену.
Студент получает допуск, если его средний балл 4 балла
и выше
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");  // Перевод на русский
    int a, b, c, d, e; // Вводим переменные int, так как свитч работает только с интом.
    cout << "Оценка 1: ";
    cin >> a;
    cout << "Оценка 2: ";
    cin >> b;
    cout << "Оценка 3: ";
    cin >> c;
    cout << "Оценка 4: ";
    cin >> d;
    cout << "Оценка 5: ";
    cin >> e;

    double sred = (a + b + c + d + e) / 5.0;

    switch (static_cast<int>(sred)) { // Преобразование из double в int, с помощью оператора static_cast
    case 5:
        cout << "Допущен";
        break;
    case 4:
        cout << "Допущен";
        break;
    case 3:
    case 2:
    case 1:
        cout << "Не допущен";
        break;
    default:
        if (sred >= 4) cout << "Допущен";
        else cout << "Не допущен";
        break;
    }

    return 0;
}
*/

/*
Пользователь вводит с клавиатуры число. Если
оно четное, умножить его на три, иначе — поделить на
два. Результат вывести на экран.*/




/*
. Пользователь вводит с клавиатуры число. Если
оно четное, умножить его на три, иначе — поделить на
два. Результат вывести на экран*/
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cout << "Введите число: "; // Пользователь вводит число
    cin >> num;

    double result;

    switch (num % 2) { // Создаем свитч и проверяем делимость
    case 0:
        result = num * 3.0;
        break;
    case 1:
        result = num / 2.0; // важно: 2.0, а не 2, чтобы корректно делило
        break;
    }

    cout << "Результат: " << result << endl; //Выводим результат

    return 0; //Возвращаем значение
}











