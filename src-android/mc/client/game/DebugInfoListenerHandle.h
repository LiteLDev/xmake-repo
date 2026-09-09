#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugInfoListenerHandle {
public:
    // DebugInfoListenerHandle inner types define
    using ListenerId = int;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mListenerId;
    // NOLINTEND
};
