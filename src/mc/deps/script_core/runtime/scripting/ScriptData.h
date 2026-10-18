#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<8, 24, std::string> data;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke00184;
    ::ll::UntypedStorage<8, 32> mUnk858eda;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptData& operator=(ScriptData const&);
    ScriptData(ScriptData const&);
    ScriptData();
#endif // @header-generator platform
};

} // namespace Scripting
