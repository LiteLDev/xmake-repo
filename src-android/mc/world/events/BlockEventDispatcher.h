#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    using CallbackFunction = std::function<void(const BlockPos&, uint, const Block&, Actor*)>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void dispatchEvent(::BlockPos const&, uint, ::Block const&, ::Block const&, ::Actor*);

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
    // NOLINTEND
};
