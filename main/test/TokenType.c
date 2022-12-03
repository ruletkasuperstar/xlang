/**
 * @file TokenType.c
 * @author ruletkasuperstar
 * @brief Types of tokens
 * 
 * @date 03.12.2022
 * @copyright ruletkasuperstar
 * 
 * Made with visual studio and g++
 */

/**
 * @enum TOKEN_TYPES
 * @brief All tokens types
 */
const enum TOKEN_TYPES
{
  NUMBER_LITTERAL = 0,
  CHAR_LITTERAL,
  STRING_LITTERAL,
  BOOLEAN_LITTERAL,
  LINE_COMMENT,
  BLOCK_COMMENT,
  VARIABLE_DEFINITION,
  CONSTANT_DEFINITION,
  OPERATOR,
  IF_STATEMENT,
  CYCLE_STATEMENT,
  FUNCTION_DEFINITION,
  CLASS_DEFINITION,
  STRUCTURE_DEFINITION,
  NAMESPACE_DEFINITION,
  OPEN_BRACKET,
  CLOSE_BRACKET,
  WHITE_SPACE,
  BREAK_LINE,
  END_OF_FILE
};