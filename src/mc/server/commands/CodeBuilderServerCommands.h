#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Minecraft;
// clang-format on

class CodeBuilderServerCommands {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setupStandardServer(::Minecraft&, std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class CodeBuilderServerCommands {};
#endif // @header-generator platform
