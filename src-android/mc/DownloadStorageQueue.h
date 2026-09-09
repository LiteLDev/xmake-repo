#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/SharedAsync.h"

class DownloadStorageQueue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                      mAsync;
    ::ll::TypedStorage<8, 48, std::function<void()>> mCallback;
    // NOLINTEND
};
