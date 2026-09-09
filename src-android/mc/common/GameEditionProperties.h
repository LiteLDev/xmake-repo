#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameEditionProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mEdition;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEditionProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameEditionProperties(std::string_view);

    MCNAPI bool isConsoleEdition() const;

    MCNAPI bool isIosEducationEdition() const;

    MCNAPI bool isPocketEdition() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view);
    // NOLINTEND
};
