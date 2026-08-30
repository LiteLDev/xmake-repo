#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct WorldRecoveryTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSourceURI;
    ::ll::TypedStorage<8, 24, std::string> mDestPath;
    ::ll::TypedStorage<8, 24, std::string> mError;
    ::ll::TypedStorage<4, 4, uint>         mRecoveryTimeSeconds;
    ::ll::TypedStorage<4, 4, uint>         mFoundFileCount;
    ::ll::TypedStorage<4, 4, uint>         mRecoveredFileCount;
    ::ll::TypedStorage<8, 8, ulong>        mFoundFileBytes;
    ::ll::TypedStorage<8, 8, ulong>        mRecoveredFileBytes;
    ::ll::TypedStorage<8, 8, ulong>        mAvailableSpaceBytes;
    ::ll::TypedStorage<1, 1, bool>         mSuccess;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryTelemetryEvent& operator=(WorldRecoveryTelemetryEvent const&);
    WorldRecoveryTelemetryEvent(WorldRecoveryTelemetryEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldRecoveryTelemetryEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
