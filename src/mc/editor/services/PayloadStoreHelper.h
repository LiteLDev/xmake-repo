#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc52f22;
    ::ll::UntypedStorage<8, 24> mUnk91d2d7;
    // NOLINTEND

public:
    // prevent constructor by default
    PayloadStoreHelper& operator=(PayloadStoreHelper const&);
    PayloadStoreHelper(PayloadStoreHelper const&);
    PayloadStoreHelper();
};

} // namespace Editor::Services
#endif // @header-generator platform
