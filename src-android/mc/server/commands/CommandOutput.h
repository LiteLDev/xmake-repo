#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputMessage.h"
#include "mc/server/commands/CommandOutputMessageType.h"
#include "mc/server/commands/CommandOutputType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOutputParameter;
class CommandPropertyBag;
// clang-format on

class CommandOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CommandOutputType>                 mType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandPropertyBag>> mBag;
    ::ll::TypedStorage<8, 24, std::vector<CommandOutputMessage>>  mMessages;
    ::ll::TypedStorage<4, 4, uint>                                mSuccessCount;
    ::ll::TypedStorage<1, 1, bool>                                mHasPlayerText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOutput();

    MCNAPI CommandOutput(::CommandOutput const&);

    MCNAPI void addMessage(std::string_view, std::vector<CommandOutputParameter> const&, ::CommandOutputMessageType);

    MCNAPI void addToResultList(std::string const&, std::string const&);

    MCNAPI void addToResultList(std::string const&, ::Actor const&);

    MCNAPI void error(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI void forceOutput(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI ::CommandPropertyBag const& getData() const;

    MCNAPI std::vector<CommandOutputMessage> const& getMessages() const;

    MCNAPI uint getSuccessCount() const;

    MCNAPI bool hasErrorMessage() const;

    MCNAPI ::CommandOutput& operator=(::CommandOutput const&);

    MCNAPI bool operator==(::CommandOutput const&) const;

    MCNAPI void setHasPlayerText();

    MCNAPI void success();

    MCNAPI void success(std::string_view, std::vector<CommandOutputParameter> const&);

    MCNAPI bool wantsData() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<std::string> _mDataGetter(::CommandOutput const&);

    MCNAPI static void _mDataSetter(::CommandOutput&, std::optional<std::string> const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::CommandOutput const&);
    // NOLINTEND
};
