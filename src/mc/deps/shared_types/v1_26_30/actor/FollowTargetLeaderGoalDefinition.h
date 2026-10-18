#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"
#include "mc/deps/shared_types/v1_26_20/actor/MoveTowardsTargetGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct FollowTargetLeaderGoalDefinition : public ::SharedTypes::v1_26_20::MoveTowardsTargetGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                      mFollowDistance;
    ::ll::TypedStorage<1, 1, bool>                                       mAlwaysLookForLeader;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mLeaderFilters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mLeaderFilters;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                        mSearchCooldown;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FollowTargetLeaderGoalDefinition();

    MCNAPI ~FollowTargetLeaderGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_30::FollowTargetLeaderGoalDefinition const&) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
