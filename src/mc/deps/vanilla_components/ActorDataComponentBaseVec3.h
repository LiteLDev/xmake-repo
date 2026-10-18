#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDataComponentBaseVec3 : public ::ActorDataComponentBase<Vec3> {};
#else // @header-generator platform
struct ActorDataComponentBaseVec3 : public ::ActorDataComponentBase<::Vec3> {};
#endif // @header-generator platform
