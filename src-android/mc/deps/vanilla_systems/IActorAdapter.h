#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class IActorAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorAdapter();

    virtual void dropHangingActor(::StrictEntityContext const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VanillaSystems
