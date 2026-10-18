#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsSavesCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsSavesCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsSavesManager>>     mRealmsSavesManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsBackupDownloader>> mBackupDownloader;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                    mTaskGroup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int>>                mFetchBackupList;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int>>                mFetchActiveWorldSize;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::vector<::std::string>>>
        mSaveBackup;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::vector<::std::string>>>
                                                                                               mSaveAutoBackup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string>> mRestoreBackup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string>> mDeleteBackup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string>>
        mRenameBackup;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::string>>
                                                                    mDownloadBackup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>> mCancelBackupDownload;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSavesCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSavesCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsSavesCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _resolveStatus(
        ::std::shared_ptr<::OreUI::InvocationStatus> const& commandStatus,
        ::Realms::GenericStatus                             responseStatus
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsSavesCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
