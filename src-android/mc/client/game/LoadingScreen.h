#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageDescription.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class ScreenContext;
namespace mce { class TextureGroup; }
// clang-format on

class LoadingScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription> mLoadingScreenImageDescription;
    ::ll::TypedStorage<4, 20, ::cg::ImageDescription> mPercentageTextImageDescription;
    ::ll::TypedStorage<8, 8, double>                  mLastTimeStamp;
    ::ll::TypedStorage<4, 4, int>                     mLeadingSpinnerIdx;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void frameUpdate(::FrameUpdateContext&);

    MCNAPI void render(::ScreenContext&, std::shared_ptr<mce::TextureGroup> const, ulong const, ulong const);
    // NOLINTEND
};
