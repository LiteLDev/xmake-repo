#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

namespace AgentComponents {

struct ActionDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>        requestId;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion> cmdVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ActionDetails& operator=(ActionDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActionDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace AgentComponents
