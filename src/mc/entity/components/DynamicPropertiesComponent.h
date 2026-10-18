#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicProperties.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ILevel;
// clang-format on

class DynamicPropertiesComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::DynamicProperties> mDynamicProperties;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::DynamicProperties> mDynamicProperties;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::ILevel&) const;
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag, ::ILevel& level) const;
#endif // @header-generator platform
    // NOLINTEND
};
