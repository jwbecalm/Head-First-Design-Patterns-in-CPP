#ifndef NOCOMMAND_H
#define NOCOMMAND_H

#include "Command.h"
#include <iostream>

using namespace std;
// null object
class NoCommand: public Command {
    public:
    NoCommand(){
    }
    void execute() override {/* do nothing*/ }
    
    void undo() override {/* do nothing*/ }
    
};

#endif  // NOCOMMAND_H