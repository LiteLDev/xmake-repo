#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class CondVar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf34b20;
    // NOLINTEND

public:
    // prevent constructor by default
    CondVar& operator=(CondVar const&);
    CondVar(CondVar const&);
    CondVar();
};

} // namespace absl
#endif // @header-generator platform
