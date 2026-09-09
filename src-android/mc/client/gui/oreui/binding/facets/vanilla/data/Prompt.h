#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptAction.h"

namespace OreUI {

struct Prompt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mId;
    ::ll::TypedStorage<1, 1, bool>                              mIsActive;
    ::ll::TypedStorage<8, 24, std::string>                      mTitle;
    ::ll::TypedStorage<8, 24, std::string>                      mBody;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PromptAction>> mActions;
    ::ll::TypedStorage<4, 8, std::optional<int>>                mChosenAction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int consumeChosenAction();

    MCNAPI bool hasChosenAction() const;

    MCNAPI void hide();

    MCNAPI void show(std::string, std::string, std::string, std::vector<OreUI::PromptAction>);

    MCNAPI void storeChosenAction(int);

    MCNAPI ~Prompt();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
