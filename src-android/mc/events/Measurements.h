#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/Measurement.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class Measurements {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Measurement>> mMeasurements;
    // NOLINTEND

public:
    // prevent constructor by default
    Measurements& operator=(Measurements const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Social::Events::Measurements& operator=(::Social::Events::Measurements&&);

    MCNAPI ~Measurements();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
