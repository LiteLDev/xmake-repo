#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct InstructionalContentQueryContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>   mOnComplete;
    ::ll::TypedStorage<4, 4, int> mLibrarySkip;
    ::ll::UntypedStorage<4, 12>   mChannelSkip;
    // NOLINTEND

public:
    // prevent constructor by default
    InstructionalContentQueryContext();
};
#else // @header-generator platform
struct InstructionalContentQueryContext {};
#endif // @header-generator platform
