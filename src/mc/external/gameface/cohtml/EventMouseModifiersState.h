#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct EventMouseModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> IsLeftButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsMiddleButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsRightButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsBackButtonDown;
    ::ll::TypedStorage<1, 1, bool> IsForwardButtonDown;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EventMouseModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkac7c3b;
    ::ll::UntypedStorage<1, 1> mUnk675d54;
    ::ll::UntypedStorage<1, 1> mUnk32ffe4;
    ::ll::UntypedStorage<1, 1> mUnkd41604;
    ::ll::UntypedStorage<1, 1> mUnkd3efbc;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMouseModifiersState& operator=(EventMouseModifiersState const&);
    EventMouseModifiersState(EventMouseModifiersState const&);
    EventMouseModifiersState();
};
#else // @header-generator platform
struct EventMouseModifiersState {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
