/**
 * @author ruletkasuperstar
 * @date 05.12.2022
 * @copyright ruletkasuperstar
 * 
 * This file contains base strcut for creating
 * build-in tokens.
 * 
 * _white_space_ - ' '
 * _line_comment_ - // any text
 * _block_comment - / any text /
 * _identifier_ - int8, bool, if
 * _operator_ - +, - /, =
 * _open_bracket_ - {, [, (
 * _close_bracket_ - }, ], )
 */cmd

#define __tokens_count__ 7

/**
 * @name Token
 * @struct
 * @author ruletkasuperstar
 * @date 05.12.2022
 * @brief Create token with this struct
 * 
 * @details - char* __Token_name is a name of current token.
 * @details - char* __Token_value is a value of current token.
 */
typedef struct
{
  char* __Token_name;
  char* __Token_value;
} Token;