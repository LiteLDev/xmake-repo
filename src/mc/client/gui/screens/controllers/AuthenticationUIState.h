#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
enum class AuthenticationUIState : int {
    None            = 0,
    Welcome         = 1,
    DemoSignIn      = 2,
    SignInPrompt    = 3,
    SignInPromptIOS = 4,
    TrialPopup      = 5,
    GeneralPopup    = 6,
    Eula            = 7,
    Purchase        = 8,
    PackLoad        = 9,
    EduGraphSignin  = 10,
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
enum class AuthenticationUIState : int {
    None            = 0,
    Welcome         = 1,
    DemoSignIn      = 2,
    SignInPrompt    = 3,
    SignInPromptIOS = 4,
    TrialPopup      = 5,
    GeneralPopup    = 6,
    Eula            = 7,
    Purchase        = 8,
    PackLoad        = 9,
    EduGraphSignin  = 10,
};
#else // @header-generator platform
enum class AuthenticationUIState : int {};
#endif // @header-generator platform
#endif // @header-generator platform
