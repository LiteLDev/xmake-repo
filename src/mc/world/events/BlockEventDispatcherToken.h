#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/BlockEventDispatcher.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockEventDispatcher;
// clang-format on

class BlockEventDispatcherToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mHandle;
    ::ll::UntypedStorage<8, 24>   mDispatcher;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mHandle;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::BlockEventDispatcher>> mDispatcher;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BlockEventDispatcherToken& operator=(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken(BlockEventDispatcherToken const&);
    BlockEventDispatcherToken();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockEventDispatcherToken();
#else // @header-generator platform
    MCAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockEventDispatcherToken(::BlockEventDispatcherToken&&);
#else // @header-generator platform
    MCAPI void unregister();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockEventDispatcher* getDispatcher() const;

    MCNAPI int getHandle() const;

    MCNAPI bool isValid() const;

    MCNAPI ::BlockEventDispatcherToken& operator=(::BlockEventDispatcherToken&&);

    MCNAPI void unregister();

    MCNAPI ~BlockEventDispatcherToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockEventDispatcherToken&&);
#else // @header-generator platform
    MCAPI ~BlockEventDispatcherToken();
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
