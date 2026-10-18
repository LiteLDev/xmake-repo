#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/events/BlockObject.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

struct ScriptCommandMessageEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                  mMessageId;
    ::ll::TypedStorage<8, 24, std::string>                  mMessageValue;
    ::ll::TypedStorage<8, 8, ::Level const&>                mLevel;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>> mSourceActor;
    ::ll::TypedStorage<8, 32, std::optional<BlockObject>>   mBlockObject;
    ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>> mInitiator;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>                    mMessageValue;
    ::ll::TypedStorage<8, 8, ::Level const&>                    mLevel;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mSourceActor;
    ::ll::TypedStorage<8, 32, ::std::optional<::BlockObject>>   mBlockObject;
    ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mInitiator;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommandMessageEvent& operator=(ScriptCommandMessageEvent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptCommandMessageEvent(ScriptCommandMessageEvent const&);
#endif // @header-generator platform
    ScriptCommandMessageEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ScriptCommandMessageEvent();
#else // @header-generator platform
    MCAPI ScriptCommandMessageEvent(
        ::std::string const&             messageId,
        ::std::string const&             messageValue,
        ::Level const&                   level,
        ::std::optional<::ActorUniqueID> sourceActor,
        ::std::optional<::BlockObject>   blockObject,
        ::std::optional<::ActorUniqueID> initiatorId
    );

    MCAPI ~ScriptCommandMessageEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&             messageId,
        ::std::string const&             messageValue,
        ::Level const&                   level,
        ::std::optional<::ActorUniqueID> sourceActor,
        ::std::optional<::BlockObject>   blockObject,
        ::std::optional<::ActorUniqueID> initiatorId
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
