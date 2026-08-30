#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/utility/RequestTelemetry.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
// clang-format on

class SearchRequestTelemetry : public ::RequestTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mSendCV;
    ::ll::TypedStorage<8, 24, std::string> mCVHeader;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fireSearchTelemetry(::IMinecraftEventing&);

    MCNAPI void setCVHeader(std::string const&);

    MCNAPI void setEnableSendCV();
    // NOLINTEND
};
