#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
// clang-format on

class SnapshotEnv : public ::leveldb::EnvWrapper {
public:
    // SnapshotEnv inner types declare
    // clang-format off
    class DeleteFileEntry;
    // clang-format on

    // SnapshotEnv inner types define
    class DeleteFileEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24>    mFileName;
        ::ll::TypedStorage<1, 1, bool> mWasRename;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeleteFileEntry& operator=(DeleteFileEntry const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::leveldb::Status execute(::leveldb::Env*);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                            mTarget;
    ::ll::TypedStorage<4, 40, std::mutex>                                mCreationLock;
    ::ll::UntypedStorage<1, 140>                                         mWriteLock;
    ::ll::TypedStorage<4, 40, std::mutex>                                mOpenReadFileLock;
    ::ll::TypedStorage<4, 40, std::mutex>                                mPauseLock;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                          mPaused;
    ::ll::TypedStorage<8, 24, std::vector<SnapshotEnv::DeleteFileEntry>> mQueuedActions;
    ::ll::TypedStorage<4, 40, std::mutex>                                mQueueMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SnapshotEnv();

    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);

    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);

    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);

    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);

    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SnapshotEnv(::leveldb::Env*);

    MCNAPI std::vector<SnapshotFilenameAndLength> createSnapshot(::Core::Path const&);

    MCNAPI void releaseSnapshot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::leveldb::Env*);
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

    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);

    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
