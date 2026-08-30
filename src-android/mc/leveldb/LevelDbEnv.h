#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

class LevelDbEnv : public ::Bedrock::EnableNonOwnerReferences, public ::leveldb::Env {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mLevelDBTasks;
    ::ll::TypedStorage<4, 4, int const>                  mMaxOpenFiles;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbEnv();

    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);

    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);

    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);

    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);

    virtual bool FileExists(std::string const&);

    virtual ::leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);

    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status CreateDir(std::string const&);

    virtual ::leveldb::Status RemoveDir(std::string const&);

    virtual ::leveldb::Status GetFileSize(std::string const&, ulong*);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);

    virtual ::leveldb::Status LockFile(std::string const&, ::leveldb::FileLock**);

    virtual ::leveldb::Status UnlockFile(::leveldb::FileLock*);

    virtual void Schedule(void (*)(void*), void*);

    virtual void StartThread(void (*)(void*), void*);

    virtual ::leveldb::Status GetTestDirectory(std::string*);

    virtual ::leveldb::Status NewLogger(std::string const&, ::leveldb::Logger**);

    virtual ulong NowMicros();

    virtual void SleepForMicroseconds(int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsComplete() const;

    MCNAPI explicit LevelDbEnv(int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LevelDbEnv*& sSingleton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int);
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

    MCNAPI ::leveldb::Status $CreateDir(std::string const&);

    MCNAPI ::leveldb::Status $RemoveDir(std::string const&);

    MCNAPI ::leveldb::Status $GetFileSize(std::string const&, ulong*);

    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);

    MCNAPI ::leveldb::Status $LockFile(std::string const&, ::leveldb::FileLock**);

    MCNAPI ::leveldb::Status $UnlockFile(::leveldb::FileLock*);

    MCNAPI void $Schedule(void (*)(void*), void*);

    MCNAPI void $StartThread(void (*)(void*), void*);

    MCNAPI ::leveldb::Status $GetTestDirectory(std::string*);

    MCNAPI ::leveldb::Status $NewLogger(std::string const&, ::leveldb::Logger**);

    MCNAPI ulong $NowMicros();

    MCNAPI void $SleepForMicroseconds(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
