#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ItemStack;
class PhotoItemSavedData;
struct ActorUniqueID;
// clang-format on

class PhotoItem : public ::Item {
public:
    // prevent constructor by default
    PhotoItem();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ActorUniqueID getPhotoId(::CompoundTag const&);

    MCNAPI static std::string const& getPhotoName(::CompoundTag const&);

    MCNAPI static ::ActorUniqueID getPhotoOwner(::CompoundTag const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& TAG_PHOTO_NAME();

    MCNAPI static std::string const& TAG_PHOTO_OWNER();

    MCNAPI static std::string const& TAG_PHOTO_UUID();
    // NOLINTEND
};
