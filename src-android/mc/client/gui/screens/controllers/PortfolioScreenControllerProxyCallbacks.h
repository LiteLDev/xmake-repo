#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/PhotoRecord.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Core { class Path; }
// clang-format on

struct PortfolioScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mSetScreenshots;
    ::ll::UntypedStorage<8, 48> mSetImageMetaDataLoader;
    ::ll::UntypedStorage<8, 48> mCallOpen;
    ::ll::UntypedStorage<8, 48> mGetPhotoRecords;
    ::ll::UntypedStorage<8, 48> mSaveCaptions;
    ::ll::UntypedStorage<8, 48> mGetMinecraftScreenModel;
    ::ll::UntypedStorage<8, 48> mDeletePhoto;
    ::ll::UntypedStorage<8, 48> mCreatePhotoItem;
    ::ll::UntypedStorage<8, 48> mLeaveScreen;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenControllerProxyCallbacks& operator=(PortfolioScreenControllerProxyCallbacks const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PortfolioScreenControllerProxyCallbacks(::PortfolioScreenControllerProxyCallbacks const&);

    MCNAPI ~PortfolioScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PortfolioScreenControllerProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
