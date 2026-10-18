#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Generation {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mGeneratorType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mGeneratorType;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
