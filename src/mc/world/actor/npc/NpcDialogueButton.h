#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct NpcDialogueButton {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                mButtonName;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mCommands;
    ::ll::TypedStorage<8, 32, ::std::string>                mURL;
#endif // @header-generator platform
    // NOLINTEND
};
