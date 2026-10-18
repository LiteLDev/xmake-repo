#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/MappedPorts.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct PortMappingParseOptions;
// clang-format on

struct PortConfiguration {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>              mServerPublicIP;
    ::ll::TypedStorage<8, 24, std::string>              mSignalingIp;
    ::ll::TypedStorage<2, 2, ushort>                    mSignalingPort;
    ::ll::TypedStorage<8, 24, std::vector<MappedPorts>> mPortMappings;
    ::ll::TypedStorage<2, 2, ushort>                    mUdpMinPort;
    ::ll::TypedStorage<2, 2, ushort>                    mUdpMaxPort;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk86eb6b;
    ::ll::UntypedStorage<8, 32> mUnk6d74de;
    ::ll::UntypedStorage<2, 2>  mUnkfc378d;
    ::ll::UntypedStorage<8, 24> mUnk6ed178;
    ::ll::UntypedStorage<2, 2>  mUnk60ef67;
    ::ll::UntypedStorage<2, 2>  mUnk9f06c5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PortConfiguration(PortConfiguration const&);
#endif // @header-generator platform
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::string> parsePortMappings(std::string_view, ::PortMappingParseOptions const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI ::Bedrock::Result<void, ::std::string>
    parsePortMappings(::std::string_view value, ::PortMappingParseOptions const& options);
#endif
#endif // @header-generator platform

    MCNAPI ~PortConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
