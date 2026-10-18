#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ImageDimensions.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/ImageDimensions.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct MessageImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mId;
    ::ll::UntypedStorage<8, 72>                                      mAnimatedUrl;
    ::ll::UntypedStorage<8, 72>                                      mNonAnimatedUrl;
    ::ll::TypedStorage<1, 1, bool>                                   mIsLoaded;
    ::ll::UntypedStorage<8, 24>                                      mResourceAllowList;
    ::ll::TypedStorage<4, 12, std::optional<OreUI::ImageDimensions>> mImageSize;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageImage& operator=(MessageImage const&);
    MessageImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageImage(::ImageData const&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);

    MCNAPI MessageImage(
        ::ImageData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const
    );

    MCNAPI ~MessageImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ImageData const&, ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>);

    MCNAPI void* $ctor(
        ::ImageData const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MessageImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mId;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mAnimatedUrl;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mNonAnimatedUrl;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsLoaded;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<4, 12, ::std::optional<::OreUI::ImageDimensions>>                  mImageSize;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageImage& operator=(MessageImage const&);
    MessageImage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageImage(::OreUI::MessageImage const&);

    MCAPI MessageImage(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI MessageImage(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>
    );

    MCAPI ~MessageImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::MessageImage const&);

    MCAPI void*
    $ctor(::ImageData const& image, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList);

    MCAPI void* $ctor(
        ::ImageData const&                                         image,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MessageImage {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
