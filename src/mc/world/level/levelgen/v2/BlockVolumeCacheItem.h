#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockVolume.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace br::worldgen {

struct BlockVolumeCacheItem {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::vector<const Block*>>> mBuffer;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                             mVolume;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVolumeCacheItem& operator=(BlockVolumeCacheItem const&);
    BlockVolumeCacheItem(BlockVolumeCacheItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockVolumeCacheItem();

    MCNAPI ~BlockVolumeCacheItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::vector<::Block const*>>> mBuffer;
    ::ll::TypedStorage<8, 40, ::BlockVolume>                                   mVolume;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
