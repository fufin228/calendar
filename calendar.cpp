#include <stdio.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

struct Event {
    string NameEvents;
    string DescriptionEvents;
    int day, month, year;
    int hour, minutes;
};

int main() {
    vector<Event> events;
    char addAnother = 'y';
    char editChoice;

    // Добавление событий
    while (addAnother == 'y' || addAnother == 'Y') {
        Event event1;

        cout << "Введите имя события: ";
        getline(cin, event1.NameEvents);
        cout << "Введите описание события: ";
        getline(cin, event1.DescriptionEvents);
        cout << "Введите день события: ";
        cin >> event1.day;
        cout << "Введите месяц события: ";
        cin >> event1.month;
        cout << "Введите год события: ";
        cin >> event1.year;
        cout << "Введите часы напоминания: ";
        cin >> event1.hour;
        cout << "Введите минуты напоминания: ";
        cin >> event1.minutes;
        
        events.push_back(event1);

        cout << "Хотите добавить еще одно событие? (y/n): ";
        cin >> addAnother;
        cin.ignore();
    }

    for (size_t i = 0; i < events.size(); ++i) {
        cout << "\nСобытие " << i + 1 << ":\n";
        cout << "Название: " << events[i].NameEvents << endl;
        cout << "Описание: " << events[i].DescriptionEvents << endl;
        cout << "Дата: " << events[i].day << "." << events[i].month << "." << events[i].year << endl;
        cout << "Время: " << events[i].hour << ":" << events[i].minutes << endl;

        cout << "Желаете редактировать это событие? (y/n): ";
        cin >> editChoice;
        cin.ignore();

        if (editChoice == 'y' || editChoice == 'Y') {
            cout << "Введите новое имя события: ";
            getline(cin, events[i].NameEvents);
            cout << "Введите новое описание события: ";
            getline(cin, events[i].DescriptionEvents);
            cout << "Введите новый день события: ";
            cin >> events[i].day;
            cout << "Введите новый месяц события: ";
            cin >> events[i].month;
            cout << "Введите новый год события: ";
            cin >> events[i].year;
            cout << "Введите новые часы напоминания: ";
            cin >> events[i].hour;
            cout << "Введите новые минуты напоминания: ";
            cin >> events[i].minutes;
            cin.ignore();
        }
    }

    cout << "\nОбновленная информация о всех событиях:\n";
    for (size_t i = 0; i < events.size(); ++i) {
        cout << "Событие " << i + 1 << ":\n";
        cout << "Название: " << events[i].NameEvents << endl;
        cout << "Описание: " << events[i].DescriptionEvents << endl;
        cout << "Дата: " << events[i].day << "." << events[i].month << "." << events[i].year << endl;
        cout << "Время: " << events[i].hour << ":" << events[i].minutes << endl;
        cout << "--------------------\n";
    }

    return 0;
}
