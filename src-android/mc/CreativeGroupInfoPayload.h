#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#include "mc/world/item/NetworkItemInstanceDescriptor.h"

struct CreativeGroupInfoPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::CreativeItemCategory> mCreativeItemCategory;
    ::ll::TypedStorage<8, 24, std::string>                        mName;
    ::ll::TypedStorage<8, 48, ::NetworkItemInstanceDescriptor>    mIcon;
    // NOLINTEND
};
