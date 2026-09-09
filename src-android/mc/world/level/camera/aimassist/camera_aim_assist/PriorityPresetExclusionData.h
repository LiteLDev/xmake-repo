#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace CameraAimAssist {

struct PriorityPresetExclusionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mBlocks;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mActors;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mBlockTags;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mEntityTypeFamilies;
    // NOLINTEND
};

} // namespace CameraAimAssist
