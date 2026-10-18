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

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
#if defined(LL_PLAT_A) // @header-generator platform
class CreativeItemEntry;
#else // @header-generator platform
#endif // @header-generator platform
class CreativeItemRegistry;
class ItemInstance;
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>     mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                 mRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                      mGroupIndexes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                              mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>         mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                     mRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                        mGroupIndexes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CreativeItemGroupCategory();
#else // @header-generator platform
    virtual ~CreativeItemGroupCategory() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CreativeGroupInfo* addAnonymousGroup();
#else // @header-generator platform
    MCAPI ::CreativeGroupInfo* addAnonymousGroup();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CreativeGroupInfo* addChildGroup(::HashedString const&, ::ItemInstance const&);
#else // @header-generator platform
    MCAPI ::CreativeGroupInfo* addChildGroup(::HashedString const& name, ::ItemInstance const& icon);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CreativeGroupInfo* getChildGroup(::HashedString const&);

    MCNAPI uint getGroupIndex(ulong) const;

    MCNAPI ulong getGroupIndexCount() const;

    MCNAPI ::CreativeGroupInfo* getOrAddTailAnonymousGroup();

    MCNAPI ulong getTotalNumberChildItems();
#else // @header-generator platform
    MCAPI ::CreativeGroupInfo* getChildGroup(::HashedString const& name);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
