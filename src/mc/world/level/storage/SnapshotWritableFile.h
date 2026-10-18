#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SnapshotWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::leveldb::WritableFile*> mLeveldbWritableFile;
    ::ll::TypedStorage<8, 8, std::shared_timed_mutex&> mCreationAndWriteLock;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkd25792;
    ::ll::UntypedStorage<8, 8> mUnk3809e9;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotWritableFile& operator=(SnapshotWritableFile const&);
    SnapshotWritableFile(SnapshotWritableFile const&);
    SnapshotWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SnapshotWritableFile();
#else // @header-generator platform
    virtual ~SnapshotWritableFile() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Append(::leveldb::Slice const&);
#else // @header-generator platform
    virtual ::leveldb::Status Append(::leveldb::Slice const& data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Close();
#else // @header-generator platform
    virtual ::leveldb::Status Close() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Flush();
#else // @header-generator platform
    virtual ::leveldb::Status Flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Sync();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::leveldb::Status Sync() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const& data);
#endif // @header-generator platform

    MCNAPI ::leveldb::Status $Close();

    MCNAPI ::leveldb::Status $Flush();

    MCNAPI ::leveldb::Status $Sync();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
