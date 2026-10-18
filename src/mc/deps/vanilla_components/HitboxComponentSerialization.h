#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HitboxComponent;
// clang-format on

namespace HitboxComponentSerialization {
// functions
// NOLINTBEGIN
MCAPI void fromCompoundTag(::HitboxComponent& result, ::CompoundTag const& tag);

MCAPI void toCompoundTag(::HitboxComponent const& source, ::CompoundTag& tag);
// NOLINTEND

} // namespace HitboxComponentSerialization
#endif // @header-generator platform
