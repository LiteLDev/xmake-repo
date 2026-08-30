#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ContinuousLookAtEntityIntent.h"
#include "mc/server/sim/ContinuousLookAtPositionIntent.h"
#include "mc/server/sim/ExecutionResult.h"
#include "mc/server/sim/LookAtEntityIntent.h"
#include "mc/server/sim/LookAtPositionIntent.h"
#include "mc/server/sim/VoidLookAtIntent.h"

// auto generated forward declare list
// clang-format off
class SimulatedPlayer;
// clang-format on

namespace sim {

struct LookAtIntent {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};

} // namespace sim
