#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class RatingPromptController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mTitleId;
    ::ll::TypedStorage<8, 24, std::string const> mImage;
    ::ll::UntypedStorage<8, 32>                  mButtonName;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingPromptController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RatingPromptController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RatingPromptController(
        std::shared_ptr<MinecraftScreenModel>,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<MinecraftScreenModel>, std::string const&, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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

class RatingPromptController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mTitleId;
    ::ll::TypedStorage<8, 32, ::std::string const> mImage;
    ::ll::TypedStorage<8, 32, ::std::string const> mButtonName;
    // NOLINTEND

public:
    // prevent constructor by default
    RatingPromptController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RatingPromptController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RatingPromptController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleId,
        ::std::string const&                      image,
        ::std::string const&                      buttonName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      titleId,
        ::std::string const&                      image,
        ::std::string const&                      buttonName
    );
    // NOLINTEND
};
#else // @header-generator platform
class RatingPromptController {};
#endif // @header-generator platform
#endif // @header-generator platform
