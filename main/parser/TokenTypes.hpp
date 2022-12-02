#pragma once

namespace parser {
    enum TokenTypes
    {
        OPERATOR = 0,
        IF_STATEMENT,
        CYCLE_STATEMENT,
        NUMBER_LITTERAL,
        STRING_LITTERAL,
        VARIABLE_DEFINITION,
        CONSTANT_DEFINITION,
        CLASS_DEFINITION,
        NAMESPACE_DEFINITION,
        STRUCTUR_DEFINITION,
        ONE_LINE_COMMENT,
        MULTI_LINE_COMMENT
    }
}