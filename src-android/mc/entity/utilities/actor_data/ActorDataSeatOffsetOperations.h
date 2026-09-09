#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/ActorDataSeatOffsetComponent.h"
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"

namespace ActorData {

struct ActorDataSeatOffsetOperations
: public ::ActorData::ActorDataSimpleOperations<ReplayStateValueDiff<Vec3>, ActorDataSeatOffsetComponent, Vec3> {};

} // namespace ActorData
