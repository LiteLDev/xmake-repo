#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Token {
public:
    // Token inner types define
    enum class Type : int {
        String = 0,
        Number = 1,
        Bool   = 2,
    };

    using List = std::vector<Token>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>  mText;
    ::ll::UntypedStorage<4, 4>              mField_ab64b0a3;
    ::ll::TypedStorage<4, 4, ::Token::Type> mType;
    ::ll::TypedStorage<1, 1, bool>          mIsDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    Token& operator=(Token const&);
    Token(Token const&);
    Token();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Token(std::string const&);

    MCNAPI std::string const& getText(std::string const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<Token> tokenize(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND
};
