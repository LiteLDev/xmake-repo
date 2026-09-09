#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/GalleryScreenshot.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace Screenshots { class ShowcasedScreenshots; }
// clang-format on

namespace OreUI {

class PlayerShowcasedGalleryFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerShowcasedGalleryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                  mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                                  mDateManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mDirtySubscriber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 16, std::optional<Social::XUID>>                       mXuid;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Screenshots::ShowcasedScreenshots>> mShowcasedScreenshots;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::GalleryScreenshot>>             mDisplayableScreenshots;
    ::ll::UntypedStorage<8, 72>                                                  mFeaturedScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerShowcasedGalleryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerShowcasedGalleryFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerShowcasedGalleryFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>
    );

    MCNAPI ::Bedrock::Result<void, std::error_code> _resetIfUserChanged(std::string const&);

    MCNAPI ulong getCount() const;

    MCNAPI ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCNAPI ulong getMaxScreenshots() const;

    MCNAPI std::vector<OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCNAPI bool isLoadingCount() const;

    MCNAPI bool isLoadingFeaturedScreenshot() const;

    MCNAPI bool isLoadingScreenshots() const;

    MCNAPI void loadCount(std::string const&);

    MCNAPI void loadFeaturedScreenshot(std::string const&);

    MCNAPI void loadGallery(std::string const&);

    MCNAPI void loadShowcasedScreenshot(std::string const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
