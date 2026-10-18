#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/InMemoryAccessMode.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class InMemoryFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex>        mMutex;
    ::ll::TypedStorage<8, 24, std::vector<char>> mBuffer;
    ::ll::UntypedStorage<8, 24>                  mFilename;
    ::ll::TypedStorage<1, 1, bool>               mOpenForWrite;
    ::ll::TypedStorage<4, 4, int>                mOpenReadHandles;
    ::ll::TypedStorage<1, 1, bool>               mMarkedForDelete;
    ::ll::TypedStorage<1, 1, bool>               mMarkedDirty;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 80> mUnk7ae000;
    ::ll::UntypedStorage<8, 24> mUnk64039c;
    ::ll::UntypedStorage<8, 32> mUnkea3443;
    ::ll::UntypedStorage<1, 1>  mUnk2c24f7;
    ::ll::UntypedStorage<4, 4>  mUnk722073;
    ::ll::UntypedStorage<1, 1>  mUnk5894c2;
    ::ll::UntypedStorage<1, 1>  mUnkaa2208;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InMemoryFile& operator=(InMemoryFile const&);
    InMemoryFile(InMemoryFile const&);
#endif // @header-generator platform
    InMemoryFile();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status append(::leveldb::Slice const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::leveldb::Status append(::leveldb::Slice const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::leveldb::Status close(::InMemoryAccessMode);

    MCNAPI ::leveldb::Status open(::InMemoryAccessMode);
#else // @header-generator platform
    MCNAPI ::Core::PathBuffer<::std::string> getFilename() const;
#endif // @header-generator platform
    // NOLINTEND
};
