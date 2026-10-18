#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/item/ItemInstance.h"

// auto generated forward declare list
// clang-format off
class CreativeItemEntry;
#if defined(LL_PLAT_A) // @header-generator platform
class CreativeItemGroupCategory;
#else // @header-generator platform
#endif // @header-generator platform
class CreativeItemRegistry;
// clang-format on

class CreativeGroupInfo : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>             mRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                     mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                     mName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 128, ::ItemInstance>                    mIcon;
    ::ll::TypedStorage<4, 4, uint>                                mIndex;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<uint>>                  mItemIndexes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                mItemIndexes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CreativeGroupInfo& operator=(CreativeGroupInfo const&);
    CreativeGroupInfo();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CreativeGroupInfo();
#else // @header-generator platform
    virtual ~CreativeGroupInfo() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void _addCreativeItemEntry(::CreativeItemEntry* itemEntry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
