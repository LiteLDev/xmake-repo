#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct CustomBiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk81fa1a;
    ::ll::UntypedStorage<8, 16> mUnkc4f1cc;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomBiomeData& operator=(CustomBiomeData const&);
    CustomBiomeData(CustomBiomeData const&);
    CustomBiomeData();
};

} // namespace Editor::Services
#endif // @header-generator platform
