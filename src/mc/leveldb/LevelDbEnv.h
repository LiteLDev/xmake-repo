#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
class LevelDbEnv : public ::Bedrock::EnableNonOwnerReferences, public ::leveldb::Env {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>> mLevelDBTasks;
    ::ll::TypedStorage<4, 4, int const>                  mMaxOpenFiles;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkcc5166;
    ::ll::UntypedStorage<4, 4> mUnkfe3fa7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelDbEnv& operator=(LevelDbEnv const&);
    LevelDbEnv(LevelDbEnv const&);
#endif // @header-generator platform
    LevelDbEnv();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelDbEnv();
#else // @header-generator platform
    virtual ~LevelDbEnv() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    virtual ::leveldb::Status
    NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    virtual ::leveldb::Status
    NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status
    NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status
    NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool FileExists(std::string const&);
#else // @header-generator platform
    virtual bool FileExists(::std::string const& fname) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
#else // @header-generator platform
    virtual ::leveldb::Status
    GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RemoveFile(std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RemoveFile(::std::string const& fname) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status CreateDir(std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status CreateDir(::std::string const& path) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RemoveDir(std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RemoveDir(::std::string const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status GetFileSize(std::string const&, ulong*);
#else // @header-generator platform
    virtual ::leveldb::Status GetFileSize(::std::string const& fname, uint64* size) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RenameFile(::std::string const& src, ::std::string const& target) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status LockFile(std::string const&, ::leveldb::FileLock**);
#else // @header-generator platform
    virtual ::leveldb::Status LockFile(::std::string const& fname, ::leveldb::FileLock** lock) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status UnlockFile(::leveldb::FileLock*);
#else // @header-generator platform
    virtual ::leveldb::Status UnlockFile(::leveldb::FileLock* lock) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void Schedule(void (*)(void*), void*);
#else // @header-generator platform
    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void StartThread(void (*)(void*), void*);
#else // @header-generator platform
    virtual void StartThread(void (*function)(void*), void* arg) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status GetTestDirectory(std::string*);
#else // @header-generator platform
    virtual ::leveldb::Status GetTestDirectory(::std::string* result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewLogger(std::string const&, ::leveldb::Logger**);
#else // @header-generator platform
    virtual ::leveldb::Status NewLogger(::std::string const& fname, ::leveldb::Logger** result) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong NowMicros();
#else // @header-generator platform
    virtual uint64 NowMicros() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void SleepForMicroseconds(int);
#else // @header-generator platform
    virtual void SleepForMicroseconds(int microseconds) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool IsComplete() const;

    MCNAPI explicit LevelDbEnv(int);
#else // @header-generator platform
    MCNAPI explicit LevelDbEnv(int maxOpenFiles);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LevelDbEnv*& sSingleton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(int);
#else // @header-generator platform
    MCNAPI void* $ctor(int maxOpenFiles);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $FileExists(std::string const&);
#else // @header-generator platform
    MCNAPI bool $FileExists(::std::string const& fname);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $GetChildren(std::string const&, std::vector<std::string>*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& fname);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $CreateDir(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $CreateDir(::std::string const& path);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveDir(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveDir(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $GetFileSize(std::string const&, ulong*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $GetFileSize(::std::string const& fname, uint64* size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(::std::string const& src, ::std::string const& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $LockFile(std::string const&, ::leveldb::FileLock**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $LockFile(::std::string const& fname, ::leveldb::FileLock** lock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $UnlockFile(::leveldb::FileLock*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $UnlockFile(::leveldb::FileLock* lock);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $Schedule(void (*)(void*), void*);
#else // @header-generator platform
    MCNAPI void $Schedule(void (*function)(void*), void* arg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $StartThread(void (*)(void*), void*);
#else // @header-generator platform
    MCNAPI void $StartThread(void (*function)(void*), void* arg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $GetTestDirectory(std::string*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $GetTestDirectory(::std::string* result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewLogger(std::string const&, ::leveldb::Logger**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewLogger(::std::string const& fname, ::leveldb::Logger** result);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $NowMicros();
#else // @header-generator platform
    MCNAPI uint64 $NowMicros();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $SleepForMicroseconds(int);
#else // @header-generator platform
    MCNAPI void $SleepForMicroseconds(int microseconds);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForEnv();
#endif // @header-generator platform
    // NOLINTEND
};
