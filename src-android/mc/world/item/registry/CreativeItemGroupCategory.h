#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class CreativeGroupInfo;
class CreativeItemEntry;
class CreativeItemRegistry;
class ItemInstance;
// clang-format on

class CreativeItemGroupCategory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory>     mCategory;
    ::ll::TypedStorage<8, 8, ::CreativeItemRegistry*>                 mRegistry;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, uint>> mNamedGroupIndex;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                      mGroupIndexes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CreativeItemGroupCategory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CreativeGroupInfo* addAnonymousGroup();

    MCNAPI ::CreativeGroupInfo* addChildGroup(::HashedString const&, ::ItemInstance const&);

    MCNAPI ::CreativeGroupInfo* getChildGroup(::HashedString const&);

    MCNAPI uint getGroupIndex(ulong) const;

    MCNAPI ulong getGroupIndexCount() const;

    MCNAPI ::CreativeGroupInfo* getOrAddTailAnonymousGroup();

    MCNAPI ulong getTotalNumberChildItems();
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
