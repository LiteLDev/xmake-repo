#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"

namespace OreUI {

struct FacetResourcePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>            mId;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mType;
    ::ll::TypedStorage<8, 24, std::string> mDescription;
    ::ll::TypedStorage<8, 24, std::string> mSize;
    ::ll::TypedStorage<8, 24, std::string> mContentId;
    ::ll::UntypedStorage<8, 72>            mImageURL;
    ::ll::TypedStorage<1, 1, bool>         mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>         mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>         mHasSettings;
    ::ll::TypedStorage<1, 1, bool>         mIsAddon;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetResourcePack& operator=(FacetResourcePack const&);
    FacetResourcePack(FacetResourcePack const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FacetResourcePack();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
