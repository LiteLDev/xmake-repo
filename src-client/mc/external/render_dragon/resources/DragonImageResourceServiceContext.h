#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::tasks { class GraphicsTasks; }
// clang-format on

namespace dragon {

struct DragonImageResourceServiceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::dragon::tasks::GraphicsTasks&> mGraphicsTasks;
    // NOLINTEND

public:
    // prevent constructor by default
    DragonImageResourceServiceContext& operator=(DragonImageResourceServiceContext const&);
    DragonImageResourceServiceContext(DragonImageResourceServiceContext const&);
    DragonImageResourceServiceContext();
};

} // namespace dragon
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
