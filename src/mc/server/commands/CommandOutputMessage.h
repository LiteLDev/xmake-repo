#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CommandOutputMessageType> mType;
    ::ll::TypedStorage<8, 24, std::string>               mMessageId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>  mParams;
#else // @header-generator platform
    ::CommandOutputMessageType   mType;
    ::std::string                mMessageId;
    ::std::vector<::std::string> mParams;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    CommandOutputMessage(
        ::CommandOutputMessageType   type,
        ::std::string                messageId,
        ::std::vector<::std::string> params = {}
    )
    : mType(type),
      mMessageId(std::move(messageId)),
      mParams(std::move(params)) {}

public:
    // prevent constructor by default
    CommandOutputMessage& operator=(CommandOutputMessage const& rhs) = default;
    CommandOutputMessage()                                           = default;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutputMessage();
#else // @header-generator platform
    MCAPI CommandOutputMessage(::CommandOutputMessage const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOutputMessage(::CommandOutputMessage&&);

    MCNAPI std::string const& getMessageId() const;

    MCNAPI std::vector<std::string> const& getParams() const;

    MCNAPI ::CommandOutputMessageType getType() const;

    MCNAPI ::CommandOutputMessage& operator=(::CommandOutputMessage&&);

    MCNAPI ::CommandOutputMessage& operator=(::CommandOutputMessage const&);

    MCNAPI bool operator==(::CommandOutputMessage const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _mSuccessfulGetter(::CommandOutputMessage const&);

    MCNAPI static void _mSuccessfulSetter(::CommandOutputMessage&, bool const);
#else // @header-generator platform
    MCAPI bool operator==(::CommandOutputMessage const& other) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CommandOutputMessage&&);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandOutputMessage const& rhs);
#endif // @header-generator platform
    // NOLINTEND
};
