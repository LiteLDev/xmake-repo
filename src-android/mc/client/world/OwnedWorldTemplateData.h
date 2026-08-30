#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class StoreCatalogItem;
class WorldTemplatePackManifest;
struct WorldTemplateInfo;
// clang-format on

namespace World {

struct OwnedWorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mLocalId;
    ::ll::TypedStorage<8, 24, std::string> mMarketplaceId;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::UntypedStorage<8, 24>            mThumbnailPath;
    ::ll::TypedStorage<1, 1, bool>         mIsLocked;
    ::ll::TypedStorage<1, 1, bool>         mIsInstalled;
    ::ll::TypedStorage<1, 1, bool>         mIsPremium;
    ::ll::TypedStorage<8, 24, std::string> mCreator;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OwnedWorldTemplateData(::World::OwnedWorldTemplateData const&);

    MCNAPI std::string const& getCreator() const;

    MCNAPI void setCreator(std::string const&);

    MCNAPI ~OwnedWorldTemplateData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::World::OwnedWorldTemplateData fromStoreCatalogItem(::StoreCatalogItem const&);

    MCNAPI static ::World::OwnedWorldTemplateData
    fromStoreCatalogItemWithCachedImage(::StoreCatalogItem const&, ::Core::PathBuffer<std::string> const&);

    MCNAPI static ::World::OwnedWorldTemplateData
    fromWorldTemplateInfo(::WorldTemplateInfo const&, ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[8]> DEFAULT_UNKNOWN_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::OwnedWorldTemplateData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
