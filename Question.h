//
// Created by Adriano on 28-Apr-19.
//

#ifndef CPPMATHGAME_QUESTION_H
#define CPPMATHGAME_QUESTION_H


class Question {
private:
    int value1;
    int value2;
    char op;

public:
    /**
     *
     * @param value1
     * @param value2
     * @param op
     */
    Question(int value1, int value2, char op);

    /**
     * Displays the Question
     */
    void showQuestion();

    /**
     * Checks if a given response is correct
     * @param response The response given by the user
     * @return true if the response is correct, false otherwise
     */
    bool checkAnswer(int response);

};


#endif //CPPMATHGAME_QUESTION_H