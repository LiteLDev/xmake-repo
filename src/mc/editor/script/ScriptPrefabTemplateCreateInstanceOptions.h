#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct ScriptPrefabTemplateCreateInstanceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk51043e;
    ::ll::UntypedStorage<1, 2> mUnk3f54b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabTemplateCreateInstanceOptions& operator=(ScriptPrefabTemplateCreateInstanceOptions const&);
    ScriptPrefabTemplateCreateInstanceOptions(ScriptPrefabTemplateCreateInstanceOptions const&);
    ScriptPrefabTemplateCreateInstanceOptions();
};

} // namespace Editor::ScriptModule
#endif // @header-generator platform
