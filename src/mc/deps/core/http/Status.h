#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::Http {

class Status {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>             mValue;
    ::ll::TypedStorage<8, 16, std::error_code> mError;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkd7cbd1;
    ::ll::UntypedStorage<8, 16> mUnk6c71ee;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Status& operator=(Status const&);
    Status(Status const&);
    Status();
#endif // @header-generator platform
};

} // namespace Bedrock::Http
