#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/ScalarOptional.h"
#include "mc/world/level/chunk/SubChunkStorage.h"

// auto generated forward declare list
// clang-format off
class Biome;
class SubChunkBlockPos;
struct BiomeIdType;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class BlendingBiomeProvider3D {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::vector<std::unique_ptr<SubChunkStorage<Biome>>> const&> mBiomes;
    ::ll::TypedStorage<2, 2, ushort>                                                      mBiomeStackSize;
    ::ll::TypedStorage<8, 8, ::SubChunkStorage<Biome>*>                                   mBiomeChunkStorage;
    ::ll::TypedStorage<2, 2, short>                                                       mSubChunkBlockIndex;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk91af29;
    ::ll::UntypedStorage<2, 2> mUnk8317e2;
    ::ll::UntypedStorage<8, 8> mUnkcd9725;
    ::ll::UntypedStorage<2, 2> mUnk8135d0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingBiomeProvider3D& operator=(BlendingBiomeProvider3D const&);
    BlendingBiomeProvider3D(BlendingBiomeProvider3D const&);
    BlendingBiomeProvider3D();
};
