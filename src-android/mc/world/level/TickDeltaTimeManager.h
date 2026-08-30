#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickDeltaTimeManagerProxy;
// clang-format on

class TickDeltaTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, double> mTickDeltaTime;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ITickDeltaTimeManagerProxy>> const> mTickDeltaTimeManagerProxy;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeltaTimeManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TickDeltaTimeManager(std::unique_ptr<ITickDeltaTimeManagerProxy>);

    MCNAPI void captureDeltaTime();

    MCNAPI double getTickDeltaTime() const;

    MCNAPI ~TickDeltaTimeManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ITickDeltaTimeManagerProxy>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
