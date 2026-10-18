#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousLookAtEntityIntent.h"
#include "mc/server/sim/ContinuousLookAtPositionIntent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/sim/ExecutionResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/sim/LookAtEntityIntent.h"
#include "mc/server/sim/LookAtPositionIntent.h"
#include "mc/server/sim/VoidLookAtIntent.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace sim {

struct LookAtIntent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 40> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    LookAtIntent& operator=(LookAtIntent const&);
    LookAtIntent(LookAtIntent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LookAtIntent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::sim::VoidLookAtIntent,
            ::sim::LookAtPositionIntent,
            ::sim::ContinuousLookAtPositionIntent,
            ::sim::LookAtEntityIntent,
            ::sim::ContinuousLookAtEntityIntent>>
        mType;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace sim
