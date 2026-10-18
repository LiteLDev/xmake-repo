#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/vanilla_components/ActorDataControllingSeatIndexComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct ActorDataControllingSeatIndexComponent;
// clang-format on
#endif // @header-generator platform

namespace ActorData {

struct ActorDataControllingSeatIndexOperations
: public ::ActorData::
#if defined(LL_PLAT_A) // @header-generator platform
      ActorDataSimpleOperations<ReplayStateValueDiff<schar>, ActorDataControllingSeatIndexComponent, schar> {};
#else // @header-generator platform
      ActorDataSimpleOperations<::ReplayStateValueDiff<schar>, ::ActorDataControllingSeatIndexComponent, schar> {};
#endif // @header-generator platform

} // namespace ActorData
