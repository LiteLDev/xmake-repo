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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                            string;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandSelector<Actor>>> selection;
#else // @header-generator platform
        ::ll::TypedStorage<8, 32, ::std::string>                                string;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandSelector<::Actor>>> selection;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        MessageComponent& operator=(MessageComponent const&);
        MessageComponent(MessageComponent const&);
        MessageComponent();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CommandMessage::MessageComponent>> mData;
    ::ll::TypedStorage<1, 1, ::CommandMessageParams const>                   mParameters;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::CommandMessage::MessageComponent>> mData;
    ::ll::TypedStorage<1, 1, ::CommandMessageParams const>                       mParameters;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CommandMessage();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::GenerateMessageResult generateMessage(::CommandOrigin const& origin, int maxLength) const;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandMessage>();
// clang-format on
#endif // @header-generator platform
