#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"

class LevelDbSequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbSequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbSequentialFile();

    virtual ::leveldb::Status Read(ulong, ::leveldb::Slice*, char*);

    virtual ::leveldb::Status Skip(ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(ulong, ::leveldb::Slice*, char*);

    MCNAPI ::leveldb::Status $Skip(ulong);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
