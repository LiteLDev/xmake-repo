#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/world/template/DownloadWorldTemplateStatus.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/resources/ImportFailure.h"
#include "mc/client/world/DownloadWorldTemplateError.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace World { class DownloadableTemplateManagerBase; }
namespace World { class MarketplacePassWorldTemplateManager; }
namespace World { class OwnedWorldTemplateManager; }
// clang-format on

namespace OreUI {

class WorldTemplateOperationsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldTemplateOperationsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                 mActiveManagerForDownloads;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDirty;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>                            mExistenceTracker;
    ::ll::TypedStorage<8, 24, std::string>                                      mActiveDownloadTemplateId;
    ::ll::TypedStorage<8, 24, std::string>                                      mDownloadProgressBytes;
    ::ll::TypedStorage<8, 24, std::string>                                      mDownloadTotalBytes;
    ::ll::TypedStorage<4, 4, float>                                             mDownloadProgressPercent;
    ::ll::TypedStorage<4, 8, std::optional<OreUI::DownloadWorldTemplateStatus>> mDownloadStatus;
    ::ll::UntypedStorage<4, 16>                                                 mDownloadTask;
    ::ll::UntypedStorage<4, 16>                                                 mImportTask;
    ::ll::TypedStorage<8, 24, std::string>                                      mImportedPackName;
    ::ll::UntypedStorage<8, 24>                                                 mOwnedWorldTemplateManager;
    ::ll::UntypedStorage<8, 24>                                                 mMarketplacePassWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateOperationsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateOperationsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateOperationsFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::OwnedWorldTemplateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::MarketplacePassWorldTemplateManager>>
    );

    MCNAPI void _beginTemplateDownload();

    MCNAPI void _updateDownloadProgress();

    MCNAPI bool canDownloadBeCancelled();

    MCNAPI void cancelDownload();

    MCNAPI std::optional<World::DownloadWorldTemplateError> downloadWorldTemplate(std::string const&);

    MCNAPI std::string const& getDownloadTotalBytes();

    MCNAPI std::string const& getDownloadingProgressBytes();

    MCNAPI float getDownloadingProgressPercent();

    MCNAPI std::optional<OreUI::DownloadWorldTemplateStatus> const& getDownloadingStatus();

    MCNAPI std::optional<World::DownloadWorldTemplateError> const& getDownloadingTaskResult();

    MCNAPI ::OreUI::FacetTaskState getDownloadingTaskState();

    MCNAPI std::string const& getImportedPackName();

    MCNAPI std::optional<ImportFailure> const& getImportingTaskResult();

    MCNAPI ::OreUI::FacetTaskState getImportingTaskState();

    MCNAPI bool getIsTemplateScreenAvailable() const;

    MCNAPI void importWorldTemplate();

    MCNAPI void resetDownloadTask();

    MCNAPI void resetImportTask();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::OwnedWorldTemplateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<World::MarketplacePassWorldTemplateManager>>
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
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
