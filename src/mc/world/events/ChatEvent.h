#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class EntityContext;
#endif // @header-generator platform
class TextPacket;
// clang-format on

struct ChatEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mMessage;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredMessage;
    ::ll::UntypedStorage<1, 24>                           mSender;
    ::ll::UntypedStorage<8, 32>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                mAuthor;
    ::ll::TypedStorage<1, 1, bool>                        mMessageValid;
    ::ll::TypedStorage<1, 1, bool>                        mAllowFiltering;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                              mMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                             mFilteredMessage;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                                 mSender;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::WeakRef<::EntityContext>>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mAuthor;
    ::ll::TypedStorage<1, 1, bool>                                                        mMessageValid;
    ::ll::TypedStorage<1, 1, bool>                                                        mAllowFiltering;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ChatEvent& operator=(ChatEvent const&);
#else // @header-generator platform
#endif // @header-generator platform
    ChatEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ChatEvent(::ChatEvent const&);
#else // @header-generator platform
    MCAPI ChatEvent(::WeakRef<::EntityContext> sender, ::TextPacket const& packet);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ChatEvent();
#else // @header-generator platform
    MCAPI ~ChatEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ChatEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::WeakRef<::EntityContext> sender, ::TextPacket const& packet);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
