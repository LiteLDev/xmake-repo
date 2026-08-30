#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/ServerRegion.h"
#include "mc/client/realms/RealmsRegionSettingsState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsWorldEditor; }
// clang-format on

namespace Realms {

class RealmsRegionSettings : public ::std::enable_shared_from_this<Realms::RealmsRegionSettings> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>                 mRealmsAPI;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsWorldEditor>> mRealmsWorldEditor;
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>                        mOptions;
    ::ll::UntypedStorage<8, 88>                                         mRegionSettingUpdatePublisher;
    ::ll::UntypedStorage<8, 88>                                         mEditorStatusUpdatePublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, int>                                       mRegionSelectedIndex;
    ::ll::TypedStorage<8, 24, std::vector<Realms::ServerRegion>>        mRegionData;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsRegionSettingsState>       mRegionSettingStatus;
    ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                   mRegionSettingStatusError;
    ::ll::TypedStorage<1, 1, bool>                                      mTriggerLowPingWarning;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRegionSettings& operator=(RealmsRegionSettings const&);
    RealmsRegionSettings(RealmsRegionSettings const&);
    RealmsRegionSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fetchRegions();

    MCNAPI std::vector<Realms::ServerRegion> const& getRegions() const;

    MCNAPI void resetLowPingWarning();

    MCNAPI void resetRegionStatus();

    MCNAPI void saveSelectedServerRegion(std::string const&);

    MCNAPI void setDoNotShowPingWarning(bool);

    MCNAPI void setSelectedServerRegionIndex(int);

    MCNAPI ::Bedrock::PubSub::Subscription
        subscribeToEditorStateUpdatePublisher(std::function<void(Realms::RealmsWorldEditorStateStatus)>);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToRegionSettingUpdatePublisher(
        std::function<void(Realms::RealmsRegionSettingsState, bool, bool, int)>
    );
    // NOLINTEND
};

} // namespace Realms
