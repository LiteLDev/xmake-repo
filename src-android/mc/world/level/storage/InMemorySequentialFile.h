#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

class InMemorySequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<InMemoryFile>> mFile;
    ::ll::TypedStorage<8, 8, ulong>                          mReadOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemorySequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemorySequentialFile();

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
