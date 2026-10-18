#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/PropertyBag.h"
#else // @header-generator platform
#endif // @header-generator platform

class TelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::PropertyBag> mOldInfo;
    ::ll::TypedStorage<8, 24, ::PropertyBag> mNewPendingInfo;
    ::ll::UntypedStorage<8, 24>              mFilePath;
    ::ll::TypedStorage<4, 4, int>            mPropertyChangeVersion;
    ::ll::TypedStorage<1, 1, bool>           mTampered;
    ::ll::TypedStorage<1, 1, bool>           mFirstSession;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5e8caf;
    ::ll::UntypedStorage<8, 24> mUnk98f41a;
    ::ll::UntypedStorage<8, 32> mUnk31c3b4;
    ::ll::UntypedStorage<4, 4>  mUnkdac95a;
    ::ll::UntypedStorage<1, 1>  mUnkd37089;
    ::ll::UntypedStorage<1, 1>  mUnkaee5ec;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    TelemetryInfo& operator=(TelemetryInfo const&);
    TelemetryInfo(TelemetryInfo const&);
    TelemetryInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    TelemetryInfo& operator=(TelemetryInfo const&);
    TelemetryInfo(TelemetryInfo const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TelemetryInfo();

    MCNAPI void _save();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
