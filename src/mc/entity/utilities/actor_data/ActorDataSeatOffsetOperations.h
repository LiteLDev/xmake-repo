#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/ActorDataSeatOffsetComponent.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/components/ReplayStateValueDiff.h"
#include "mc/entity/utilities/actor_data/ActorDataSimpleOperations.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class Vec3;
struct ActorDataSeatOffsetComponent;
// clang-format on
#endif // @header-generator platform

namespace ActorData {

struct ActorDataSeatOffsetOperations
#if defined(LL_PLAT_A) // @header-generator platform
: public ::ActorData::ActorDataSimpleOperations<ReplayStateValueDiff<Vec3>, ActorDataSeatOffsetComponent, Vec3> {};
#else // @header-generator platform
: public ::ActorData::
      ActorDataSimpleOperations<::ReplayStateValueDiff<::Vec3>, ::ActorDataSeatOffsetComponent, ::Vec3> {};
#endif // @header-generator platform

} // namespace ActorData
