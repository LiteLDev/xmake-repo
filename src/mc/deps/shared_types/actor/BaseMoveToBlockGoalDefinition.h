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
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseMoveToBlockGoalDefinition();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
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
    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& SEARCH_COUNT_DESCRIPTION();

    MCNAPI static std::string_view const& SEARCH_HEIGHT_DESCRIPTION();

    MCNAPI static std::string_view const& SEARCH_RANGE_DESCRIPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes
