#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseMoveToBlockGoalDefinition.h"

namespace SharedTypes::v1_26_10 {

#if defined(LL_PLAT_A) // @header-generator platform
struct InspectBookshelfGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {};
#else // @header-generator platform
struct InspectBookshelfGoalDefinition : public ::SharedTypes::BaseMoveToBlockGoalDefinition {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace SharedTypes::v1_26_10
