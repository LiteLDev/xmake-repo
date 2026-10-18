#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/events/ListenerInfo.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockEventDispatcherToken;
class BlockPos;
class ListenerInfo;
class Vec3;
// clang-format on

class BlockEventDispatcher : public ::Bedrock::EnableNonOwnerReferences {
public:
    // BlockEventDispatcher inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using CallbackFunction = std::function<void(const BlockPos&, uint, const Block&, Actor*)>;
#else // @header-generator platform
    using CallbackFunction = ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<int, std::unique_ptr<ListenerInfo>>> mRegisteredListeners;
    ::ll::TypedStorage<4, 4, int>                                                     mHandleCounter;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEventDispatcher(BlockEventDispatcher const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventDispatcher();
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::unique_ptr<::ListenerInfo>>> mRegisteredListeners;
    ::ll::TypedStorage<4, 4, int>                                                           mHandleCounter;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dispatchEvent(::BlockPos const&, uint, ::Block const&, ::Block const&, ::Actor*);
#else // @header-generator platform
    MCAPI void
    dispatchEvent(::BlockPos const& pos, uint layer, ::Block const& block, ::Block const& oldBlock, ::Actor* source);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockEventDispatcherToken
    registerListener(::Vec3 const&, float, std::function<void(const BlockPos&, uint, const Block&, Actor*)>);

    MCNAPI void updatePosition(int, ::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI ::BlockEventDispatcherToken registerListener(
        ::Vec3 const&                                                            shapePos,
        float                                                                    shapeRadius,
        ::std::function<void(::BlockPos const&, uint, ::Block const&, ::Actor*)> callback
    );
#endif // @header-generator platform
    // NOLINTEND
};
