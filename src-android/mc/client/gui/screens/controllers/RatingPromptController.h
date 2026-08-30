#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
