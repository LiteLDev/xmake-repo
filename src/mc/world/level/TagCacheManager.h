#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class CommandManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class IActorManagerConnector;
class IDeregisterTagsFromActorProxy;
// clang-format on

class TagCacheManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // TagCacheManager inner types define
    using TagCache = std::unordered_map<HashedString, uint>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, uint>>              mTagCache;
    ::ll::UntypedStorage<8, 24>                                                    mCommandManager;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDeregisterTagsFromActorProxy> const> mDeregisterTagsFromActorProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnRemoveActorEntityReferences;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk919191;
    ::ll::UntypedStorage<8, 24> mUnk87584e;
    ::ll::UntypedStorage<8, 8>  mUnkc65211;
    ::ll::UntypedStorage<8, 16> mUnke1eb64;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TagCacheManager& operator=(TagCacheManager const&);
    TagCacheManager(TagCacheManager const&);
#endif // @header-generator platform
    TagCacheManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TagCacheManager(::Bedrock::NonOwnerPointer<CommandManager>, std::unique_ptr<IDeregisterTagsFromActorProxy>);
#else // @header-generator platform
    MCNAPI TagCacheManager(
        ::Bedrock::NonOwnerPointer<::CommandManager>       commandManager,
        ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _deregisterTagsFromActor(::Actor&);
#else // @header-generator platform
    MCNAPI void _deregisterTagsFromActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void decrementTagCache(std::string const&);
#else // @header-generator platform
    MCNAPI void decrementTagCache(::std::string const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void incrementTagCache(std::string const&);
#else // @header-generator platform
    MCNAPI void incrementTagCache(::std::string const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::IActorManagerConnector&);
#else // @header-generator platform
    MCNAPI void initialize(::IActorManagerConnector& actorManagerConnector);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<CommandManager>, std::unique_ptr<IDeregisterTagsFromActorProxy>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::CommandManager>       commandManager,
        ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );
#endif // @header-generator platform
    // NOLINTEND
};
