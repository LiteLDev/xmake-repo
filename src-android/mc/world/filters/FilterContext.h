#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Biome;
class BiomeRegistry;
class Block;
class BlockSource;
class Dimension;
class Level;
struct VariantParameterListConst;
// clang-format on

struct FilterContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor const*>                     mHost;
    ::ll::TypedStorage<8, 8, ::Actor const*>                     mSubject;
    ::ll::TypedStorage<8, 8, ::VariantParameterListConst const*> mParams;
    ::ll::TypedStorage<8, 8, ::BlockSource const*>               mRegion;
    ::ll::TypedStorage<8, 8, ::Dimension const*>                 mDimension;
    ::ll::TypedStorage<8, 8, ::Level const*>                     mLevel;
    ::ll::TypedStorage<8, 8, ::Biome const*>                     mBiome;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mBlock;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const*>             mBiomeRegistry;
    // NOLINTEND
};
