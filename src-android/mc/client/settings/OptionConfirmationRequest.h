#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

namespace Settings {

struct OptionConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionConfirmationRequest& operator=(OptionConfirmationRequest const&);
    OptionConfirmationRequest(OptionConfirmationRequest const&);
    OptionConfirmationRequest();
};

} // namespace Settings
