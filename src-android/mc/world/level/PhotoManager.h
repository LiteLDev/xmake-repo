#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
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
    ::ll::TypedStorage<8, 8, std::unique_ptr<PhotoStorage>> mPhotoStorage;
    ::ll::UntypedStorage<8, 24>                             mLevelStorage;
    ::ll::UntypedStorage<8, 24>                             mScreenshotsFolder;
    ::ll::TypedStorage<1, 1, bool const>                    mIsClientSide;
    ::ll::UntypedStorage<8, 88>                             mPictureTakenPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PhotoManager();

    virtual ::Bedrock::PubSub::Connector<void (cg::ImageBuffer&, Actor*, Actor*, ScreenshotOptions&, std::function<void (cg::ImageBuffer&, ScreenshotOptions&)>)>& getPictureTakenConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PhotoManager(::Bedrock::NonOwnerPointer<LevelStorage>, bool);

    MCNAPI void createPhotoStorage();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<LevelStorage>, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(
        cg::ImageBuffer&,
        Actor*,
        Actor*,
        ScreenshotOptions&,
        std::function<void(cg::ImageBuffer&, ScreenshotOptions&)>
    )>&
    $getPictureTakenConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
