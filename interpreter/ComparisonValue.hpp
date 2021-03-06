#ifndef BUMPKININTERPRETER_COMPARISONVALUE_HPP
#define BUMPKININTERPRETER_COMPARISONVALUE_HPP

#include <string>
#include "enumerations/VariableType.hpp"

class ComparisonValue {
    // For if-statement (which supports constants or variable names)
    // Stores either an integer or a string and contains the type of value used to compare
public:
    ComparisonValue(int constant);
    ComparisonValue(std::string variable);

    VariableType getType();    // Return the type of the ComparisonValue
    int getConstantValue();    // Return the integer constant stored
    std::string getVariableNameValue();    // Return the variable name stored

private:
    int constantValue;
    std::string variable;
    VariableType variableType;
};


#endif //BUMPKININTERPRETER_COMPARISONVALUE_HPP
