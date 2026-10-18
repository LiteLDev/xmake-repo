#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct ServerTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mServerId;
    ::ll::TypedStorage<8, 24, std::string> mScenarioId;
    ::ll::TypedStorage<8, 24, std::string> mWorldId;
    ::ll::TypedStorage<8, 24, std::string> mOwnerId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk64ca34;
    ::ll::UntypedStorage<8, 32> mUnk1d4791;
    ::ll::UntypedStorage<8, 32> mUnkacbc35;
    ::ll::UntypedStorage<8, 32> mUnk1276d3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ServerTelemetryData(ServerTelemetryData const&);
#else // @header-generator platform
    ServerTelemetryData& operator=(ServerTelemetryData const&);
    ServerTelemetryData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ServerTelemetryData(::Social::Events::ServerTelemetryData const&);

#endif // @header-generator platform
    MCNAPI ~ServerTelemetryData();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::ServerTelemetryData const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
