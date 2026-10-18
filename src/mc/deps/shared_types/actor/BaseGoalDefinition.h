#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct BaseGoalDefinition {
public:
    // BaseGoalDefinition inner types define
    enum class Flag : int {
#if defined(LL_PLAT_A) // @header-generator platform
        none                  = 0,
        move                  = 1,
        look                  = 2,
        jump                  = 4,
        _entt_enum_as_bitmask = 5,
#else // @header-generator platform
        None              = 0,
        Move              = 1,
        Look              = 2,
        Jump              = 4,
        EnttEnumAsBitmask = 5,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                     mPriority;
    ::ll::TypedStorage<4, 4, ::SharedTypes::BaseGoalDefinition::Flag> mControlFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<SharedTypes::BaseGoalDefinition::Flag> flagsVec() const;
#else // @header-generator platform
    MCAPI ::std::vector<::SharedTypes::BaseGoalDefinition::Flag> flagsVec() const;
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
};

} // namespace SharedTypes
