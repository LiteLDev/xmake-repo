#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/ActorFlagDefinition.h"
#include "mc/world/actor/ActorFlags.h"

namespace SharedTypes::v1_26_40 {

struct NotPickableFromInsideDefinition
: public ::SharedTypes::ActorFlagDefinition<SharedTypes::v1_26_40::NotPickableFromInsideDefinition, (ActorFlags)130> {};

} // namespace SharedTypes::v1_26_40
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
