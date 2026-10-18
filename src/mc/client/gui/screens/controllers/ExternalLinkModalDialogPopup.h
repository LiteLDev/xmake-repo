#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ExternalLinkModalDialogPopup : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mTitle;
    ::ll::TypedStorage<8, 24, std::string const> mMessage;
    ::ll::TypedStorage<8, 24, std::string const> mExternalLink;
    ::ll::TypedStorage<8, 24, std::string const> mGoToPageText;
    ::ll::UntypedStorage<8, 32>                  mSecondButtonText;
    ::ll::UntypedStorage<8, 48>                  mCallback;
    ::ll::UntypedStorage<1, 16>                  mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalLinkModalDialogPopup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExternalLinkModalDialogPopup();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ExternalLinkModalDialogPopup(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void()> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<void()> const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ExternalLinkModalDialogPopup : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>           mTitle;
    ::ll::TypedStorage<8, 32, ::std::string const>           mMessage;
    ::ll::TypedStorage<8, 32, ::std::string const>           mExternalLink;
    ::ll::TypedStorage<8, 32, ::std::string const>           mGoToPageText;
    ::ll::TypedStorage<8, 32, ::std::string const>           mSecondButtonText;
    ::ll::TypedStorage<8, 64, ::std::function<void()> const> mCallback;
    ::ll::TypedStorage<1, 1, bool>                           mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalLinkModalDialogPopup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExternalLinkModalDialogPopup(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      mainMessage,
        ::std::string const&                      externalLink,
        ::std::string const&                      goToPageText,
        ::std::string const&                      secondButtonText,
        ::std::function<void()> const&            callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      mainMessage,
        ::std::string const&                      externalLink,
        ::std::string const&                      goToPageText,
        ::std::string const&                      secondButtonText,
        ::std::function<void()> const&            callback
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND
};
#else // @header-generator platform
class ExternalLinkModalDialogPopup {};
#endif // @header-generator platform
#endif // @header-generator platform
