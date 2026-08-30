#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/set/Description.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/RandomSpreadPlacement.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/Structure.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_20::JigsawStructureSet::Description>           mDescription;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_21_20::JigsawStructureSet::RandomSpreadPlacement> mPlacement;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_21_20::JigsawStructureSet::Structure>>  mStructures;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
