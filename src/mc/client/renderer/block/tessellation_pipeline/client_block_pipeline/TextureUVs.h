#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct TextureUVCoordinateSet;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>  mU0;
    ::ll::TypedStorage<4, 4, float>  mV0;
    ::ll::TypedStorage<4, 4, float>  mU1;
    ::ll::TypedStorage<4, 4, float>  mV1;
    ::ll::TypedStorage<4, 4, float>  mWeight;
    ::ll::TypedStorage<2, 2, ushort> mPBRTextureDataHandle;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>  mU0;
    ::ll::TypedStorage<4, 4, float>  mV0;
    ::ll::TypedStorage<4, 4, float>  mU1;
    ::ll::TypedStorage<4, 4, float>  mV1;
    ::ll::TypedStorage<4, 4, float>  mWeight;
    ::ll::TypedStorage<2, 2, ushort> mPBRTextureDataHandle;
    // NOLINTEND
};
#else // @header-generator platform
struct TextureUVs {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
