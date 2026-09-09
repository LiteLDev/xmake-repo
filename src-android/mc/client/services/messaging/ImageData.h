#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/ImageDimensionsData.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ImageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                        mSourceURL;
    ::ll::UntypedStorage<8, 24>                                   mImagePath;
    ::ll::UntypedStorage<8, 24>                                   mNonAnimatedImagePath;
    ::ll::TypedStorage<1, 1, bool>                                mHasDownloaded;
    ::ll::TypedStorage<4, 12, std::optional<ImageDimensionsData>> mImageSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageData& operator=(ImageData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ImageData(::ImageData const&);

    MCNAPI ImageData(std::string, ::Json::Value const&);

    MCNAPI bool generateNonAnimatedImage();

    MCNAPI ~ImageData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ImageData const&);

    MCNAPI void* $ctor(std::string, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
