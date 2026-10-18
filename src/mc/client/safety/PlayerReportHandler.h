#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/PlayerReportFacet.h"
#include "mc/client/safety/ReportArea.h"
#include "mc/client/safety/ReportReason.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
class IClientInstance;
namespace GeometryAtlas { class IOffscreenPaperDollRenderer; }
namespace Json { class Value; }
namespace Social { class IChatChannel; }
// clang-format on

class PlayerReportHandler : public ::Bedrock::EnableNonOwnerReferences,
                            public ::std::enable_shared_from_this<PlayerReportHandler> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                     mClientInstance;
    ::ll::UntypedStorage<8, 24>                                      mChatMessagesForPlayerReport;
    ::ll::UntypedStorage<8, 24>                                      mChatMessagesForPlayerReportWithoutFormatting;
    ::ll::UntypedStorage<8, 24>                                      mPartyChatMessagesForPlayerReport;
    ::ll::UntypedStorage<8, 24>                                      mPartyChatMessagesForPlayerReportWithoutFormatting;
    ::ll::UntypedStorage<8, 24>                                      mReportAreaOptions;
    ::ll::UntypedStorage<8, 16>                                      mStoredImagesJson;
    ::ll::UntypedStorage<8, 24>                                      mScreenshotPath;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::IChatChannel>> mPartyChat;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mPartyChatSubscription;
    ::ll::TypedStorage<8, 8, std::unique_ptr<GeometryAtlas::IOffscreenPaperDollRenderer>> mOffscreenPaperDollRenderer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportHandler& operator=(PlayerReportHandler const&);
    PlayerReportHandler(PlayerReportHandler const&);
    PlayerReportHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerReportHandler();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerReportHandler(::IClientInstance&, std::unique_ptr<GeometryAtlas::IOffscreenPaperDollRenderer>);

    MCNAPI std::string _reportAreaToString(::Safety::ReportArea) const;

    MCNAPI std::string _reportReasonToString(::Safety::ReportReason) const;

    MCNAPI void cleanup();

    MCNAPI void connectToPartyChatUpdates(::Bedrock::PubSub::Connector<void(std::shared_ptr<Social::IChatChannel>)>&);

    MCNAPI ::Json::Value
    createChatLogsJsonFromSelectedMessages(std::vector<OreUI::PlayerReportFacet::ChatMessageData>&, std::vector<int>&);

    MCNAPI std::vector<OreUI::PlayerReportFacet::ChatMessageData> const getChatMessagesForPlayerReport() const;

    MCNAPI std::vector<OreUI::PlayerReportFacet::ChatMessageData> const getPartyChatMessagesForPlayerReport() const;

    MCNAPI std::vector<OreUI::PlayerReportFacet::DropdownOption> const getReportAreaOptions() const;

    MCNAPI std::vector<OreUI::PlayerReportFacet::DropdownOption> const
           getReportReasonOptionsForReportArea(::Safety::ReportArea const&) const;

    MCNAPI ::Core::PathBuffer<std::string> getReportScreenshotPath() const;

    MCNAPI bool hasReachedReportLimit() const;

    MCNAPI ::Bedrock::Threading::Async<void>
    initiatePlayerReport(std::string const&, std::string const&, std::string const&);

    MCNAPI void
    reportPlayer(int, int, std::string, std::string, ::OreUI::PlayerReportFacet::ChatSelection, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&, std::unique_ptr<GeometryAtlas::IOffscreenPaperDollRenderer>);
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
class PlayerReportHandler {};
#endif // @header-generator platform
