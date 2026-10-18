#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"
#else // @header-generator platform
#endif // @header-generator platform

class LevelDbRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
    ::ll::TypedStorage<4, 40, std::mutex>        mMutex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnkd171ca;
    ::ll::UntypedStorage<8, 80> mUnk2ca349;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelDbRandomAccessFile& operator=(LevelDbRandomAccessFile const&);
    LevelDbRandomAccessFile(LevelDbRandomAccessFile const&);
#endif // @header-generator platform
    LevelDbRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelDbRandomAccessFile();

    virtual ::leveldb::Status Read(ulong, ulong, ::leveldb::Slice*, char*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $Read(ulong, ulong, ::leveldb::Slice*, char*) const;
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
