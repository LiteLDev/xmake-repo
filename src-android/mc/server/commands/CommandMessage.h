#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandMessageParams.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
struct GenerateMessageResult;
// clang-format on

class CommandMessage {
public:
    // CommandMessage inner types declare
    // clang-format off
    struct MessageComponent;
    // clang-format on

    // CommandMessage inner types define
    struct MessageComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                            string;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandSelector<Actor>>> selection;
        // NOLINTEND

    public:
        // prevent constructor by default
        MessageComponent& operator=(MessageComponent const&);
        MessageComponent(MessageComponent const&);
        MessageComponent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<CommandMessage::MessageComponent>> mData;
    ::ll::TypedStorage<1, 1, ::CommandMessageParams const>                   mParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandMessage(std::optional<CommandMessageParams>);

    MCNAPI ::GenerateMessageResult generateMessage(::CommandOrigin const&, int) const;

    MCNAPI ~CommandMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::optional<CommandMessageParams>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
