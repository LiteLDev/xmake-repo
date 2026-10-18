#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"
#include "mc/deps/shared_types/v1_21_20/filter_groups/FilterGroupData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct TakeBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData>         mCanTake;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnTake;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mYRange;
    ::ll::TypedStorage<4, 4, float>                                              mChance;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                                               mRequiresLineOfSight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mValidBlocks;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>             mCanTake;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>     mOnTake;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                                mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                                mYRange;
    ::ll::TypedStorage<4, 4, float>                                                  mChance;
    ::ll::TypedStorage<1, 1, bool>                                                   mAffectedByGriefingRule;
    ::ll::TypedStorage<1, 1, bool>                                                   mRequiresLineOfSight;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TakeBlockGoalDefinition& operator=(TakeBlockGoalDefinition const&);
#if defined(LL_PLAT_A) // @header-generator platform
    TakeBlockGoalDefinition(TakeBlockGoalDefinition const&);
#else // @header-generator platform
    TakeBlockGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_30::TakeBlockGoalDefinition&
#else // @header-generator platform
    MCAPI TakeBlockGoalDefinition(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

    MCAPI TakeBlockGoalDefinition(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::TakeBlockGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TakeBlockGoalDefinition();
#else // @header-generator platform
    MCAPI ~TakeBlockGoalDefinition();
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
    MCNAPI static bool const& DEFAULT_AFFECTED_BY_GRIEFING_RULE();
#else // @header-generator platform
    MCAPI static bool const& DEFAULT_AFFECTED_BY_GRIEFING_RULE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_CHANCE();
#else // @header-generator platform
    MCAPI static bool const& DEFAULT_REQUIRES_LINE_OF_SIGHT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool const& DEFAULT_REQUIRES_LINE_OF_SIGHT();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::TakeBlockGoalDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_30::TakeBlockGoalDefinition const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
