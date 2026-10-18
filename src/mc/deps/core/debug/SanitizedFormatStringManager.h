#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatStringManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mStringsNeedSanitizing;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnkdbb095;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SanitizedFormatStringManager& operator=(SanitizedFormatStringManager const&);
    SanitizedFormatStringManager(SanitizedFormatStringManager const&);
    SanitizedFormatStringManager();
#endif // @header-generator platform
};

} // namespace Bedrock
