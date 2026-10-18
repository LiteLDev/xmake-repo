#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/ContentItemType.h"
#include "mc/client/world/SyncState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct StorageContentItemData; }
// clang-format on

namespace OreUI {

class StorageContentItem : public ::OreUI::PropertyObject<OreUI::StorageContentItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mId;
    ::ll::UntypedStorage<8, 168> mName;
    ::ll::UntypedStorage<8, 168> mSize;
    ::ll::UntypedStorage<8, 152> mContentType;
    ::ll::UntypedStorage<8, 176> mImagePath;
    ::ll::UntypedStorage<8, 176> mContentId;
    ::ll::UntypedStorage<8, 176> mGameType;
    ::ll::UntypedStorage<8, 176> mDescription;
    ::ll::UntypedStorage<8, 176> mDate;
    ::ll::UntypedStorage<8, 152> mCloudSyncState;
    ::ll::UntypedStorage<8, 176> mVersion;
    ::ll::UntypedStorage<8, 152> mIsSelected;
    ::ll::UntypedStorage<8, 152> mHasErrors;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentItem& operator=(StorageContentItem const&);
    StorageContentItem(StorageContentItem const&);
    StorageContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageContentItem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StorageContentItem(::OreUI::StorageContentItemData);

    MCNAPI StorageContentItem(::OreUI::StorageContentItem&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::StorageContentItemData);

    MCNAPI void* $ctor(::OreUI::StorageContentItem&&);
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

} // namespace OreUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
