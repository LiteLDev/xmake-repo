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

struct PlaceBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // PlaceBlockGoalDefinition inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // PlaceBlockGoalDefinition inner types define
    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>    mBlock;
        ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
#else // @header-generator platform
        ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor>    mBlock;
        ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData> mFilter;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                                        mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        WeightedBlockDescriptor(WeightedBlockDescriptor const&);
#else // @header-generator platform
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
        WeightedBlockDescriptor();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&
        operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);
#else // @header-generator platform
        MCAPI WeightedBlockDescriptor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&) const;
#else // @header-generator platform
        MCAPI
        WeightedBlockDescriptor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~WeightedBlockDescriptor();
#else // @header-generator platform
        MCAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&) const;
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // static functions
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void bindType(::cereal::ReflectionCtx&);
        // NOLINTEND
#else // @header-generator platform
        MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor const&);
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor>> mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 192, ::SharedTypes::v1_21_20::FilterGroupData> mCanPlace;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnPlace;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mYRange;
    ::ll::TypedStorage<4, 4, float> mChance;
    ::ll::TypedStorage<1, 1, bool> mAffectedByGriefingRule;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mPlaceableCarriedBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_30::PlaceBlockGoalDefinition::WeightedBlockDescriptor>>
                                                                                 mRandomlyPlaceableBlocks;
    ::ll::TypedStorage<8, 232, ::SharedTypes::v1_21_20::FilterGroupData>         mCanPlace;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger> mOnPlace;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mXZRange;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange>                            mYRange;
    ::ll::TypedStorage<4, 4, float>                                              mChance;
    ::ll::TypedStorage<1, 1, bool>                                               mAffectedByGriefingRule;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    PlaceBlockGoalDefinition& operator=(PlaceBlockGoalDefinition const&);
    PlaceBlockGoalDefinition(PlaceBlockGoalDefinition const&);
#else // @header-generator platform
    PlaceBlockGoalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
#else // @header-generator platform
    MCAPI PlaceBlockGoalDefinition(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

    MCAPI PlaceBlockGoalDefinition(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);

    MCAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
#endif // @header-generator platform
    operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&) const;
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&
    operator=(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlaceBlockGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&) const;

    MCAPI ~PlaceBlockGoalDefinition();
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
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_CHANCE();
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_26_30::PlaceBlockGoalDefinition const&);
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
