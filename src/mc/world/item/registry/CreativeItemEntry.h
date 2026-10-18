#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CreativeGroupInfo;
#else // @header-generator platform
#endif // @header-generator platform
class CreativeItemRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct CreativeItemNetIdTag;
#endif // @header-generator platform
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                    mGroupIndex;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 0>                        mCreativeNetId;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CreativeItemNetId>     mCreativeNetId;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance>        mItemInstance;
    ::ll::TypedStorage<4, 4, uint>                    mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemEntry();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CreativeItemEntry();
#else // @header-generator platform
    MCAPI CreativeItemEntry(
        ::CreativeItemRegistry*    registry,
        ::CreativeItemNetId const& creativeNetId,
        ::ItemInstance const&      item,
        uint                       index
    );
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TypedServerNetId<CreativeItemNetIdTag, uint, 0> const& getCreativeNetId() const;

    MCNAPI ::CreativeGroupInfo* getGroup() const;

    MCNAPI uint getGroupIndex() const;

    MCNAPI uint getIndex() const;

    MCNAPI ::ItemInstance const& getItemInstance() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::CreativeItemRegistry*    registry,
        ::CreativeItemNetId const& creativeNetId,
        ::ItemInstance const&      item,
        uint                       index
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
