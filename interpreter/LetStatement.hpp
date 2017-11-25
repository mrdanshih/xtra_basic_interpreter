//
// Created by Daniel Shih on 7/9/17.
//

#ifndef BUMPKININTERPRETER_LETSTATEMENT_HPP
#define BUMPKININTERPRETER_LETSTATEMENT_HPP

#include "Statement.hpp"
#include "ProgramState.hpp"
#include "Type.hpp"

class LetStatement: public Statement
{
public:
    //Set a variable to an int
    LetStatement(std::string variableName, int value);

    //Set a variable to the value of another variable
    LetStatement(std::string variableName, std::string otherVariable);

    virtual void execute(ProgramState& state) const override;

private:
    Type rValueType;
    std::string variableName;
    std::string otherVariableName;
    int variableValue;
};


#endif //BUMPKININTERPRETER_LETSTATEMENT_HPP