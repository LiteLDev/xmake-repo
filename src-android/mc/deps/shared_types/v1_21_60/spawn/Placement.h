#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::Spawn {

struct Placement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 24, std::string> mHeightmap;
    ::ll::TypedStorage<8, 24, std::string> mEntitySpawnPredicate;
    ::ll::TypedStorage<8, 24, std::string> mObstructionPredicate;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
