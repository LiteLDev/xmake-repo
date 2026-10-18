#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityCategory.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/PriorityPreset.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace CameraAimAssist { class PriorityCategory; }
namespace CameraAimAssist { class PriorityPreset; }
#endif // @header-generator platform
// clang-format on

class CameraAimAssistRegistryComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, CameraAimAssist::PriorityPreset>> mPriorityPresets;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, CameraAimAssist::PriorityCategory>> mPriorityCategoryList;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::CameraAimAssist::PriorityPreset>> mPriorityPresets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::CameraAimAssist::PriorityCategory>>
        mPriorityCategoryList;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addPriorityPreset(::HashedString const&, ::CameraAimAssist::PriorityPreset&&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::CameraAimAssist::PriorityCategory const& getPriorityCategory(::HashedString const& id) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<HashedString, CameraAimAssist::PriorityCategory> const& getPriorityCategories() const;
#else // @header-generator platform
    MCAPI ::CameraAimAssist::PriorityPreset const& getPriorityPreset(::HashedString const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraAimAssist::PriorityCategory const& getPriorityCategory(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool hasPriorityPreset(::HashedString const& id) const;

    MCAPI void loadRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CameraAimAssist::PriorityPreset const& getPriorityPreset(::HashedString const&) const;
#else // @header-generator platform
    MCAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasPriorityPreset(::HashedString const&) const;

    MCNAPI void loadRegistryFromPacket(::CameraAimAssistPresetsPacket const&);

    MCNAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const&);

    MCNAPI ~CameraAimAssistRegistryComponent();
#else // @header-generator platform
    MCAPI ~CameraAimAssistRegistryComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
