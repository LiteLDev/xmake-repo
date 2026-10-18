#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct PersistenceGroupManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk608222;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupManifest& operator=(PersistenceGroupManifest const&);
    PersistenceGroupManifest(PersistenceGroupManifest const&);
    PersistenceGroupManifest();
};

} // namespace Editor::Services
#endif // @header-generator platform
