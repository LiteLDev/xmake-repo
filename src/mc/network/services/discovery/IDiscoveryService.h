#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/CachedAsync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Status; }
namespace Bedrock::Services { struct EnvironmentQueryResponse; }
// clang-format on

namespace Bedrock::Services {

class IDiscoveryService {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IDiscoveryService() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::CachedAsync<std::shared_ptr<const Bedrock::Services::EnvironmentQueryResponse>> getServiceEndpoints() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::CachedAsync<::std::shared_ptr<::Bedrock::Services::EnvironmentQueryResponse const>>
    getServiceEndpoints() const = 0;
#endif // @header-generator platform

    virtual void reset() = 0;

    virtual ::Bedrock::Http::Status const& getStatus() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Services
