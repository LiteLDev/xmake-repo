#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/IPacketSecurityHandler.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketGroupDefinition.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
class PacketGroupDefinition;
// clang-format on

class PacketLimitHandler : public ::IPacketSecurityHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PacketGroupDefinition>> mPacketGroupDefinition;
    ::ll::TypedStorage<8, 24, std::optional<std::error_code>>        mLastResult;
    ::ll::TypedStorage<1, 1, uchar>                                  mViolationLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketLimitHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::PacketViolationResponse checkForViolation(::MinecraftPacketIds, ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&, bool*);

    virtual ~PacketLimitHandler();

    virtual uint getTelemetryData();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PacketViolationResponse $checkForViolation(
        ::MinecraftPacketIds,
        ::nonstd::expected<void, Bedrock::ErrorInfo<std::error_code>> const&,
        bool*
    );

    MCNAPI uint $getTelemetryData();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
