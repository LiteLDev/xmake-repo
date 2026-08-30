#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/HardwareMemoryTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IAppPlatform;
namespace Json { class Value; }
namespace Social { class IUserManager; }
// clang-format on

class SessionContextBuilder {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value BuildDeviceContext(
        std::vector<std::string> const&,
        std::string const&,
        std::optional<std::string>,
        ::IAppPlatform const*,
        ::IAdvancedGraphicsOptions const*
    );

    MCNAPI static ::Json::Value BuildDeviceContext(
        std::vector<std::string> const&,
        std::string const&,
        std::optional<std::string>,
        ::IAppPlatform const*,
        ::HardwareMemoryTier,
        ::IAdvancedGraphicsOptions const*
    );

    MCNAPI static ::Json::Value
    BuildUserContext(::Bedrock::NonOwnerPointer<Social::IUserManager> const&, std::optional<std::string> const&);
    // NOLINTEND
};
