#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <fstream>

struct question {

    question();
    question(question const& x);
    question& operator = (question const& x);

    std::string text;
    std::string text_pic;
    std::string choice[4];
    std::string choice_pic[4];
    int answer;

    void save(std::ofstream& f);
    bool load(std::ifstream& f);
};

#endif // QUESTION_H
