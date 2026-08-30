#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/RequestConstructionData.h"
#include "mc/deps/core/http/StatusCode.h"
#include "mc/util/RetryDelay.h"

// auto generated forward declare list
// clang-format off
class PersonaService;
// clang-format on

namespace persona {

class PersonaServiceRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 20, ::RetryDelay> mRequestDelay;
    ::ll::UntypedStorage<8, 240> mConstructionData;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mRequestHandlerSendTimeLimit;
    ::ll::TypedStorage<1, 1, bool> mHasCompleted;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersonaServiceRequestHandler();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uchar const& MAX_RETRIES();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
