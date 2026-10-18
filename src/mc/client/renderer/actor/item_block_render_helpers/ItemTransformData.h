#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace ItemBlockRenderHelpers {

#if defined(LL_PLAT_A) // @header-generator platform
struct ItemTransformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mGenericItemTranslation;
    ::ll::TypedStorage<4, 4, float>   mGenericItemScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mBlockTranslation;
    ::ll::TypedStorage<4, 4, float>   mBlockScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mSkullTranslation;
    ::ll::TypedStorage<4, 4, float>   mSkullScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mBannerTranslation;
    ::ll::TypedStorage<4, 4, float>   mBannerScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mShieldTranslation;
    ::ll::TypedStorage<4, 4, float>   mShieldScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mDecoratedPotTranslation;
    ::ll::TypedStorage<4, 4, float>   mDecoratedPotScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mCopperGolemStatueTranslation;
    ::ll::TypedStorage<4, 4, float>   mCopperGolemStatueScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mMapTranslation;
    ::ll::TypedStorage<4, 4, float>   mMapScale;
    // NOLINTEND
};
#else // @header-generator platform
struct ItemTransformData {};
#endif // @header-generator platform

} // namespace ItemBlockRenderHelpers
