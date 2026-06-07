#include <iostream>
#include <string>
using namespace std;

class Question {
private:
    string question;
    string option1, option2, option3, option4;
    int correctAnswer;

public:
    Question(string q, string o1, string o2, string o3, string o4, int ans) {
        question = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correctAnswer = ans;
    }

    bool askQuestion() {
        int answer;
        cout << "\n" << question << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;

        cout << "Enter your answer (1-4): ";
        cin >> answer;

        return answer == correctAnswer;
    }
};

class Quiz {
private:
    int score;
    int wrong;

public:
    Quiz() {
        score = 0;
        wrong = 0;
    }

    void startQuiz() {
               Question questions[10] = {
            Question("What is the capital of Nepal?", "Pokhara", "Kathmandu", "Biratnagar", "Butwal", 2),
            Question("Which language is used for OOP?", "C++", "HTML", "SQL", "CSS", 1),
            Question("Who developed C++?", "Dennis Ritchie", "James Gosling", "Bjarne Stroustrup", "Guido van Rossum", 3),
            Question("Which planet is known as the Red Planet?", "Earth", "Mars", "Jupiter", "Venus", 2),
            Question("What is the largest ocean?", "Atlantic", "Indian", "Pacific", "Arctic", 3),
            Question("Who wrote 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Mark Twain", "Leo Tolstoy", 2),
            Question("Which gas do plants absorb during photosynthesis?", "Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen", 2),
            Question("What is the square root of 64?", "6", "7", "8", "9", 3),
            Question("Which country invented paper?", "India", "China", "Egypt", "Greece", 2),
            Question("Which is the smallest prime number?", "0", "1", "2", "3", 3) // Correct answer is 2
        };

              for (int i = 0; i < 10; i++) {
            if (questions[i].askQuestion()) {
                cout << "Correct!\n";
                score++;
            } else {
                cout << "Wrong!\n";
                wrong++;
            }
        }

      
        cout << "\nQuiz Finished!" << endl;
        cout << "Correct Answers: " << score << endl;
        cout << "Wrong Answers: " << wrong << endl;
        cout << "Final Score: " << score << "/10" << endl;
    }
};

int main() {
    Quiz quiz;    
    quiz.startQuiz(); 
    return 0;
}
