#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/platform/Result.h"

#endif // @header-generator platform
namespace NetherNet {

#if defined(LL_PLAT_A) // @header-generator platform
class IUdpSocket {};
#else // @header-generator platform
class IUdpSocket {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUdpSocket() = default;

    virtual ::Bedrock::Result<int, int>
    sendTo(::gsl::span<::std::byte const> data, ::std::string const& remoteIP, ushort remotePort) = 0;

    virtual ::Bedrock::PubSub::Connector<void(::gsl::span<::std::byte const>, ::std::string const&, ushort)>&
    onPacketReceived() = 0;

    virtual ushort getLocalPort() const = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace NetherNet
