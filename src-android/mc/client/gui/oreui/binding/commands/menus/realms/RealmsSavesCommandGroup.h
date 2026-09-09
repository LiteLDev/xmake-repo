#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Realms { class RealmsBackupDownloader; }
namespace Realms { class RealmsSavesManager; }
// clang-format on

namespace OreUI {

class RealmsSavesCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RealmsSavesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             mRealmsSavesManager;
    ::ll::UntypedStorage<8, 24>             mBackupDownloader;
    ::ll::TypedStorage<8, 240, ::TaskGroup> mTaskGroup;
    ::ll::UntypedStorage<8, 144>            mFetchBackupList;
    ::ll::UntypedStorage<8, 144>            mFetchActiveWorldSize;
    ::ll::UntypedStorage<8, 144>            mSaveBackup;
    ::ll::UntypedStorage<8, 144>            mSaveAutoBackup;
    ::ll::UntypedStorage<8, 144>            mRestoreBackup;
    ::ll::UntypedStorage<8, 144>            mDeleteBackup;
    ::ll::UntypedStorage<8, 144>            mRenameBackup;
    ::ll::UntypedStorage<8, 144>            mDownloadBackup;
    ::ll::UntypedStorage<8, 144>            mCancelBackupDownload;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSavesCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSavesCommandGroup(::OreUI::GameDependencies const&);

    MCNAPI void _resolveStatus(std::shared_ptr<OreUI::InvocationStatus> const&, ::Realms::GenericStatus);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[31]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
};

} // namespace OreUI
