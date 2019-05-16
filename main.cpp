#include <iostream>
#include <vector>
#include <cstdlib>
#include "Question.h"


/**
 * This is a simple math game for grades 3 - 5
 * @author Adriano Marinho
 */
class Main {

private:
    int score;
    std::vector<Question *> questions;

public:
    void playGame(){

        // initializes the 10 questions
        for (int i = 0; i < 10; i++){
            int x = (rand() % 11) + 1;
            int y = (rand() % 11) + 1;
            int operatorId = rand() % 4;
            char op;
            switch (operatorId){
                default:
                case 0:
                    op = '+';
                    break;
                case 1:
                    op = '-';
                    break;
                case 2:
                    op = '*';
                    break;
                case 3:
                    op = '/';
                    break;
            }

            Question * question = new Question(x, y, op);
            this->questions.push_back(question);
        }

        for (int  i = 0; i < questions.size(); i++){
            Question * currentQuestion = questions[i];

            currentQuestion->showQuestion();

            int response;
            std::cin >> response;
            if (currentQuestion->checkAnswer(response)){
                std::cout << "Congratulations, your answer is correct!" << std::endl;
                score++;
            }
            else{
                std::cout << "I am sorry but your answer is wrong" << std::endl;
            }

        }

        std::cout << "Game Over, your score was: " << score << std::endl;

        // ensure the questions are deleted
        this->questions.clear();

    }

    /**
     * Repeats playGame in case the player wants to playMultipleGames
     */
    void playMultipleGames(){
        for (int i = 0; i < 10; i++)
            playGame();
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Main main = Main();
    main.playMultipleGames();
    return 0;
}