#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ParseResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> mErrorDescription;
    ::ll::TypedStorage<4, 4, uint>        mOffset;
    ::ll::TypedStorage<4, 4, int>         mErrorCode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isError() const;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
