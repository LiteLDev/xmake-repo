#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ContextBaseGameVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf29a15;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ContextBaseGameVersion& operator=(ContextBaseGameVersion const&);
    ContextBaseGameVersion(ContextBaseGameVersion const&);
#endif // @header-generator platform
    ContextBaseGameVersion();
};

} // namespace Scripting
