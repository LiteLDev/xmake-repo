#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ServerTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mServerId;
    ::ll::TypedStorage<8, 24, std::string> mScenarioId;
    ::ll::TypedStorage<8, 24, std::string> mWorldId;
    ::ll::TypedStorage<8, 24, std::string> mOwnerId;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerTelemetryData(ServerTelemetryData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServerTelemetryData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
