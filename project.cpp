#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "=== QUIZ GAME ===\n";

    cout << "\n1. What is the capital of Nepal?\n";
    cout << "1. Pokhara\n2. Kathmandu\n3. Biratnagar\n4. Butwal\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n2. Which language is used for OOP?\n";
    cout << "1. C++\n2. HTML\n3. SQL\n4. CSS\n";
    cin >> answer;
    if (answer == 1) score++;

    cout << "\n3. Who developed C++?\n";
    cout << "1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n";
    cin >> answer;
    if (answer == 3) score++;

    cout << "\n4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n5. What is the largest ocean?\n";
    cout << "1. Atlantic\n2. Indian\n3. Pacific\n4. Arctic\n";
    cin >> answer;
    if (answer == 3) score++;

    cout << "\n6. Who wrote Romeo and Juliet?\n";
    cout << "1. Charles Dickens\n2. William Shakespeare\n3. Mark Twain\n4. Leo Tolstoy\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n7. Which gas do plants absorb during photosynthesis?\n";
    cout << "1. Oxygen\n2. Carbon Dioxide\n3. Nitrogen\n4. Hydrogen\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n8. What is the square root of 64?\n";
    cout << "1. 6\n2. 7\n3. 8\n4. 9\n";
    cin >> answer;
    if (answer == 3) score++;

    cout << "\n9. Which country invented paper?\n";
    cout << "1. India\n2. China\n3. Egypt\n4. Greece\n";
    cin >> answer;
    if (answer == 2) score++;

    cout << "\n10. Which is the smallest prime number?\n";
    cout << "1. 0\n2. 1\n3. 2\n4. 3\n";
    cin >> answer;
    if (answer == 3) score++;

    cout << "\n=== QUIZ FINISHED ===\n";
    cout << "Your Score: " << score << "/10\n";

    if (score >= 8)
        cout << "Excellent Performance!\n";
    else if (score >= 5)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}
