#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"

class LevelDbWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
    ::ll::TypedStorage<8, 24, std::string>       mFilenameHackForManifestSync;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbWritableFile();

    virtual ::leveldb::Status Append(::leveldb::Slice const&);

    virtual ::leveldb::Status Close();

    virtual ::leveldb::Status Flush();

    virtual ::leveldb::Status Sync();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const&);

    MCNAPI ::leveldb::Status $Close();

    MCNAPI ::leveldb::Status $Flush();

    MCNAPI ::leveldb::Status $Sync();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
