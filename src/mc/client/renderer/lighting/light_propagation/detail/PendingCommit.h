#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/detail/SubChunkDimensionPos.h"

// auto generated forward declare list
// clang-format off
namespace LightPropagation { struct LightAccumulationVolume; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingCommit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::LightPropagation::Detail::SubChunkDimensionPos>          mVolumePos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LightPropagation::LightAccumulationVolume>> mVolume;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingCommit& operator=(PendingCommit const&);
    PendingCommit(PendingCommit const&);
};
#else // @header-generator platform
struct PendingCommit {};
#endif // @header-generator platform

} // namespace LightPropagation::Detail
