#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

namespace Settings {

struct BooleanConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    BooleanConfirmationRequest& operator=(BooleanConfirmationRequest const&);
    BooleanConfirmationRequest();
};

} // namespace Settings
