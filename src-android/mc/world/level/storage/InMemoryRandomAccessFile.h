#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

class InMemoryRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<InMemoryFile>> mFile;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemoryRandomAccessFile();

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
