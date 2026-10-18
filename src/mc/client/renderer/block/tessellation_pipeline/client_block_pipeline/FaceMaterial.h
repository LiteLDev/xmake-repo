#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace ClientBlockPipeline { class Material; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct FaceMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Material const*> mMaterial;
    ::ll::TypedStorage<1, 1, uchar>                                  mTextureIndex;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FaceMaterial {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ClientBlockPipeline::Material const*> mMaterial;
    ::ll::TypedStorage<1, 1, uchar>                                  mTextureIndex;
    // NOLINTEND
};
#else // @header-generator platform
struct FaceMaterial {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline
