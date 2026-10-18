#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockSource;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockGraphics;
class BlockSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

class BlockTessellatorCache {
public:
    // BlockTessellatorCache inner types declare
    // clang-format off
    struct LocalRegistry;
    // clang-format on

    // BlockTessellatorCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mAirBlock;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache::LocalRegistry>         mLocalRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                    mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                 mRegion;
    ::ll::TypedStorage<1, 16000, std::array<BrightnessPair, 8000>>           mLightColors;
    ::ll::TypedStorage<8, 64000, std::array<const Block*, 8000>>             mBlocks;
    ::ll::TypedStorage<8, 64000, std::array<const Block*, 8000>>             mExtraBlocks;
    ::ll::TypedStorage<8, 128000, std::array<const BlockGraphics*, 8000>[2]> mBlockGraphics;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Block const& getBlock(::BlockPos const&);

    MCNAPI ::Block const& getExtraBlock(::BlockPos const&);

    MCNAPI ::BrightnessPair getLightColor(::BlockPos const&, ::Block const*);
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct LocalRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mAirBlock;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockTessellatorCache::LocalRegistry>             mLocalRegistry;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                        mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                     mRegion;
    ::ll::TypedStorage<1, 16000, ::std::array<::BrightnessPair, 8000>>           mLightColors;
    ::ll::TypedStorage<8, 64000, ::std::array<::Block const*, 8000>>             mBlocks;
    ::ll::TypedStorage<8, 64000, ::std::array<::Block const*, 8000>>             mExtraBlocks;
    ::ll::TypedStorage<8, 128000, ::std::array<::BlockGraphics const*, 8000>[2]> mBlockGraphics;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const& getBlock(::BlockPos const& p);

    MCAPI ::BlockGraphics const* getBlockGraphics(::BlockPos const& p, ::Block const& block, uint layer);

    MCAPI ::Block const& getExtraBlock(::BlockPos const& p);

    MCAPI ::BrightnessPair getLightColor(::BlockPos const& p, ::Block const* blockHint);
    // NOLINTEND
#else // @header-generator platform
    struct LocalRegistry {};
#endif // @header-generator platform
#endif // @header-generator platform
};
