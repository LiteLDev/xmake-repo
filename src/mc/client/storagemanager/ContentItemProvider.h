#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/storagemanager/ContentType.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace StorageManager { class ContentCollectionGroup; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace StorageManager {

#if defined(LL_PLAT_A) // @header-generator platform
class ContentItemProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mStorageContentCollections;
    // NOLINTEND
};
#else // @header-generator platform
class ContentItemProvider {};
#endif // @header-generator platform

} // namespace StorageManager
