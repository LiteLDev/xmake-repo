#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class HitResult;
class IBlockSource;
class Vec3;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class HitResult;
class IBlockSource;
class Vec3;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PickUpdater {

#if defined(LL_PLAT_A) // @header-generator platform
struct PickUpdateArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>              mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor const&>        mCameraActor;
    ::ll::TypedStorage<8, 8, ::IBlockSource const&> mBlockSource;
    ::ll::TypedStorage<4, 4, float>                 mRange;
    ::ll::TypedStorage<4, 4, float>                 mFrameAlpha;
    ::ll::UntypedStorage<1, 16>                     mUseFreeformPickDirection;
    ::ll::UntypedStorage<8, 48>                     mUpdateFreeformPickDirection;
    // NOLINTEND

public:
    // prevent constructor by default
    PickUpdateArguments& operator=(PickUpdateArguments const&);
    PickUpdateArguments(PickUpdateArguments const&);
    PickUpdateArguments();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PickUpdateArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor&>              mPlayer;
    ::ll::TypedStorage<8, 8, ::Actor const&>        mCameraActor;
    ::ll::TypedStorage<8, 8, ::IBlockSource const&> mBlockSource;
    ::ll::TypedStorage<4, 4, float>                 mRange;
    ::ll::TypedStorage<4, 4, float>                 mFrameAlpha;
    ::ll::TypedStorage<1, 1, bool>                  mUseFreeformPickDirection;
    ::ll::TypedStorage<8, 64, ::std::function<bool(float, ::Vec3&, ::Vec3&, ::HitResult&, ::HitResult&)>>
        mUpdateFreeformPickDirection;
    // NOLINTEND

public:
    // prevent constructor by default
    PickUpdateArguments& operator=(PickUpdateArguments const&);
    PickUpdateArguments(PickUpdateArguments const&);
    PickUpdateArguments();
};
#else // @header-generator platform
struct PickUpdateArguments {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PickUpdater
