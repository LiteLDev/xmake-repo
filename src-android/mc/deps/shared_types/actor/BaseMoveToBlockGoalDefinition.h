#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes {

struct BaseMoveToBlockGoalDefinition : public ::SharedTypes::BaseMoveToGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSearchCount;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseMoveToBlockGoalDefinition();
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

    MCNAPI static std::string_view const& SEARCH_COUNT_DESCRIPTION();

    MCNAPI static std::string_view const& SEARCH_HEIGHT_DESCRIPTION();

    MCNAPI static std::string_view const& SEARCH_RANGE_DESCRIPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace SharedTypes
