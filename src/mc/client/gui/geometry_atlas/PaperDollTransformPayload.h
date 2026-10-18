#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct PaperDollTransformPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::PaperDollHandle>> mDoll;
    ::ll::TypedStorage<4, 4, float>                                            mPosX;
    ::ll::TypedStorage<4, 4, float>                                            mPosY;
    ::ll::TypedStorage<4, 4, float>                                            mScaleX;
    ::ll::TypedStorage<4, 4, float>                                            mScaleY;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PaperDollTransformPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::PaperDollHandle>> mDoll;
    ::ll::TypedStorage<4, 4, float>                                                mPosX;
    ::ll::TypedStorage<4, 4, float>                                                mPosY;
    ::ll::TypedStorage<4, 4, float>                                                mScaleX;
    ::ll::TypedStorage<4, 4, float>                                                mScaleY;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PaperDollTransformPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PaperDollTransformPayload {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
