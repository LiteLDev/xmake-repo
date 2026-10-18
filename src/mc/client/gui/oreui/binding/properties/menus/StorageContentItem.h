#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/menus/ContentItemType.h"
#include "mc/client/world/SyncState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct StorageContentItemData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class StorageContentItem : public ::OreUI::PropertyObject<::OreUI::StorageContentItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                             mSize;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::OreUI::ContentItemType>>> mContentType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mImagePath;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mContentId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mGameType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mDescription;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mDate;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::World::SyncState>>>       mCloudSyncState;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>            mVersion;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                      mIsSelected;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                      mHasErrors;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageContentItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageContentItem(::OreUI::StorageContentItemData data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::StorageContentItemData data);
    // NOLINTEND
};
#else // @header-generator platform
class StorageContentItem {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
