#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
struct PhotoRecord;
namespace Core { class Path; }
// clang-format on

struct PortfolioScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::vector<::Core::PathBuffer<::std::string>>)>> mSetScreenshots;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::function<bool(::std::string&, ::Core::Path const&)>)>>
                                                                                mSetImageMetaDataLoader;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                          mCallOpen;
    ::ll::TypedStorage<8, 64, ::std::function<::std::vector<::PhotoRecord>&()>> mGetPhotoRecords;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                      mSaveCaptions;
    ::ll::TypedStorage<8, 64, ::std::function<::MinecraftScreenModel&()>>       mGetMinecraftScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<void(uint64)>>                    mDeletePhoto;
    ::ll::TypedStorage<8, 64, ::std::function<void(uint64)>>                    mCreatePhotoItem;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                          mLeaveScreen;
    // NOLINTEND
};
#else // @header-generator platform
struct PortfolioScreenControllerProxyCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
