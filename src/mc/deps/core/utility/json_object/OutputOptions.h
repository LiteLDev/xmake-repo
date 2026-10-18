#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class OutputOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mPretty;
    ::ll::TypedStorage<4, 4, uint> mIndentAmount;
    ::ll::TypedStorage<1, 1, char> mIndentChar;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnked7ee7;
    ::ll::UntypedStorage<4, 4> mUnkfd5689;
    ::ll::UntypedStorage<1, 1> mUnke74291;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OutputOptions& operator=(OutputOptions const&);
    OutputOptions(OutputOptions const&);
    OutputOptions();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
