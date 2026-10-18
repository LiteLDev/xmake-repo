#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct FileSelectorOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3c2d69;
    ::ll::UntypedStorage<8, 40> mUnk72923c;
    ::ll::UntypedStorage<4, 4>  mUnk3eb06a;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSelectorOptions& operator=(FileSelectorOptions const&);
    FileSelectorOptions(FileSelectorOptions const&);
    FileSelectorOptions();
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
