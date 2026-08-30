#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class DownloadStorageQueue;
struct DownloadStoragePendingInfo;
// clang-format on

class DownloadStorageHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>     mPendingForTempArea;
    ::ll::UntypedStorage<1, 16>     mPendingForFinalArea;
    ::ll::UntypedStorage<1, 16>     mDownloadQueue;
    ::ll::TypedStorage<8, 8, ulong> mFileBytes;
    ::ll::TypedStorage<8, 8, ulong> mBytesWritten;
    // NOLINTEND
};
