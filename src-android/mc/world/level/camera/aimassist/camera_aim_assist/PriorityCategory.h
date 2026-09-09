#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace CameraAimAssist {

class PriorityCategory {
public:
    // PriorityCategory inner types define
    using TargetPriorityTable = std::unordered_map<HashedString, int>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                        mId;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultBlockPriority;
    ::ll::TypedStorage<4, 4, int>                                    mDefaultEntityPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mBlockPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mEntityPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mBlockTagPriority;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, int>> mEntityTypeFamilyPriority;
    // NOLINTEND
};

} // namespace CameraAimAssist
