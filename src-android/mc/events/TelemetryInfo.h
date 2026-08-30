#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/PropertyBag.h"

class TelemetryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::PropertyBag> mOldInfo;
    ::ll::TypedStorage<8, 24, ::PropertyBag> mNewPendingInfo;
    ::ll::UntypedStorage<8, 24>              mFilePath;
    ::ll::TypedStorage<4, 4, int>            mPropertyChangeVersion;
    ::ll::TypedStorage<1, 1, bool>           mTampered;
    ::ll::TypedStorage<1, 1, bool>           mFirstSession;
    // NOLINTEND
};
