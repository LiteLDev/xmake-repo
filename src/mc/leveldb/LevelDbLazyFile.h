#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/FileOpenMode.h"
#else // @header-generator platform
#endif // @header-generator platform

class LevelDbLazyFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>          mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File>         mFile;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mSavedPosition;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode>  mOpenMode;
    ::ll::TypedStorage<4, 4, int>                   mMaxOpenFiles;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc14c3f;
    ::ll::UntypedStorage<8, 16> mUnk59f9b8;
    ::ll::UntypedStorage<8, 16> mUnk6129c9;
    ::ll::UntypedStorage<1, 2>  mUnk60005c;
    ::ll::UntypedStorage<4, 4>  mUnkc82210;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelDbLazyFile& operator=(LevelDbLazyFile const&);
    LevelDbLazyFile(LevelDbLazyFile const&);
#endif // @header-generator platform
    LevelDbLazyFile();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ::leveldb::Status Close();

#endif // @header-generator platform
    MCNAPI ::leveldb::Status Flush();

    MCNAPI ~LevelDbLazyFile();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::atomic<ulong>& mFileCount();
#else // @header-generator platform
    MCNAPI static ::std::atomic<uint64>& mFileCount();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
