#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

class InMemorySequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<InMemoryFile>> mFile;
    ::ll::TypedStorage<8, 8, ulong>                          mReadOffset;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnka09c7f;
    ::ll::UntypedStorage<8, 8>  mUnk686272;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InMemorySequentialFile& operator=(InMemorySequentialFile const&);
    InMemorySequentialFile(InMemorySequentialFile const&);
#endif // @header-generator platform
    InMemorySequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~InMemorySequentialFile();
#else // @header-generator platform
    virtual ~InMemorySequentialFile() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Read(ulong, ::leveldb::Slice*, char*);
#else // @header-generator platform
    virtual ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::leveldb::Status Skip(ulong);
#else // @header-generator platform
    virtual ::leveldb::Status Skip(uint64 n) /*override*/;
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
#ifdef LL_PLAT_S
    MCNAPI explicit InMemorySequentialFile(::std::shared_ptr<::InMemoryFile> file);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::std::shared_ptr<::InMemoryFile> file);
#endif
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
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::leveldb::Status $Skip(uint64 n);
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
