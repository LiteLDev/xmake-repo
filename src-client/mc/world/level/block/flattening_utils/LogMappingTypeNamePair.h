#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/flattening_utils/LogMapping.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace FlatteningUtils::Log {

struct LogMappingTypeNamePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FlatteningUtils::Log::LogMapping> blockType;
    ::ll::TypedStorage<8, 8, ::HashedString const&>              blockName;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMappingTypeNamePair& operator=(LogMappingTypeNamePair const&);
    LogMappingTypeNamePair(LogMappingTypeNamePair const&);
    LogMappingTypeNamePair();
};

} // namespace FlatteningUtils::Log
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
