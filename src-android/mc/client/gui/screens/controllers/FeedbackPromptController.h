#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class FeedbackPromptController : public ::ClientInstanceScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string const> mTitleId;
    ::ll::TypedStorage<8, 24, std::string const> mImage;
    ::ll::TypedStorage<8, 24, std::string const> mButtonName;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackPromptController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FeedbackPromptController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeedbackPromptController(
        std::shared_ptr<ClientInstanceScreenModel>,
        std::string const&,
        std::string const&,
        std::string const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(std::shared_ptr<ClientInstanceScreenModel>, std::string const&, std::string const&, std::string const&);
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
