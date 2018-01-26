#include "question.h"
#include <cstdlib>
#include "binary.h"

using std::endl;
using std::getline;
using std::exit;
using std::string;

question::question(question const& x) :
    text(x.text),
    text_pic(x.text_pic),
    choice(x.choice),
    choice_pic(x.choice_pic),
    answer(x.answer) { }

question::question() : answer(0) { }

question& question::operator =(question const& x) {
    if(this != &x) {
        text = x.text;
        text_pic = x.text_pic;
        choice[0] = x.choice[0];
        choice[1] = x.choice[1];
        choice[2] = x.choice[2];
        choice[3] = x.choice[3];
        choice_pic[0] = x.choice_pic[0];
        choice_pic[1] = x.choice_pic[1];
        choice_pic[2] = x.choice_pic[2];
        choice_pic[3] = x.choice_pic[3];
        answer = x.answer;
    }
    return *this;
}

void question::save(std::ofstream &f) {
    binary::write(f, text);
    binary::write(f, text_pic);
    for(int i = 0; i < 4; ++i) {
        binary::write(f, choice[i]);
        binary::write(f, choice_pic[i]);
    }
    binary::write(f, answer);
}

bool question::load(std::ifstream &f) {
    if(!binary::read(f, text) || !binary::read(f, text_pic)) return false;
    for(int i = 0; i < 4; ++i) {
        if(!binary::read(f, choice[i])) return false;
        if(!binary::read(f, choice_pic[i])) return false;
    }
    return binary::read(f, answer);
}


