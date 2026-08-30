#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class TripodCameraActivatedComponent {
public:
    // TripodCameraActivatedComponent inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // TripodCameraActivatedComponent inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCountdown;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mSubject;
    ::ll::UntypedStorage<4, 8>  mCountdown;
    // NOLINTEND

public:
    // prevent constructor by default
    TripodCameraActivatedComponent& operator=(TripodCameraActivatedComponent const&);
};
