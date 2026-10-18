#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ClientTutorialService {
public:
    // ClientTutorialService inner types declare
    // clang-format off
    struct FallbackState;
    struct RuntimeState;
    // clang-format on

    // ClientTutorialService inner types define
    struct FallbackState {};

    struct RuntimeState {};
};

} // namespace Editor::Services
#endif // @header-generator platform
