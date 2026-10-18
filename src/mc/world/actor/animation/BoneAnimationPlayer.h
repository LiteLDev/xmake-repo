#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/animation/BoneAnimationChannelPlayer.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct BoneAnimationChannelPlayer;
// clang-format on
#endif // @header-generator platform

struct BoneAnimationPlayer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<BoneAnimationChannelPlayer>> mBoneAnimationChannelPlayers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneAnimationChannelPlayer>> mBoneAnimationChannelPlayers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BoneAnimationPlayer();
#else // @header-generator platform
#endif // @header-generator platform
};
