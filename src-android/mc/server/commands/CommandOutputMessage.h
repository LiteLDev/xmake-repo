#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessageType.h"

class CommandOutputMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommandOutputMessageType> mType;
    ::ll::TypedStorage<8, 24, std::string>               mMessageId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>  mParams;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOutputMessage();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CommandOutputMessage&&);
    // NOLINTEND
};
