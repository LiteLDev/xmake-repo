#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class CreativeItemRegistry;
// clang-format on

class CreativeItemEntry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                    mGroupIndex;
    ::ll::UntypedStorage<4, 0>                        mCreativeNetId;
    ::ll::TypedStorage<8, 128, ::ItemInstance>        mItemInstance;
    ::ll::TypedStorage<4, 4, uint>                    mIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeItemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeItemEntry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
