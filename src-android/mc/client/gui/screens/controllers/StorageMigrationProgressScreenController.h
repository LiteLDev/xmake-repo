#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
