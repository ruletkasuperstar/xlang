#pragma once

#ifndef _STRING_
    #include <string>
#endif

namespace parser {
    class Token {
    private:
        std::string __Value__;
        std::string __TokenType__;
    public:
        Token (std::string _Value_, std::string _TokenType_)
        {
            this->__Value__ = _Value_;
            this->__TokenType__ = _TokenType_;
        }
    };
} // include Token class