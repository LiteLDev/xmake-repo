#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/EAS__BiomeAttributeSampler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
// clang-format on

namespace EAS {

class BiomeAttributeLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mPriority;
    ::ll::TypedStorage<4, 4, float>                        mWeight;
    ::ll::TypedStorage<4, 4, ::DimensionType>              mDimensionId;
    ::ll::UntypedStorage<8, 24>                            mDimensionManager;
    ::ll::TypedStorage<1, 1, ::EAS::BiomeAttributeSampler> mAttributeSampler;
    // NOLINTEND
};

} // namespace EAS
