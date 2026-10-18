#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptAction.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { struct PromptAction; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Prompt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mId;
    ::ll::TypedStorage<1, 1, bool>                                  mIsActive;
    ::ll::TypedStorage<8, 32, ::std::string>                        mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                        mBody;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PromptAction>> mActions;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                  mChosenAction;
    // NOLINTEND

public:
    // prevent constructor by default
    Prompt& operator=(Prompt const&);
    Prompt(Prompt const&);
    Prompt();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::Prompt& operator=(::OreUI::Prompt&&);

    MCAPI void
    show(::std::string id, ::std::string title, ::std::string body, ::std::vector<::OreUI::PromptAction> actions);

    MCAPI void storeChosenAction(int action);

    MCAPI ~Prompt();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct Prompt {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
