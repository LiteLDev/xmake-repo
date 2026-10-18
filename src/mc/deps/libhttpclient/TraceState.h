#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class TraceState {};
#else // @header-generator platform
class TraceState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk623dd3;
    ::ll::UntypedStorage<4, 4>  mUnk100517;
    ::ll::UntypedStorage<8, 8>  mUnkaca574;
    ::ll::UntypedStorage<1, 1>  mUnk3ff743;
    ::ll::UntypedStorage<1, 1>  mUnk659843;
    // NOLINTEND

public:
    // prevent constructor by default
    TraceState& operator=(TraceState const&);
    TraceState(TraceState const&);
    TraceState();
};
#endif // @header-generator platform
#endif // @header-generator platform
