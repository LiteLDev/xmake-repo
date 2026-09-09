#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mButtonName;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mCommands;
    ::ll::TypedStorage<8, 24, std::string>              mURL;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogueButton& operator=(NpcDialogueButton const&);
    NpcDialogueButton(NpcDialogueButton const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NpcDialogueButton();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
