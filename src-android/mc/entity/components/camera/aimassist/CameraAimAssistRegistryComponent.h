#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityCategory.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityPreset.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
// clang-format on

class CameraAimAssistRegistryComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, CameraAimAssist::PriorityPreset>> mPriorityPresets;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, CameraAimAssist::PriorityCategory>> mPriorityCategoryList;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPriorityPreset(::HashedString const&, ::CameraAimAssist::PriorityPreset&&);

    MCNAPI std::unordered_map<HashedString, CameraAimAssist::PriorityCategory> const& getPriorityCategories() const;

    MCNAPI ::CameraAimAssist::PriorityCategory const& getPriorityCategory(::HashedString const&) const;

    MCNAPI ::CameraAimAssist::PriorityPreset const& getPriorityPreset(::HashedString const&) const;

    MCNAPI bool hasPriorityPreset(::HashedString const&) const;

    MCNAPI void loadRegistryFromPacket(::CameraAimAssistPresetsPacket const&);

    MCNAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const&);

    MCNAPI ~CameraAimAssistRegistryComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
