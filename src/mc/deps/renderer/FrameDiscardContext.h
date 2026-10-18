#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct FrameDiscardContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPreventFrameDiscard;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FrameDiscardContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfac32a;
    // NOLINTEND

public:
    // prevent constructor by default
    FrameDiscardContext& operator=(FrameDiscardContext const&);
    FrameDiscardContext(FrameDiscardContext const&);
    FrameDiscardContext();
};
#else // @header-generator platform
struct FrameDiscardContext {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
