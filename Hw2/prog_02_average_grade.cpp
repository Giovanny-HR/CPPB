//
// Created  on 13-Sep-22.
//

#include <iostream>
#include <vector>

namespace st = std;

float getAverage (st::vector <float> numbers) {
    auto sum = 0.;

    for (auto number: numbers) {
        sum += number;
    }

    return sum / numbers.size ();
}

int main () {
    auto grade = 0.;
    auto grades = st::vector <float> ();

    st::cout << "Geef cijfers (negatief is stoppen)" << '\n';

    while (true) {
        st::cout << "Cijfer nr. " << grades.size () + 1 << ": ";
        st::cin >> grade;

        if (grade < 0) {
            break;
        }
        else {
            grades.push_back (grade);
        }
    }

    st::cout << "Het gemiddelde is: " << getAverage (grades) << '\n';

    return 0;
}