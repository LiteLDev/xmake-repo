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
    // clang-format off
    virtual ~IDiscoveryService() = default;

    virtual ::Bedrock::Threading::CachedAsync<std::shared_ptr<const Bedrock::Services::EnvironmentQueryResponse>> getServiceEndpoints() const = 0;

    virtual void reset() = 0;

    virtual ::Bedrock::Http::Status const& getStatus() const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Bedrock::Services
