#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/network/realms/ServiceQuality.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Realms {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ServerRegion {};
#endif // @header-generator platform

} // namespace Realms
