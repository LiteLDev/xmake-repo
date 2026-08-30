#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // UnknownBlockTypeRegistry inner types define
    using UnknownBlockLookupMap = std::map<ulong, SharedPtr<BlockType>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 24>           mUnknownBlockLookupMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnknownBlockTypeRegistry();

    virtual ::Block const& getUnknownBlock(::CompoundTag const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Block const& $getUnknownBlock(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
