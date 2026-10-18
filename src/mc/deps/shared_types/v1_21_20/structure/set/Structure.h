#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/util/AssetType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>     mStructure;
    ::ll::TypedStorage<1, 1, uchar> mWeight;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<13>> mStructure;
    ::ll::TypedStorage<1, 1, uchar>                         mWeight;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet
