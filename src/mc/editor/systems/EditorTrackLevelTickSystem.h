#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

struct EditorTrackLevelTickSystem {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::TickingSystemWithInfo createTrackAddedActors();

    MCNAPI static ::TickingSystemWithInfo createTrackTickingActors();
#endif
    // NOLINTEND
};
#endif // @header-generator platform
