#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/DisconnectPacketMessages.h"

struct DisconnectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>                        mReason;
    ::ll::TypedStorage<8, 56, std::variant<DisconnectPacketMessages, cereal::NullType>> mMessages;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisconnectPacketPayload(
        ::Connection::DisconnectFailReason,
        std::optional<std::string>,
        std::optional<std::string>
    );

    MCNAPI std::optional<std::string> getFilteredMessage() const;

    MCNAPI std::string getMessage() const;

    MCNAPI bool shouldSkipMessages() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Connection::DisconnectFailReason, std::optional<std::string>, std::optional<std::string>);
    // NOLINTEND
};
