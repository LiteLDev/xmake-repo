#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class HttpHeaders {
public:
    // HttpHeaders inner types define
    enum class ParseState : int {
#if defined(LL_PLAT_A) // @header-generator platform
        PS_PROCESS_STATUS_LINE = 0,
        PS_STATUS_LINE_DONE    = 1,
        PS_NEW_FIELD           = 2,
        PS_NAME                = 3,
        PS_VALUE               = 4,
        PS_ADD_FIELD           = 5,
        PS_PROCESS_FIELDS      = 6,
        PS_DONE                = 7,
        PS_ABORT               = 8,
#else // @header-generator platform
        ProcessStatusLine = 0,
        StatusLineDone    = 1,
        NewField          = 2,
        Name              = 3,
        Value             = 4,
        AddField          = 5,
        ProcessFields     = 6,
        Done              = 7,
        Abort             = 8,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mHeaders;
    ::ll::TypedStorage<8, 24, std::string>                        mStatusLine;
    ::ll::TypedStorage<4, 4, ::HttpHeaders::ParseState>           mParseState;
    ::ll::TypedStorage<8, 24, std::string>                        mParsedName;
    ::ll::TypedStorage<8, 24, std::string>                        mParsedValue;
    ::ll::TypedStorage<8, 8, ulong>                               mCount;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk322ef0;
    ::ll::UntypedStorage<8, 32> mUnk753f06;
    ::ll::UntypedStorage<4, 4>  mUnk283a8f;
    ::ll::UntypedStorage<8, 32> mUnkdd9fc0;
    ::ll::UntypedStorage<8, 32> mUnkc407e8;
    ::ll::UntypedStorage<8, 8>  mUnk538f94;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    HttpHeaders& operator=(HttpHeaders const&);
    HttpHeaders(HttpHeaders const&);
    HttpHeaders();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getHeader(std::string const&, std::string&) const;

    MCNAPI ~HttpHeaders();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool getHeader(::std::string const& name, ::std::string& outValue) const;
#endif // @header-generator platform
    // NOLINTEND
};
