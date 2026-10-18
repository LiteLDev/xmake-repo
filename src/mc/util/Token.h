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

#if defined(LL_PLAT_A) // @header-generator platform
    using List = std::vector<Token>;

#else // @header-generator platform
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>  mText;
    ::ll::UntypedStorage<4, 4>              mField_ab64b0a3;
    ::ll::TypedStorage<4, 4, ::Token::Type> mType;
    ::ll::TypedStorage<1, 1, bool>          mIsDefault;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6cfa59;
    union {
        ::ll::UntypedStorage<4, 4> mUnk773835;
        ::ll::UntypedStorage<1, 1> mUnkdd232c;
    };
    ::ll::UntypedStorage<4, 4> mUnk325bca;
    ::ll::UntypedStorage<1, 1> mUnk7bb1f0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Token& operator=(Token const&);
    Token(Token const&);
    Token();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Token(std::string const&);

    MCNAPI std::string const& getText(std::string const&) const;
#else // @header-generator platform
    MCNAPI explicit Token(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<Token> tokenize(std::string const&);
#else // @header-generator platform
    MCNAPI static ::std::vector<::Token> tokenize(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND
};
