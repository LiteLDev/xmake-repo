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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 24>    mFileName;
        ::ll::TypedStorage<1, 1, bool> mWasRename;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnka98c22;
        ::ll::UntypedStorage<1, 1>  mUnk67b7f6;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        DeleteFileEntry& operator=(DeleteFileEntry const&);
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::leveldb::Status execute(::leveldb::Env*);
        // NOLINTEND
#else // @header-generator platform
        DeleteFileEntry(DeleteFileEntry const&);
        DeleteFileEntry();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                            mTarget;
    ::ll::TypedStorage<4, 40, std::mutex>                                mCreationLock;
    ::ll::UntypedStorage<1, 140>                                         mWriteLock;
    ::ll::TypedStorage<4, 40, std::mutex>                                mOpenReadFileLock;
    ::ll::TypedStorage<4, 40, std::mutex>                                mPauseLock;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                          mPaused;
    ::ll::TypedStorage<8, 24, std::vector<SnapshotEnv::DeleteFileEntry>> mQueuedActions;
    ::ll::TypedStorage<4, 40, std::mutex>                                mQueueMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk953b73;
    ::ll::UntypedStorage<8, 80> mUnk840b69;
    ::ll::UntypedStorage<8, 8>  mUnkfaff08;
    ::ll::UntypedStorage<8, 80> mUnk2eddae;
    ::ll::UntypedStorage<8, 80> mUnk287ed3;
    ::ll::UntypedStorage<1, 1>  mUnk270131;
    ::ll::UntypedStorage<8, 24> mUnk7f224d;
    ::ll::UntypedStorage<8, 80> mUnk5736a3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    SnapshotEnv& operator=(SnapshotEnv const&);
    SnapshotEnv(SnapshotEnv const&);
#endif // @header-generator platform
    SnapshotEnv();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SnapshotEnv();
#else // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    virtual ::leveldb::Status RemoveFile(::std::string const& f) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status RemoveFile(std::string const&);

    virtual ::leveldb::Status RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SnapshotEnv(::leveldb::Env*);
#else // @header-generator platform
    MCNAPI bool _isQueuedForRemoval(::Core::PathBuffer<::std::string> const& file);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<SnapshotFilenameAndLength> createSnapshot(::Core::Path const&);
#else // @header-generator platform
    MCNAPI ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::Core::Path const& dir);
#endif // @header-generator platform

    MCNAPI void releaseSnapshot();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(std::string const&, ::leveldb::SequentialFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(std::string const&, ::leveldb::RandomAccessFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $NewAppendableFile(std::string const&, ::leveldb::WritableFile**);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& f);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
