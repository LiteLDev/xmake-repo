#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class CollisionBoxComponent;
class StrictEntityContext;
template<typename... T0> class Include;
struct AABBRelativeSizeUpdateComponent;
struct AABBShapeComponent;
struct AbsoluteSizeUpdateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct CustomSizeUpdateComponent;
struct DepenetrationComponent;
struct IsHorizontalPoseFlagComponent;
struct MinecartFlagComponent;
struct NeverChangesSizeFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace UpdateBoundingBox {

struct SystemParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mAnyView;
    ::ll::UntypedStorage<8, 56>     mExcludeView;
    ::ll::UntypedStorage<8, 72>     mPlayerView;
    ::ll::UntypedStorage<8, 88>     mAllView;
    ::ll::UntypedStorage<8, 72>     mAabbRelativeView;
    ::ll::UntypedStorage<8, 64>     mAbsoluteView;
    ::ll::UntypedStorage<8, 80>     mShulkerView;
    ::ll::UntypedStorage<8, 80>     mMinecartsView;
    ::ll::UntypedStorage<8, 72>     mCustomView;
    ::ll::UntypedStorage<8, 8>      mModifier;
    ::ll::TypedStorage<4, 4, float> mSneakHeight;
    ::ll::TypedStorage<1, 1, bool>  mIsClientSide;
    // NOLINTEND
};

} // namespace UpdateBoundingBox
