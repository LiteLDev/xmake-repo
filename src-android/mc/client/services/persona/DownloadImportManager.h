#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/DlcBatchCacheModel.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IMinecraftGame;
class IStoreCatalogItem;
class PersonaRepository;
namespace persona { class DlcImportTracker; }
namespace persona { class PieceOfferWrapper; }
// clang-format on

namespace persona {

class DownloadImportManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::DlcBatchCacheModel>                                    mDlcBatchCacheModel;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<persona::DlcImportTracker>>> mTrackedImports;
    ::ll::TypedStorage<8, 16, std::shared_ptr<persona::DlcImportTracker>>              mImportWaitingCallback;
    ::ll::TypedStorage<8, 24, std::set<mce::UUID>>                                     mImportedPacks;
    // NOLINTEND

public:
    // prevent constructor by default
    DownloadImportManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DownloadImportManager(::IMinecraftGame&);

    MCNAPI bool
    collectOffer(::PersonaRepository&, ::persona::PieceOfferWrapper const&, std::function<void(bool)>, bool);

    MCNAPI void tick(::PersonaRepository&);

    MCNAPI ~DownloadImportManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona
