#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct BlockMatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mBlockName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>> mBlockName;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
