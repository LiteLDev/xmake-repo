#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/file/File.h"
#include "mc/deps/core/file/PathBuffer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace RakNet { class BitStream; }
// clang-format on

class RegionFile {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // RegionFile inner types define
    using FreeSectorMap = std::map<int, bool>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Core::File>            mFile;
    ::ll::UntypedStorage<8, 24>                        mFileName;
    ::ll::TypedStorage<4, 4096, std::array<int, 1024>> mOffsets;
    ::ll::TypedStorage<4, 4096, std::array<int, 1024>> mEmptyChunk;
    ::ll::TypedStorage<8, 24, std::map<int, bool>>     mSectorFree;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16>   mUnkca2fa5;
    ::ll::UntypedStorage<8, 32>   mUnk99fc85;
    ::ll::UntypedStorage<4, 4096> mUnkc2201d;
    ::ll::UntypedStorage<4, 4096> mUnkc111dd;
    ::ll::UntypedStorage<8, 16>   mUnke50b19;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RegionFile& operator=(RegionFile const&);
    RegionFile(RegionFile const&);
#endif // @header-generator platform
    RegionFile();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~RegionFile();
#else // @header-generator platform
    virtual ~RegionFile() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RegionFile(::Core::Path const&);
#else // @header-generator platform
    MCNAPI explicit RegionFile(::Core::Path const& basePath);
#endif // @header-generator platform

    MCNAPI bool open();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool readChunk(int, int, ::RakNet::BitStream**);
#else // @header-generator platform
    MCNAPI bool readChunk(int x, int z, ::RakNet::BitStream** destChunkData);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI void* $ctor(::Core::Path const& basePath);
#endif // @header-generator platform
    // NOLINTEND
};
