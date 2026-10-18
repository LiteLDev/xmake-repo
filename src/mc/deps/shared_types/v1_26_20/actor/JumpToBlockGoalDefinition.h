#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/item/ItemDescriptor.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace SharedTypes::Legacy { struct ItemDescriptor; }
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct JumpToBlockGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                               mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                               mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                               mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                               mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                         mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                             mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                             mMaxVelocity;
    ::ll::TypedStorage<4, 4, float>                                             mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mPreferredBlocks;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ItemDescriptor>> mForbiddenBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                   mSearchWidth;
    ::ll::TypedStorage<4, 4, int>                                                   mSearchHeight;
    ::ll::TypedStorage<4, 4, int>                                                   mMinPathLength;
    ::ll::TypedStorage<4, 4, int>                                                   mMinDistance;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                             mCooldownTime;
    ::ll::TypedStorage<4, 4, float>                                                 mScaleFactor;
    ::ll::TypedStorage<4, 4, float>                                                 mMaxVelocity;
    ::ll::TypedStorage<4, 4, float>                                                 mPreferredBlocksChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mPreferredBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ItemDescriptor>> mForbiddenBlocks;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::JumpToBlockGoalDefinition const&) const;

    MCNAPI ~JumpToBlockGoalDefinition();
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_26_20::JumpToBlockGoalDefinition const&) const;
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
    MCNAPI static ::SharedTypes::FloatRange const& DEFAULT_COOLDOWN_TIMEOUT_RANGE();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_MAX_VELOCITY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_MAX_VELOCITY();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_MIN_DISTANCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_MIN_DISTANCE();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_MIN_PATH_LENGTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_MIN_PATH_LENGTH();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_PREFERRED_BLOCKS_CHANCE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_PREFERRED_BLOCKS_CHANCE();
#else // @header-generator platform
    MCAPI static float const& DEFAULT_SCALE_FACTOR();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static float const& DEFAULT_SCALE_FACTOR();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_HEIGHT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_HEIGHT();
#else // @header-generator platform
    MCAPI static int const& DEFAULT_SEARCH_WIDTH();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static int const& DEFAULT_SEARCH_WIDTH();

    MCNAPI static std::string_view const& NAME();
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

} // namespace SharedTypes::v1_26_20
