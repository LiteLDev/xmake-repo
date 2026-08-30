#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/IntRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct RandomLookAroundGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mLookAroundTime;
    ::ll::TypedStorage<4, 4, float>                   mMinAngleOfViewY;
    ::ll::TypedStorage<4, 4, float>                   mMaxAngleOfViewY;
    ::ll::TypedStorage<4, 4, float>                   mProbability;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SharedTypes::IntRange const& DEFAULT_LOOK_AROUND_TIME();

    MCNAPI static std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
