#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeSurfaceMaterialData;
struct SurfaceMaterialAttributes;
// clang-format on

namespace BiomeSurfaceMaterialSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedSurfaceMaterialAttributeData(
    ::BiomeSurfaceMaterialData const& data,
    ::SurfaceMaterialAttributes&      surfaceMaterialAttributes,
    ::BlockPalette const&             blockPalette
);
// NOLINTEND

} // namespace BiomeSurfaceMaterialSerialization
#endif // @header-generator platform
