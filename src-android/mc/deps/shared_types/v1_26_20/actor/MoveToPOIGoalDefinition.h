#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct MoveToPOIGoalDefinition : public ::SharedTypes::BaseMoveToGoalDefinition {
public:
    // MoveToPOIGoalDefinition inner types define
    enum class POIType : int {
        InvalidPOI  = -1,
        Bed         = 0,
        MeetingArea = 1,
        Jobsite     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_20::MoveToPOIGoalDefinition::POIType> mPOIType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& DESCRIPTION();

    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& POI_TYPE_DESCRIPTION();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
