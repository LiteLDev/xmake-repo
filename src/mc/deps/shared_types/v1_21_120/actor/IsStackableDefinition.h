#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagCustomInitDefinition.h"

namespace SharedTypes::v1_21_120 {

struct IsStackableDefinition
#if defined(LL_PLAT_A) // @header-generator platform
: public ::SharedTypes::ActorFlagCustomInitDefinition<SharedTypes::v1_21_120::IsStackableDefinition> {
#else // @header-generator platform
: public ::SharedTypes::ActorFlagCustomInitDefinition<::SharedTypes::v1_21_120::IsStackableDefinition> {
#endif // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();

    MCNAPI static std::string_view const& TITLE();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
