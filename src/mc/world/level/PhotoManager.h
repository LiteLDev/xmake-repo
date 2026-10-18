#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/IPhotoManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class LevelStorage;
class PhotoStorage;
struct ScreenshotOptions;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cg { class ImageBuffer; }
// clang-format on

class PhotoManager : public ::IPhotoManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<PhotoStorage>> mPhotoStorage;
    ::ll::UntypedStorage<8, 24>                             mLevelStorage;
    ::ll::UntypedStorage<8, 24>                             mScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool const>                    mIsClientSide;
    ::ll::UntypedStorage<8, 88>                             mPictureTakenPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PhotoStorage>>                 mPhotoStorage;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelStorage> const> mLevelStorage;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool const>                                        mIsClientSide;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(
                ::cg::ImageBuffer&,
                ::Actor*,
                ::Actor*,
                ::ScreenshotOptions&,
                ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
            ),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mPictureTakenPublisher;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PhotoManager();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PhotoManager();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~PhotoManager();
#else // @header-generator platform
    virtual ~PhotoManager() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (cg::ImageBuffer&, Actor*, Actor*, ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>)>& getPictureTakenConnector();
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
    )>&
    getPictureTakenConnector() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PhotoManager(::Bedrock::NonOwnerPointer<LevelStorage>, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI PhotoManager(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);

    MCAPI ::Core::PathBuffer<::std::string> _getPhotoStoragePath();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void createPhotoStorage();
#else // @header-generator platform
    MCAPI void createPhotoStorage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void createScreenshotsFolder(std::string const&, ::AppPlatform&);

    MCNAPI ::PhotoStorage& getPhotoStorage();

    MCNAPI ::Core::PathBuffer<std::string> const& getScreenshotsFolder() const;

    MCNAPI void takePicture(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
    );
#else // @header-generator platform
    MCAPI void createScreenshotsFolder(::std::string const& levelId, ::AppPlatform& appPlatform);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorage>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorage> levelStorage, bool isClientSide);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void(
        cg::ImageBuffer&,
        Actor*,
        Actor*,
        ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Connector<void(
        ::cg::ImageBuffer&,
        ::Actor*,
        ::Actor*,
        ::ScreenshotOptions&,
        ::std::function<void(::cg::ImageBuffer&, ::ScreenshotOptions&)>
#endif // @header-generator platform
    )>&
    $getPictureTakenConnector();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
