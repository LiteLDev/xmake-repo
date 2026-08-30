#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class HitResult;
class IBlockSource;
class Vec3;
// clang-format on

namespace PickUpdater {

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

} // namespace PickUpdater
