#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/detail/SubChunkDimensionPos.h"

// auto generated forward declare list
// clang-format off
namespace LightPropagation { struct LightAccumulationVolume; }
// clang-format on

namespace LightPropagation::Detail {

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

} // namespace LightPropagation::Detail
