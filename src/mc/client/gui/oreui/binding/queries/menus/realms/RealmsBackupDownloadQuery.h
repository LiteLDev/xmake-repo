#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/realms/BackupDownloadState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsBackupDownloader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_C) // @header-generator platform
class RealmsBackupDownloadQuery : public ::OreUI::QueryBase<::OreUI::RealmsBackupDownloadQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsBackupDownloader>> mBackupDownloader;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::BackupDownloadState>>               mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>                                       mProgress;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                 mChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsBackupDownloadQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsBackupDownloadQuery(::OreUI::GameDependencies const& game);
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
class RealmsBackupDownloadQuery {};
#endif // @header-generator platform

} // namespace OreUI
#endif // @header-generator platform
