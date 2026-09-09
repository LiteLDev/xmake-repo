#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/StorageMigrationState.h"
#include "mc/deps/core/file/PathBuffer.h"

struct StorageMigrationStatus {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mCurrentFolderName;
    ::ll::TypedStorage<8, 24, std::string> mProgressMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mLocationString;
    ::ll::TypedStorage<4, 4, std::atomic<float>> mPercentComplete;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mNumFilesCopied;
    ::ll::TypedStorage<4, 4, std::atomic<uint>> mNumFilesTotal;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mBytesTransferred;
    ::ll::TypedStorage<8, 8, std::atomic<ulong>> mBytesTotal;
    ::ll::TypedStorage<4, 4, std::atomic<StorageMigrationState>> mState;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mErrorCode;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mStartTime;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StorageMigrationStatus();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
