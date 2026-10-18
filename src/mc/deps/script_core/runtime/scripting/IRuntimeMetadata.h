#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mThreadId;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk68c916;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IRuntimeMetadata& operator=(IRuntimeMetadata const&);
    IRuntimeMetadata(IRuntimeMetadata const&);
    IRuntimeMetadata();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRuntimeMetadata() = default;
    // NOLINTEND
};

} // namespace Scripting
