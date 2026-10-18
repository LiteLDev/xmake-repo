#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class LessonItem;
class LevelData;
class PlayScreenModel;
class ResourcePackManager;
class ToastManager;
class WorldFileDownloadManager;
struct LocalWorldInfo;
// clang-format on

class EducationContentManagerScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class IResourcePackRepository;
class LessonItem;
class LevelData;
class PlayScreenModel;
class ResourcePackManager;
class ToastManager;
class WorldFileDownloadManager;
// clang-format on

class EducationContentManagerScreenController : public ::MainMenuScreenController {
#else // @header-generator platform
class EducationContentManagerScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // EducationContentManagerScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class OptionalBehavior : uint {
        // bitfield representation
        None                      = 1u << 0,
        AutoLaunchImportedItems   = 1u << 1,
        TrackTemplateInWorldSaves = 1u << 2,
        TrackUserInWorldSaves     = 1u << 3,
    };

    using OnDownloadError = std::function<void()>;

    using OnLevelDataConstructed = std::function<void(LevelData&)>;

    using OnLaunchSucceeded = std::function<void()>;

    using OnLaunchFailed = std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                           mPlayScreenModel;
    ::ll::UntypedStorage<8, 48>                                                           mOnDownloadError;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDownloadInProgress;
    ::ll::TypedStorage<8, 16, std::shared_ptr<WorldFileDownloadManager>>                  mWorldFileDownloadManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                  mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                      mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                       mEventing;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                             mToastManager;
    ::ll::TypedStorage<4, 4, ::EducationContentManagerScreenController::OptionalBehavior> mOptionalBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationContentManagerScreenController& operator=(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationContentManagerScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EducationContentManagerScreenController(
        std::shared_ptr<PlayScreenModel>,
        std::function<void()>,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::ToastManager&,
        ::EducationContentManagerScreenController::OptionalBehavior
    );

    MCNAPI void cancelWorldDownload();

    MCNAPI void cancelWorldLaunch();

    MCNAPI void importWorld(::LessonItem&);

    MCNAPI bool isDownloadInProgress() const;

    MCNAPI void launchWorld(
        ::LessonItem&,
        std::function<void()> const&,
        std::function<void()> const&,
        std::function<void(LevelData&)> const&
    );

    MCNAPI ::ui::DirtyFlag tick(::LessonItem&, std::function<void(LevelData&)> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<PlayScreenModel>,
        std::function<void()>,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::ToastManager&,
        ::EducationContentManagerScreenController::OptionalBehavior
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class OptionalBehavior : uint {
        // bitfield representation
        None                      = 1u << 0,
        AutoLaunchImportedItems   = 1u << 1,
        TrackTemplateInWorldSaves = 1u << 2,
        TrackUserInWorldSaves     = 1u << 3,
    };

    using OnDownloadError = ::std::function<void()>;

    using OnLaunchSucceeded = ::std::function<void()>;

    using OnLaunchFailed = ::std::function<void()>;

    using OnLevelDataConstructed = ::std::function<void(::LevelData&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                       mPlayScreenModel;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                    mOnDownloadError;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDownloadInProgress;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::WorldFileDownloadManager>>              mWorldFileDownloadManager;
    ::ll::TypedStorage<8, 8, ::IResourcePackRepository&>                                  mResourcePackRepository;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                                      mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                                       mEventing;
    ::ll::TypedStorage<8, 8, ::ToastManager&>                                             mToastManager;
    ::ll::TypedStorage<4, 4, ::EducationContentManagerScreenController::OptionalBehavior> mOptionalBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationContentManagerScreenController& operator=(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController(EducationContentManagerScreenController const&);
    EducationContentManagerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationContentManagerScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EducationContentManagerScreenController(
        ::std::shared_ptr<::PlayScreenModel>                        model,
        ::std::function<void()>                                     onDownloadError,
        ::IResourcePackRepository&                                  rpr,
        ::ResourcePackManager&                                      rpm,
        ::IMinecraftEventing&                                       evt,
        ::ToastManager&                                             tm,
        ::EducationContentManagerScreenController::OptionalBehavior optionalBehavior
    );

    MCAPI void cancelWorldDownload();

    MCAPI void importWorld(::LessonItem& item);

    MCAPI void launchWorld(
        ::LessonItem&                              item,
        ::std::function<void()> const&             onLaunchSucceeded,
        ::std::function<void()> const&             onLaunchFailed,
        ::std::function<void(::LevelData&)> const& onLevelDataConstructed
    );

    MCAPI ::ui::DirtyFlag
    tick(::LessonItem& activeItem, ::std::function<void(::LevelData&)> const& onLevelDataConstructed);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel>                        model,
        ::std::function<void()>                                     onDownloadError,
        ::IResourcePackRepository&                                  rpr,
        ::ResourcePackManager&                                      rpm,
        ::IMinecraftEventing&                                       evt,
        ::ToastManager&                                             tm,
        ::EducationContentManagerScreenController::OptionalBehavior optionalBehavior
    );
    // NOLINTEND
#else // @header-generator platform
    enum class OptionalBehavior : uint {};
#endif // @header-generator platform
#endif // @header-generator platform
};
