#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

struct FilterContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk990630;
    ::ll::UntypedStorage<8, 8>  mUnk6781de;
    ::ll::UntypedStorage<8, 8>  mUnkdf1412;
    ::ll::UntypedStorage<8, 8>  mUnk78f21a;
    ::ll::UntypedStorage<8, 8>  mUnkcdc418;
    ::ll::UntypedStorage<8, 8>  mUnkc189d1;
    ::ll::UntypedStorage<8, 8>  mUnka83bfd;
    ::ll::UntypedStorage<4, 12> mUnk7d28f6;
    ::ll::UntypedStorage<8, 8>  mUnka3d03c;
    ::ll::UntypedStorage<8, 8>  mUnk8c8c41;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilterContext& operator=(FilterContext const&);
    FilterContext(FilterContext const&);
    FilterContext();
#endif // @header-generator platform
};
