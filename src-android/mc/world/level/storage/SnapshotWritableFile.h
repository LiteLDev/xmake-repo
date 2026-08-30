#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapshotWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::leveldb::WritableFile*> mLeveldbWritableFile;
    ::ll::TypedStorage<8, 8, std::shared_timed_mutex&> mCreationAndWriteLock;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotWritableFile& operator=(SnapshotWritableFile const&);
    SnapshotWritableFile(SnapshotWritableFile const&);
    SnapshotWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnapshotWritableFile();

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
