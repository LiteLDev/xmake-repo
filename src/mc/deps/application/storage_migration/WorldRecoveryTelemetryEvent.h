#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct WorldRecoveryTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk931c78;
    ::ll::UntypedStorage<8, 32> mUnk548801;
    ::ll::UntypedStorage<8, 32> mUnk637363;
    ::ll::UntypedStorage<4, 4>  mUnk43932e;
    ::ll::UntypedStorage<4, 4>  mUnk9f41be;
    ::ll::UntypedStorage<4, 4>  mUnk5ab5e0;
    ::ll::UntypedStorage<8, 8>  mUnk2fa277;
    ::ll::UntypedStorage<8, 8>  mUnk6a9fdf;
    ::ll::UntypedStorage<8, 8>  mUnk7521ca;
    ::ll::UntypedStorage<1, 1>  mUnke1636c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    WorldRecoveryTelemetryEvent& operator=(WorldRecoveryTelemetryEvent const&);
    WorldRecoveryTelemetryEvent(WorldRecoveryTelemetryEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
    WorldRecoveryTelemetryEvent();
#endif // @header-generator platform
};

} // namespace Bedrock
