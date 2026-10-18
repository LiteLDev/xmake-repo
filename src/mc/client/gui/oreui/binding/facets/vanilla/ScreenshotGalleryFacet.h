#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/GalleryScreenshot.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ScreenshotGalleryFacetError.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class TaskGroup;
namespace OreUI { class IResourceAllowList; }
namespace Screenshots { class ScreenshotGallery; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ScreenshotGalleryFacetError.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class TaskGroup;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct GalleryScreenshot; }
namespace Screenshots { class ScreenshotGallery; }
namespace Social { class IUserManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class ScreenshotGalleryFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::ScreenshotGalleryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                              mUserManager;
    ::ll::UntypedStorage<8, 24>                                              mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                              mDateManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mDirtySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mScreenshotGalleryChangedSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDirty;
    ::ll::TypedStorage<8, 24, std::string>                                   mXuid;
    ::ll::TypedStorage<1, 1, bool>                                           mIsLoadGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>           mLoadGalleryError;
    ::ll::TypedStorage<4, 4, int>                                            mActiveAddFeaturedOperations;
    ::ll::TypedStorage<4, 4, int>                                            mActiveAddShowcasedOperations;
    ::ll::TypedStorage<1, 1, bool>                                           mIsModifyShowcaseGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>           mModifyShowcaseGalleryError;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDeleteScreenshotsInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>           mDeleteScreenshotsError;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                     mTaskGroup;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Screenshots::ScreenshotGallery>> mScreenshotGallery;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::GalleryScreenshot>>         mDisplayableScreenshots;
    ::ll::UntypedStorage<8, 72>                                              mFeaturedScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotGalleryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotGalleryFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenshotGalleryFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const DateManager>>
    );

    MCNAPI void _reset();

    MCNAPI void addScreenshotToShowcase(std::string const&, bool);

    MCNAPI void clearDeleteScreenshotsError();

    MCNAPI void clearLoadGalleryError();

    MCNAPI void clearModifyShowcaseGalleryError();

    MCNAPI void deleteScreenshots(std::vector<std::string> const&);

    MCNAPI ulong getCount() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getDeleteScreenshotsError() const;

    MCNAPI ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCNAPI bool const getIsAddFeaturedImageInProgress() const;

    MCNAPI bool const getIsAddShowcasedImageInProgress() const;

    MCNAPI bool const getIsDeleteScreenshotsInProgress() const;

    MCNAPI bool const getIsLoadGalleryInProgress() const;

    MCNAPI bool const getIsModifyShowcaseGalleryInProgress() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getLoadGalleryError() const;

    MCNAPI ulong getMaxScreenshots() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getModifyShowcaseGalleryError() const;

    MCNAPI std::vector<OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCNAPI ulong getUndownloadedCount() const;

    MCNAPI bool isLoadingCount() const;

    MCNAPI bool isLoadingFeaturedScreenshot() const;

    MCNAPI void removeShowcasedScreenshot(std::string const&);

    MCNAPI void retryLoadGallery();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>>,
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ScreenshotGalleryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenshotGalleryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mDirtySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mScreenshotGalleryChangedSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mXuid;
    ::ll::TypedStorage<1, 1, bool>                                               mIsLoadGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mLoadGalleryError;
    ::ll::TypedStorage<4, 4, int>                                                mActiveAddFeaturedOperations;
    ::ll::TypedStorage<4, 4, int>                                                mActiveAddShowcasedOperations;
    ::ll::TypedStorage<1, 1, bool>                                               mIsModifyShowcaseGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mModifyShowcaseGalleryError;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDeleteScreenshotsInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mDeleteScreenshotsError;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                     mTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Screenshots::ScreenshotGallery>> mScreenshotGallery;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GalleryScreenshot>>         mDisplayableScreenshots;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                            mFeaturedScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotGalleryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotGalleryFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenshotGalleryFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI void _reset();

    MCAPI void addScreenshotToShowcase(::std::string const& id, bool isFeatured);

    MCAPI void clearDeleteScreenshotsError();

    MCAPI void clearLoadGalleryError();

    MCAPI void clearModifyShowcaseGalleryError();

    MCAPI void deleteScreenshots(::std::vector<::std::string> const& ids);

    MCAPI uint64 getCount() const;

    MCAPI ::OreUI::ScreenshotGalleryFacetError const getDeleteScreenshotsError() const;

    MCFOLD ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCAPI bool const getIsAddFeaturedImageInProgress() const;

    MCAPI bool const getIsAddShowcasedImageInProgress() const;

    MCAPI bool const getIsDeleteScreenshotsInProgress() const;

    MCFOLD bool const getIsLoadGalleryInProgress() const;

    MCFOLD bool const getIsModifyShowcaseGalleryInProgress() const;

    MCAPI ::OreUI::ScreenshotGalleryFacetError const getLoadGalleryError() const;

    MCFOLD uint64 getMaxScreenshots() const;

    MCAPI ::OreUI::ScreenshotGalleryFacetError const getModifyShowcaseGalleryError() const;

    MCAPI ::std::vector<::OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCAPI uint64 getUndownloadedCount() const;

    MCAPI bool isLoadingCount() const;

    MCAPI bool isLoadingFeaturedScreenshot() const;

    MCAPI void removeShowcasedScreenshot(::std::string const& id);

    MCAPI void retryLoadGallery();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class ScreenshotGalleryFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
