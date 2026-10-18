#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagDefinition.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFlags.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_21_120 {

#if defined(LL_PLAT_A) // @header-generator platform
struct IsBabyDefinition
: public ::SharedTypes::ActorFlagDefinition<SharedTypes::v1_21_120::IsBabyDefinition, (ActorFlags)11> {
#else // @header-generator platform
struct IsBabyDefinition : public ::SharedTypes::ActorFlagDefinition<::SharedTypes::v1_21_120::IsBabyDefinition, 11> {
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
