#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
struct EventModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> IsShiftDown;
    ::ll::TypedStorage<1, 1, bool> IsCtrlDown;
    ::ll::TypedStorage<1, 1, bool> IsAltDown;
    ::ll::TypedStorage<1, 1, bool> IsAltGraphDown;
    ::ll::TypedStorage<1, 1, bool> IsMetaDown;
    ::ll::TypedStorage<1, 1, bool> IsNumLockOn;
    ::ll::TypedStorage<1, 1, bool> IsCapsOn;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EventModifiersState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbd9e8b;
    ::ll::UntypedStorage<1, 1> mUnk6d2b19;
    ::ll::UntypedStorage<1, 1> mUnk497f95;
    ::ll::UntypedStorage<1, 1> mUnka85218;
    ::ll::UntypedStorage<1, 1> mUnk8c04ee;
    ::ll::UntypedStorage<1, 1> mUnkbc4176;
    ::ll::UntypedStorage<1, 1> mUnkb97d97;
    // NOLINTEND

public:
    // prevent constructor by default
    EventModifiersState& operator=(EventModifiersState const&);
    EventModifiersState(EventModifiersState const&);
    EventModifiersState();
};
#else // @header-generator platform
struct EventModifiersState {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
