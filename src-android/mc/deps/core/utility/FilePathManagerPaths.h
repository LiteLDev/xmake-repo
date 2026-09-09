#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

struct FilePathManagerPaths {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>    mRoot;
    ::ll::UntypedStorage<8, 24>    mPackagePath;
    ::ll::UntypedStorage<8, 24>    mDataUrl;
    ::ll::UntypedStorage<8, 24>    mExternalFilePath;
    ::ll::UntypedStorage<8, 24>    mTemporaryFilePath;
    ::ll::UntypedStorage<8, 24>    mCacheFilePath;
    ::ll::UntypedStorage<8, 24>    mSettingsPath;
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilePathManagerPaths();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
