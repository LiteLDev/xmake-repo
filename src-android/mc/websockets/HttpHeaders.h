#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
// clang-format on

class HttpHeaders {
public:
    // HttpHeaders inner types define
    enum class ParseState : int {
        PS_PROCESS_STATUS_LINE = 0,
        PS_STATUS_LINE_DONE    = 1,
        PS_NEW_FIELD           = 2,
        PS_NAME                = 3,
        PS_VALUE               = 4,
        PS_ADD_FIELD           = 5,
        PS_PROCESS_FIELDS      = 6,
        PS_DONE                = 7,
        PS_ABORT               = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mHeaders;
    ::ll::TypedStorage<8, 24, std::string>                        mStatusLine;
    ::ll::TypedStorage<4, 4, ::HttpHeaders::ParseState>           mParseState;
    ::ll::TypedStorage<8, 24, std::string>                        mParsedName;
    ::ll::TypedStorage<8, 24, std::string>                        mParsedValue;
    ::ll::TypedStorage<8, 8, ulong>                               mCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getHeader(std::string const&, std::string&) const;

    MCNAPI ~HttpHeaders();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
