#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Bounds.h"
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Generation.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_60::DimensionDefinition::Bounds>      mDimensionBoundsComponent;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_60::DimensionDefinition::Generation> mGeneration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::DimensionDefinition::Generation> mGeneration;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
