#include "ReturnStatement.hpp"
#include "../ProgramState.hpp"

ReturnStatement::ReturnStatement(unsigned int lineNumber, std::string statementText)
    :Statement(lineNumber, statementText)
{

}
void ReturnStatement::execute(ProgramState &state) const {
    if(state.hasSavedProgramCounters()) {
        state.restoreMostRecentProgramCounter();
        Statement::execute(state);
    } else {
        throw BumpkinException("No corresponding GOSUB");
    }

}