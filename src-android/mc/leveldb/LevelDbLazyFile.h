#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/FileOpenMode.h"

class LevelDbLazyFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>          mFilename;
    ::ll::TypedStorage<8, 16, ::Core::File>         mFile;
    ::ll::TypedStorage<8, 16, std::optional<ulong>> mSavedPosition;
    ::ll::TypedStorage<1, 2, ::Core::FileOpenMode>  mOpenMode;
    ::ll::TypedStorage<4, 4, int>                   mMaxOpenFiles;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbLazyFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status Flush();

    MCNAPI ~LevelDbLazyFile();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::atomic<ulong>& mFileCount();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
