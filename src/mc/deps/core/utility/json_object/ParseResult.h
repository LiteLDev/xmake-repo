#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class ParseResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, char const*> mErrorDescription;
    ::ll::TypedStorage<4, 4, uint>        mOffset;
    ::ll::TypedStorage<4, 4, int>         mErrorCode;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnka67298;
    ::ll::UntypedStorage<4, 4> mUnka2c6ea;
    ::ll::UntypedStorage<4, 4> mUnke21952;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isError() const;
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ParseResult& operator=(ParseResult const&);
    ParseResult(ParseResult const&);
    ParseResult();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
