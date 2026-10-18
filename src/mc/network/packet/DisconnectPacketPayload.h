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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>                        mReason;
    ::ll::TypedStorage<8, 56, std::variant<DisconnectPacketMessages, cereal::NullType>> mMessages;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::Connection::DisconnectFailReason>                              mReason;
    ::ll::TypedStorage<8, 72, ::std::variant<::DisconnectPacketMessages, ::cereal::NullType>> mMessages;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DisconnectPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DisconnectPacketPayload(
        ::Connection::DisconnectFailReason,
        std::optional<std::string>,
        std::optional<std::string>
#else // @header-generator platform
    MCAPI DisconnectPacketPayload(
        ::Connection::DisconnectFailReason reason,
        ::std::optional<::std::string>     message,
        ::std::optional<::std::string>     filteredMessage
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<std::string> getFilteredMessage() const;

    MCNAPI std::string getMessage() const;

    MCNAPI bool shouldSkipMessages() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::std::string> getFilteredMessage() const;

    MCAPI ::std::string getMessage() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Connection::DisconnectFailReason, std::optional<std::string>, std::optional<std::string>);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Connection::DisconnectFailReason reason,
        ::std::optional<::std::string>     message,
        ::std::optional<::std::string>     filteredMessage
    );
#endif // @header-generator platform
    // NOLINTEND
};
