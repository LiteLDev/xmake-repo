#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

class InMemoryWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<InMemoryFile>> mFile;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemoryWritableFile();

    virtual ::leveldb::Status Append(::leveldb::Slice const&);

    virtual ::leveldb::Status Close();

    virtual ::leveldb::Status Flush();

    virtual ::leveldb::Status Sync();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InMemoryWritableFile(std::shared_ptr<InMemoryFile>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<InMemoryFile>);
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
