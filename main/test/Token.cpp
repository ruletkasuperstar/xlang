/**
 * @file Token.cpp
 * @author ruletkasuperstar
 * @brief Simple member of XLANG program (Token)
 * 
 * @date 03.12.2022
 * @copyright ruletkasuperstar
 * 
 * Made with visual studio and g++
 */

#pragma once

#ifndef _STRING_
#include <string>
#endif

/**
 * @namespace Test
 * @brief Global namespace that include of modules.
 */
namespace Test {
  /**
   * @class Token
   * @brief Token entity
   */
  class Token {
  private:
    /**
     * @name __TokenType__
     * @brief Variable that contains information about Token's type
     */
    std::string __TokenType__;
    /**
     * @name __TokenValue__
     * @brief Value of token
     */
    std::string __TokenValue__;
  public:
    /**
     * @name Token
     * @brief Default constructor
     */
    Token () {}

    /**
     * @name Token
     * @brief Constructor
     * 
     * @param _TokenType_ Token's type
     * @param _TokenValue_ Token's value
     */
    Token (std::string _TokenType_, std::string _TokenValue_) {
      this->__TokenType__ = _TokenType_;
      this->__TokenValue__ = _TokenValue_;
    }

    /**
     * @name getTokenType
     * @brief Return current token's type
     * 
     * @return std::string
     */
    std::string
    getTokenType () {
      return this->__TokenType__;
    }

    /**
     * @name getTokenValue
     * @brief Return current token's value
     * 
     * @return std::string
     */
    std::string
    getTokenValue () {
      return this->__TokenValue__;
    }

    /**
     * @name setTokenType
     * @brief Set new token's type
     * 
     * @param _NewTokenType_ New type for token
     * 
     * @return void
     */
    void
    setTokenType (std::string _NewTokenType_) {
      this->__TokenType__ = _NewTokenType_;
    }

    /**
     * @name setTokenValue
     * @brief Set new token's value
     * 
     * @param _NewTokenValue_ New value for token
     * 
     * @return void
     */
    void
    setTokenValue (std::string _NewTokenValue_) {
      this->__TokenValue__ = _NewTokenValue_;
    }
  };
}