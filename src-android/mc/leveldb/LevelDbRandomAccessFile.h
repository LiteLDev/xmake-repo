#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"

class LevelDbRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
    ::ll::TypedStorage<4, 40, std::mutex>        mMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbRandomAccessFile();

    virtual ::leveldb::Status Read(ulong, ulong, ::leveldb::Slice*, char*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(ulong, ulong, ::leveldb::Slice*, char*) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
