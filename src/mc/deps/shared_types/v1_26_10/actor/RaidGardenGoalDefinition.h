#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_26_10 {

struct RaidGardenGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                       mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                       mFullDelay;
    ::ll::TypedStorage<4, 4, int>                       mEatDelay;
    ::ll::TypedStorage<4, 4, int>                       mInitialEatDelay;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEatBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                           mMaxToEat;
    ::ll::TypedStorage<4, 4, int>                           mFullDelay;
    ::ll::TypedStorage<4, 4, int>                           mEatDelay;
    ::ll::TypedStorage<4, 4, int>                           mInitialEatDelay;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mEatBlocks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::SharedTypes::v1_26_10::RaidGardenGoalDefinition const&) const;
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
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
