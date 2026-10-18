#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetResourcePackId.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FacetResourcePack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::OreUI::FacetResourcePackId> mId;
    ::ll::TypedStorage<8, 32, ::std::string>                mName;
    ::ll::TypedStorage<8, 32, ::std::string>                mType;
    ::ll::TypedStorage<8, 32, ::std::string>                mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                mContentId;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>       mImageURL;
    ::ll::TypedStorage<1, 1, bool>                          mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>                          mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                          mHasSettings;
    ::ll::TypedStorage<1, 1, bool>                          mIsAddon;
    // NOLINTEND
};
#else // @header-generator platform
struct FacetResourcePack {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
