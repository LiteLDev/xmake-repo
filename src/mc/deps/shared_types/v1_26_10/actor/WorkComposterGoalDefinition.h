#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/actor/WorkGoalDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_26_10 {

struct WorkComposterGoalDefinition : public ::SharedTypes::v1_26_10::WorkGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxUseBlockDelay;
    ::ll::TypedStorage<4, 4, int>  mMaxItemsPerUse;
    ::ll::TypedStorage<4, 4, int>  mMaxBlockInteractions;
    ::ll::TypedStorage<1, 1, bool> mCanFillComposter;
    ::ll::TypedStorage<1, 1, bool> mCanEmptyComposter;
    ::ll::TypedStorage<4, 4, int>  mMinItemCount;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_10::WorkComposterGoalDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace SharedTypes::v1_26_10
