#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityPresetExclusionData.h"

namespace CameraAimAssist {

class PriorityPreset {
public:
    // PriorityPreset inner types define
    using ItemCategoryIdTable = std::unordered_map<HashedString, HashedString>;

    using PriorityCategoryName = ::HashedString;

    using ItemName = ::HashedString;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mId;
    ::ll::TypedStorage<8, 160, ::CameraAimAssist::PriorityPresetExclusionData> mExclusionList;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>>                mLiquidTargetingItemsList;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>>  mItemCategoryIdTable;
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mHandCategory;
    ::ll::TypedStorage<8, 40, ::HashedString>                                  mDefaultCategory;
    // NOLINTEND
};

} // namespace CameraAimAssist
