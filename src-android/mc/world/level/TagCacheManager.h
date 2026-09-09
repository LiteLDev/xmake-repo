#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandManager;
class IActorManagerConnector;
class IDeregisterTagsFromActorProxy;
// clang-format on

class TagCacheManager {
public:
    // TagCacheManager inner types define
    using TagCache = std::unordered_map<HashedString, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, uint>>              mTagCache;
    ::ll::UntypedStorage<8, 24>                                                    mCommandManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDeregisterTagsFromActorProxy> const> mDeregisterTagsFromActorProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnRemoveActorEntityReferences;
    // NOLINTEND

public:
    // prevent constructor by default
    TagCacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TagCacheManager(::Bedrock::NonOwnerPointer<CommandManager>, std::unique_ptr<IDeregisterTagsFromActorProxy>);

    MCNAPI void _deregisterTagsFromActor(::Actor&);

    MCNAPI void decrementTagCache(std::string const&);

    MCNAPI void incrementTagCache(std::string const&);

    MCNAPI void initialize(::IActorManagerConnector&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<CommandManager>, std::unique_ptr<IDeregisterTagsFromActorProxy>);
    // NOLINTEND
};
