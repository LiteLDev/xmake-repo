#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/ServiceQuality.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct ServerRegion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>             regionName;
    ::ll::TypedStorage<4, 4, ::Realms::ServiceQuality> serviceQuality;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::ServerRegion fromJson(::Json::Value const&);

    MCNAPI static std::string getServiceQualityIcon(::Realms::ServiceQuality);

    MCNAPI static std::string getServiceQualityNarration(::Realms::ServiceQuality);
    // NOLINTEND
};

} // namespace Realms
