#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptMeshLoadOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk303f14;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMeshLoadOptions& operator=(ScriptMeshLoadOptions const&);
    ScriptMeshLoadOptions(ScriptMeshLoadOptions const&);
    ScriptMeshLoadOptions();
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
