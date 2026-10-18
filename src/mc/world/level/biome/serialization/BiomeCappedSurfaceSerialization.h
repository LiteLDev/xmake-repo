#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
struct BiomeCappedSurfaceData;
struct CappedSurfaceAttributes;
// clang-format on

namespace BiomeCappedSurfaceSerialization {
// functions
// NOLINTBEGIN
MCAPI void applySerializedCappedSurfaceData(
    ::BiomeCappedSurfaceData const& data,
    ::CappedSurfaceAttributes&      cappedSurface,
    ::BlockPalette const&           blockPalette
);

MCAPI void serializeCappedSurfaceData(::CappedSurfaceAttributes const& cappedSurface, ::BiomeCappedSurfaceData& data);
// NOLINTEND

} // namespace BiomeCappedSurfaceSerialization
#endif // @header-generator platform
