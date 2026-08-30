#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/Realms__BackupDownloadState.h"
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsBackupDownloader; }
// clang-format on

namespace OreUI {

class RealmsBackupDownloadQuery : public ::OreUI::QueryBase<OreUI::RealmsBackupDownloadQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                mBackupDownloader;
    ::ll::UntypedStorage<8, 152>                               mState;
    ::ll::UntypedStorage<8, 152>                               mProgress;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mChangedSubscription;
    // NOLINTEND
};

} // namespace OreUI
