#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagCustomInitDefinition.h"

namespace SharedTypes::v1_26_40 {

struct CannotBeAttackedDefinition
: public ::SharedTypes::ActorFlagCustomInitDefinition<::SharedTypes::v1_26_40::CannotBeAttackedDefinition> {
public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
#endif // @header-generator platform
