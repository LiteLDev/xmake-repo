#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IHitResultContainer.h"
#include "mc/world/phys/HitResult.h"

namespace HitResultContainer {

struct LocalPlayerContainer : public ::IHitResultContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<HitResult, HitResult>>> mHits;
    // NOLINTEND
};

} // namespace HitResultContainer
