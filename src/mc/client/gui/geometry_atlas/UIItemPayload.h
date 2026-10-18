#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct UIItemPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::IItemHandle>> mItem;
    ::ll::TypedStorage<4, 4, float>                                        mX;
    ::ll::TypedStorage<4, 4, float>                                        mY;
    ::ll::TypedStorage<4, 4, float>                                        mLightMultiplier;
    ::ll::TypedStorage<4, 4, float>                                        mAlphaMultiplier;
    ::ll::TypedStorage<4, 4, float>                                        mScale;
    ::ll::TypedStorage<4, 4, int>                                          mFrame;
    ::ll::TypedStorage<1, 1, bool>                                         mAllowAnimation;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct UIItemPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::IItemHandle>> mItem;
    ::ll::TypedStorage<4, 4, float>                                            mX;
    ::ll::TypedStorage<4, 4, float>                                            mY;
    ::ll::TypedStorage<4, 4, float>                                            mLightMultiplier;
    ::ll::TypedStorage<4, 4, float>                                            mAlphaMultiplier;
    ::ll::TypedStorage<4, 4, float>                                            mScale;
    ::ll::TypedStorage<4, 4, int>                                              mFrame;
    ::ll::TypedStorage<1, 1, bool>                                             mAllowAnimation;
    // NOLINTEND
};
#else // @header-generator platform
struct UIItemPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
