#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DebugUtils {

class ComposedAssertMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>         mIsComposed;
    ::ll::TypedStorage<8, 24, std::string> mBuffer;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnk46006e;
    ::ll::UntypedStorage<8, 32> mUnkc7921f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ComposedAssertMessage& operator=(ComposedAssertMessage const&);
    ComposedAssertMessage(ComposedAssertMessage const&);
    ComposedAssertMessage();
#endif // @header-generator platform
};

} // namespace DebugUtils
