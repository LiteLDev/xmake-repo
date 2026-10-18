#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Core {

struct FilePathManagerPaths {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mRoot;
    ::ll::UntypedStorage<8, 24>    mPackagePath;
    ::ll::UntypedStorage<8, 24>    mDataUrl;
    ::ll::UntypedStorage<8, 24>    mExternalFilePath;
    ::ll::UntypedStorage<8, 24>    mTemporaryFilePath;
    ::ll::UntypedStorage<8, 24>    mCacheFilePath;
    ::ll::UntypedStorage<8, 24>    mSettingsPath;
    ::ll::TypedStorage<1, 1, bool> mIsDedicatedServer;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke7e628;
    ::ll::UntypedStorage<8, 32> mUnk8c8d75;
    ::ll::UntypedStorage<8, 32> mUnk112a97;
    ::ll::UntypedStorage<8, 32> mUnk2871ed;
    ::ll::UntypedStorage<8, 32> mUnkfc8089;
    ::ll::UntypedStorage<8, 32> mUnkdf0bdb;
    ::ll::UntypedStorage<8, 32> mUnkba5c3a;
    ::ll::UntypedStorage<1, 1>  mUnkba5e88;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilePathManagerPaths& operator=(FilePathManagerPaths const&);
    FilePathManagerPaths(FilePathManagerPaths const&);
    FilePathManagerPaths();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~FilePathManagerPaths();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~FilePathManagerPaths();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core
