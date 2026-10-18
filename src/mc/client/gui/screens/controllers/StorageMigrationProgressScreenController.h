#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/models/StorageMigrationState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/actor/player/LoadingState.h"

// auto generated forward declare list
// clang-format off
class ProgressHandler;
class StorageMigrationProgressScreenModel;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
// clang-format on

class StorageMigrationProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<StorageMigrationProgressScreenModel>> mProgressScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasTicked;
    ::ll::TypedStorage<8, 8, long const>                                            mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, long>                             mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ProgressHandler>> mProgressHandler;
    ::ll::TypedStorage<1, 1, bool>                             mTransferStarted;
    ::ll::TypedStorage<1, 1, bool>                             mIntroShown;
    ::ll::TypedStorage<1, 1, bool>                             mModalShowing;
    ::ll::TypedStorage<1, 1, bool>                             mRestartingTransfer;
    ::ll::TypedStorage<8, 24, std::string>                     mModalNameShowing;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onLeave();

    virtual std::string getAdditionalScreenInfo() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StorageMigrationProgressScreenController(
        std::shared_ptr<StorageMigrationProgressScreenModel>,
        ::Bedrock::NonOwnerPointer<Bedrock::StorageMigration::StorageMigrationService> const&
    );

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _showModal(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<StorageMigrationProgressScreenModel>,
        ::Bedrock::NonOwnerPointer<Bedrock::StorageMigration::StorageMigrationService> const&
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onLeave();

    MCNAPI std::string $getAdditionalScreenInfo() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProgressHandler;
class StorageMigrationProgressScreenModel;
namespace Bedrock::StorageMigration { class StorageMigrationService; }
// clang-format on

class StorageMigrationProgressScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::StorageMigrationProgressScreenModel>> mProgressScreenModel;
    ::ll::TypedStorage<1, 1, bool>                                                      mHasTicked;
    ::ll::TypedStorage<8, 8, int64 const>                                               mProgressMessageInterval;
    ::ll::TypedStorage<8, 8, int64>                                mLastAudioProgressNotificationUpdate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ProgressHandler>> mProgressHandler;
    ::ll::TypedStorage<1, 1, bool>                                 mTransferStarted;
    ::ll::TypedStorage<1, 1, bool>                                 mIntroShown;
    ::ll::TypedStorage<1, 1, bool>                                 mModalShowing;
    ::ll::TypedStorage<1, 1, bool>                                 mRestartingTransfer;
    ::ll::TypedStorage<8, 32, ::std::string>                       mModalNameShowing;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationProgressScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StorageMigrationProgressScreenController(
        ::std::shared_ptr<::StorageMigrationProgressScreenModel>                                model,
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& service
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _showModal(::std::string const& modalName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::StorageMigrationProgressScreenModel>                                model,
        ::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& service
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI void $onOpen();

    MCAPI void $onLeave();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
#else // @header-generator platform
class StorageMigrationProgressScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
