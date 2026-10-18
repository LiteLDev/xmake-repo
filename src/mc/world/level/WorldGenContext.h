#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Aquifer;
class Block;
class BlockPos;
class IPreliminarySurfaceProvider;
// clang-format on

struct WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16> mAquifer;
    ::ll::UntypedStorage<8, 48> mTickUpdateFn;
    ::ll::UntypedStorage<8, 16> mPreliminarySurfaceProvider;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Aquifer*>                                                     mAquifer;
    ::ll::TypedStorage<8, 64, ::std::function<void(::BlockPos const&, ::Block const&, int)>> mTickUpdateFn;
    ::ll::TypedStorage<8, 8, ::IPreliminarySurfaceProvider const*> mPreliminarySurfaceProvider;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
#else // @header-generator platform
#endif // @header-generator platform
};
