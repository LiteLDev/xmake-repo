#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SharedPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/common/WeakPtr.h"
#include "mc/world/level/block/BlockType.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockType;
#endif // @header-generator platform
class CompoundTag;
// clang-format on

class UnknownBlockTypeRegistry : public ::IUnknownBlockTypeRegistry {
public:
    // UnknownBlockTypeRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using UnknownBlockLookupMap = std::map<ulong, SharedPtr<BlockType>>;
#else // @header-generator platform
    using UnknownBlockLookupMap = ::std::map<uint64, ::SharedPtr<::BlockType>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::UntypedStorage<8, 24>           mUnknownBlockLookupMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mMutex;
    ::ll::TypedStorage<8, 16, ::std::map<uint64, ::SharedPtr<::BlockType>>> mUnknownBlockLookupMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UnknownBlockTypeRegistry();
#else // @header-generator platform
    virtual ~UnknownBlockTypeRegistry() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const& getUnknownBlock(::CompoundTag const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::Block const& getUnknownBlock(::CompoundTag const& serId) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const& $getUnknownBlock(::CompoundTag const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::Block const& $getUnknownBlock(::CompoundTag const& serId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
