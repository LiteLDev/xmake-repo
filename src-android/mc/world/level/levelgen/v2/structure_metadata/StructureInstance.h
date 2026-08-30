#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/structure/PoolElementStructureSection.h"
#include "mc/world/level/BlockPos.h"

namespace StructureMetadata {

struct StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mMinBounds;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                      mMaxBounds;
    ::ll::TypedStorage<8, 24, std::string>                                                     mStructure;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_50::PoolElementStructureSection>> mSections;
    // NOLINTEND
};

} // namespace StructureMetadata
