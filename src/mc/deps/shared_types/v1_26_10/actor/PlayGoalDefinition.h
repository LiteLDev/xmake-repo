#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/v1_21_120/actor/EntityTypes.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_10 {

struct PlayGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                                  mMaxPlayDurationSeconds;
    ::ll::TypedStorage<4, 4, float>                                  mChanceToStart;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_120::EntityTypes> mFriendTypes;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mFriendSearchArea;
    ::ll::TypedStorage<4, 4, int>                                    mRandomPosSearchRange;
    ::ll::TypedStorage<4, 4, int>                                    mRandomPosSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                    mFollowDistanceInBlocks;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_10::PlayGoalDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Vec3 const& DEFAULT_FRIEND_SEARCH_AREA();

    MCAPI static ::SemVersionConstant const& JSONUTIL_DROP_UNRECOGNIZED_FIELDS_VERSION();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_10
