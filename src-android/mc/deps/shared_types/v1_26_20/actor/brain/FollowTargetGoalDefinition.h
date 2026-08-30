#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryIdentifierDefinition.h"
#include "mc/deps/shared_types/v1_26_10/actor/BaseGenericGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Brain { struct EntityRefMemory; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::Brain::MemoryGoals {

struct FollowTargetGoalDefinition : public ::SharedTypes::v1_26_10::Brain::BaseGenericGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSpeedModifier;
    ::ll::UntypedStorage<8, 40>     mTargetMemory;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain::MemoryGoals
