#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/EncryptedProxyReadMode.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class EncryptedProxyEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>          mTarget;
    ::ll::TypedStorage<8, 24, std::string const>       mContentKey;
    ::ll::TypedStorage<8, 24, std::string const>       mProductId;
    ::ll::TypedStorage<1, 1, ::EncryptedProxyReadMode> mMode;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedProxyEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncryptedProxyEnv();

    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);

    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);

    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);

    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);

    MCNAPI ::leveldb::Status $NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);

    MCNAPI ::leveldb::Status $NewWritableFile(std::string const&, ::leveldb::WritableFile**);

    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);

    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
