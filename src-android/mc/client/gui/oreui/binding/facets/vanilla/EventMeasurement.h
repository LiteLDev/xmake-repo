#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/Measurement.h"

namespace OreUI {

struct EventMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<std::string, bool, double>> value;
    ::ll::UntypedStorage<4, 4>                                         aggregationType;
    // NOLINTEND

public:
    // prevent constructor by default
    EventMeasurement& operator=(EventMeasurement const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EventMeasurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
