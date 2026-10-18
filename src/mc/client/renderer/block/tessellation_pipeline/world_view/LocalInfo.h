#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/block/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline::WorldView {

#if defined(LL_PLAT_A) // @header-generator platform
struct LocalInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>         mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair const> mLight;
    ::ll::TypedStorage<1, 1, bool const>             mIsExternal;
    ::ll::TypedStorage<4, 4, float const>            mTextureShiftNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalInfo& operator=(LocalInfo const&);
    LocalInfo(LocalInfo const&);
    LocalInfo();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct LocalInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>         mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair const> mLight;
    ::ll::TypedStorage<1, 1, bool const>             mIsExternal;
    ::ll::TypedStorage<4, 4, float const>            mTextureShiftNoise;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalInfo& operator=(LocalInfo const&);
    LocalInfo(LocalInfo const&);
    LocalInfo();
};
#else // @header-generator platform
struct LocalInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline::WorldView
