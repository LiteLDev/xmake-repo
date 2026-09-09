#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MappedPorts.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
struct PortMappingParseOptions;
// clang-format on

struct PortConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mServerPublicIP;
    ::ll::TypedStorage<8, 24, std::string>              mSignalingIp;
    ::ll::TypedStorage<2, 2, ushort>                    mSignalingPort;
    ::ll::TypedStorage<8, 24, std::vector<MappedPorts>> mPortMappings;
    ::ll::TypedStorage<2, 2, ushort>                    mUdpMinPort;
    ::ll::TypedStorage<2, 2, ushort>                    mUdpMaxPort;
    // NOLINTEND

public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void, std::string> parsePortMappings(std::string_view, ::PortMappingParseOptions const&);

    MCNAPI ~PortConfiguration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
