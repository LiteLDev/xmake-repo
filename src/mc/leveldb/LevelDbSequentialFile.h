#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"
#else // @header-generator platform
#endif // @header-generator platform

class LevelDbSequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk4fd923;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelDbSequentialFile& operator=(LevelDbSequentialFile const&);
    LevelDbSequentialFile(LevelDbSequentialFile const&);
#endif // @header-generator platform
    LevelDbSequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelDbSequentialFile();
#else // @header-generator platform
    virtual ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Read(ulong, ::leveldb::Slice*, char*);

    virtual ::leveldb::Status Skip(ulong);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::leveldb::Status Skip(uint64 n) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $Read(ulong, ::leveldb::Slice*, char*);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Read(uint64 n, ::leveldb::Slice* result, char* scratch);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $Skip(ulong);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Skip(uint64 n);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
