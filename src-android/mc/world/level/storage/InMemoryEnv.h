#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/world/level/storage/FlushableEnv.h"
#include "mc/world/level/storage/InMemoryFileStorage.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class InMemoryEnv : public ::FlushableEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>        mTarget;
    ::ll::UntypedStorage<8, 24>                      mDbPath;
    ::ll::TypedStorage<8, 96, ::InMemoryFileStorage> mInMemoryStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemoryEnv();

    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);

    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);

    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);

    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);

    virtual bool FileExists(std::string const&);

    virtual ::leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);

    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);

    virtual void flushToPermanentStorage();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _flushWithTransaction();
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

    MCNAPI ::leveldb::Status $NewAppendableFile(std::string const&, ::leveldb::WritableFile**);

    MCNAPI bool $FileExists(std::string const&);

    MCNAPI ::leveldb::Status $GetChildren(std::string const&, std::vector<std::string>*);

    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);

    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);

    MCNAPI void $flushToPermanentStorage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
