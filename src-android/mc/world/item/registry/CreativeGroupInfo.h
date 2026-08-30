#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
class CreativeItemGroupCategory;
class CreativeItemRegistry;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>             mRegistry;
    ::ll::TypedStorage<8, 40, ::HashedString>                     mName;
    ::ll::TypedStorage<8, 128, ::ItemInstance>                    mIcon;
    ::ll::TypedStorage<4, 4, uint>                                mIndex;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                  mItemIndexes;
    // NOLINTEND

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);
    CreativeGroupInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeGroupInfo();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CreativeGroupInfo(::CreativeGroupInfo const&);

    MCNAPI void _addCreativeItemEntry(::CreativeItemEntry*);

    MCNAPI void addCreativeItem(::CreativeItemEntry*);

    MCNAPI ::SharedTypes::CreativeItemCategory getCreativeCategory() const;

    MCNAPI ::ItemInstance const& getIcon() const;

    MCNAPI std::vector<uint> const& getItems() const;

    MCNAPI std::string const& getName() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CreativeGroupInfo const&);
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
