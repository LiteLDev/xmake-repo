#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/leveldb/LevelDbLazyFile.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class LevelDbLazyFile;
// clang-format on
#endif // @header-generator platform

class LevelDbWritableFile : public ::leveldb::WritableFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::LevelDbLazyFile> mFile;
    ::ll::TypedStorage<8, 24, std::string>       mFilenameHackForManifestSync;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 72> mUnk289cca;
    ::ll::UntypedStorage<8, 32> mUnk7f131b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelDbWritableFile& operator=(LevelDbWritableFile const&);
    LevelDbWritableFile(LevelDbWritableFile const&);
#endif // @header-generator platform
    LevelDbWritableFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelDbWritableFile();
#else // @header-generator platform
    virtual ::leveldb::Status Append(::leveldb::Slice const& slice) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Append(::leveldb::Slice const&);
#else // @header-generator platform
    virtual ::leveldb::Status Close() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Close();
#else // @header-generator platform
    virtual ::leveldb::Status Flush() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Flush();

    virtual ::leveldb::Status Sync();
#else // @header-generator platform
    virtual ::leveldb::Status Sync() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI LevelDbWritableFile(::std::string filename, ::LevelDbLazyFile&& file);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string filename, ::LevelDbLazyFile&& file);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const&);
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Append(::leveldb::Slice const& slice);
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
