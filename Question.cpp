//
// Created by Adriano on 28-Apr-19.
//

#include <iostream>
#include "Question.h"

/**
 * The Question model, so we can easily generate different questions
 * @author Adriano Marinho
 */

Question::Question(int value1, int value2, char op) {
    this->value1 = value1;
    this->value2 = value2;
    this->op = op;

    // little trick to generate easy integer divisions
    if (op == '/'){
        this->value1 = this->value1 * this->value2;
    }
}

void Question::showQuestion() {
    std::cout << "What is " << this->value1 << " " << this->op << " " << this->value2 << "?" << std::endl;
}

bool Question::checkAnswer(int response) {
    bool retValue = false;

    switch(this->op){
            default:
            case '+':
            if (response == (this->value1 + this->value2))
            retValue = true;
            break;
            case '-':
            if (response == (this->value1 - this->value2))
            retValue = true;
            break;
            case '*':
            if (response == (this->value1 * this->value2))
            retValue = true;
            break;
            case '/':
            if (response == (this->value1 / this->value2))
            retValue = true;
            break;
    }

        return retValue;

}