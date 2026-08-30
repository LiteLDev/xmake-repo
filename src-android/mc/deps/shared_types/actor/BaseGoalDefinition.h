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
        none                  = 0,
        move                  = 1,
        look                  = 2,
        jump                  = 4,
        _entt_enum_as_bitmask = 5,
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
    MCNAPI std::vector<SharedTypes::BaseGoalDefinition::Flag> flagsVec() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};

} // namespace SharedTypes
