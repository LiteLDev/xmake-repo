#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/flattening_utils/log2/LogMapping.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace FlatteningUtils::Log2 {

struct LogMappingTypeNamePair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FlatteningUtils::Log2::LogMapping> blockType;
    ::ll::TypedStorage<8, 8, ::HashedString const&>               blockName;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMappingTypeNamePair& operator=(LogMappingTypeNamePair const&);
    LogMappingTypeNamePair(LogMappingTypeNamePair const&);
    LogMappingTypeNamePair();
};

} // namespace FlatteningUtils::Log2
