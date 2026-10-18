#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayStatus : int {
#if defined(LL_PLAT_A) // @header-generator platform
    LoginSuccess                              = 0,
    LoginFailed_ClientOld                     = 1,
    LoginFailed_ServerOld                     = 2,
    PlayerSpawn                               = 3,
    LoginFailed_InvalidTenant                 = 4,
    LoginFailed_EditionMismatchEduToVanilla   = 5,
    LoginFailed_EditionMismatchVanillaToEdu   = 6,
    LoginFailed_ServerFullSubClient           = 7,
    LoginFailed_EditorMismatchEditorToVanilla = 8,
    LoginFailed_EditorMismatchVanillaToEditor = 9,
#else // @header-generator platform
    LoginSuccess                             = 0,
    LoginFailedClientOld                     = 1,
    LoginFailedServerOld                     = 2,
    PlayerSpawn                              = 3,
    LoginFailedInvalidTenant                 = 4,
    LoginFailedEditionMismatchEduToVanilla   = 5,
    LoginFailedEditionMismatchVanillaToEdu   = 6,
    LoginFailedServerFullSubClient           = 7,
    LoginFailedEditorMismatchEditorToVanilla = 8,
    LoginFailedEditorMismatchVanillaToEditor = 9,
#endif // @header-generator platform
};
