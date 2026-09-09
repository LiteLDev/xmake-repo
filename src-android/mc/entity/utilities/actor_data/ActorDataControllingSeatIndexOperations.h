#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataControllingSeatIndexComponent.h"
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"

namespace ActorData {

struct ActorDataControllingSeatIndexOperations
: public ::ActorData::
      ActorDataSimpleOperations<ReplayStateValueDiff<schar>, ActorDataControllingSeatIndexComponent, schar> {};

} // namespace ActorData
