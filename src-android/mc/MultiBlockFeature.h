#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class MultiBlockFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>                mBlock;
    ::ll::TypedStorage<8, 168, ::BlockDescriptor>           mBlockDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<1, 1, bool>                          mEnforcePlacementRules;
    ::ll::TypedStorage<1, 1, bool>                          mRandomRotation;
    // NOLINTEND
};
