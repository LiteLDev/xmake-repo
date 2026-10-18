#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetSerializeResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> contentType;
    ::ll::TypedStorage<8, 24, std::string> body;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk6a61e5;
    ::ll::UntypedStorage<8, 32> mUnkd7a2e3;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptNetSerializeResult& operator=(ScriptNetSerializeResult const&);
    ScriptNetSerializeResult(ScriptNetSerializeResult const&);
    ScriptNetSerializeResult();
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraftNet
