#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IExternalSessionTelemetry;
class ISessionIdArgumentValidator;
// clang-format on

class SessionIdArgumentHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IExternalSessionTelemetry&>                 mExternalSessionTelemetry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISessionIdArgumentValidator>> mWebSessionIdArgumentValidator;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ISessionIdArgumentValidator>> mLauncherSessionIdArgumentValidator;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionIdArgumentHandler& operator=(SessionIdArgumentHandler const&);
    SessionIdArgumentHandler(SessionIdArgumentHandler const&);
    SessionIdArgumentHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SessionIdArgumentHandler();
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
#else // @header-generator platform
class SessionIdArgumentHandler {};
#endif // @header-generator platform
