#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct BeforeTamingEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&> mActor;
    ::ll::TypedStorage<8, 8, ::Actor&> mTamingActor;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeTamingEvent& operator=(BeforeTamingEvent const&);
    BeforeTamingEvent(BeforeTamingEvent const&);
    BeforeTamingEvent();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
