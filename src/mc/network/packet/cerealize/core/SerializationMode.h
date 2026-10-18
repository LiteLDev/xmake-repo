#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SerializationMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
    ManualOnly                          = 0,
    SideBySide_LogOnMismatch            = 1,
    SideBySide_AssertOnMismatch         = 2,
    SemanticSideBySide_LogOnMismatch    = 3,
    SemanticSideBySide_AssertOnMismatch = 4,
    CerealOnly                          = 5,
#else // @header-generator platform
    ManualOnly                         = 0,
    SideBySideLogOnMismatch            = 1,
    SideBySideAssertOnMismatch         = 2,
    SemanticSideBySideLogOnMismatch    = 3,
    SemanticSideBySideAssertOnMismatch = 4,
    CerealOnly                         = 5,
#endif // @header-generator platform
};
