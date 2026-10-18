#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEditionProperties {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const> mEdition;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf61746;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameEditionProperties& operator=(GameEditionProperties const&);
    GameEditionProperties(GameEditionProperties const&);
#endif // @header-generator platform
    GameEditionProperties();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameEditionProperties(std::string_view);

    MCNAPI bool isConsoleEdition() const;

    MCNAPI bool isIosEducationEdition() const;

    MCNAPI bool isPocketEdition() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit GameEditionProperties(::std::string_view edition);

    MCNAPI bool isPocketEdition() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::string_view edition);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
