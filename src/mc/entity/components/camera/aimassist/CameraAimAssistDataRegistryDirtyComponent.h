#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct CameraAimAssistDataRegistryDirtyComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mDirtyPresets;
    ::ll::TypedStorage<8, 40, std::unordered_set<HashedString>> mDirtyCategories;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>> mDirtyPresets;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>> mDirtyCategories;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryDirtyComponent& operator=(CameraAimAssistDataRegistryDirtyComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CameraAimAssistDataRegistryDirtyComponent(CameraAimAssistDataRegistryDirtyComponent const&);
    CameraAimAssistDataRegistryDirtyComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CameraAimAssistDataRegistryDirtyComponent();
#else // @header-generator platform
    MCAPI ::CameraAimAssistDataRegistryDirtyComponent& operator=(::CameraAimAssistDataRegistryDirtyComponent&&);

    MCAPI ~CameraAimAssistDataRegistryDirtyComponent();
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
