#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSAsyncFromSyncIteratorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39e1a6;
    ::ll::UntypedStorage<8, 16> mUnkcf7895;
    // NOLINTEND

public:
    // prevent constructor by default
    JSAsyncFromSyncIteratorData& operator=(JSAsyncFromSyncIteratorData const&);
    JSAsyncFromSyncIteratorData(JSAsyncFromSyncIteratorData const&);
    JSAsyncFromSyncIteratorData();
};
#endif // @header-generator platform
