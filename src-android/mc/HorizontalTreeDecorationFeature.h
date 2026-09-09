#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

class HorizontalTreeDecorationFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::BlockDescriptor> mBlockToPlace;
    ::ll::TypedStorage<1, 1, bool>                mAllowBarkSideOnly;
    ::ll::TypedStorage<1, 1, bool>                mAllowAdjacent;
    // NOLINTEND
};
