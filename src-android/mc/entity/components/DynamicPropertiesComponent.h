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
    ::ll::TypedStorage<8, 40, ::DynamicProperties> mDynamicProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicPropertiesComponent& operator=(DynamicPropertiesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag&, ::ILevel&) const;
    // NOLINTEND
};
