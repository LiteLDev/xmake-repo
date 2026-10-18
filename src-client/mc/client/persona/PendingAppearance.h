#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/PersonaAppearance.h"
#include "mc/world/actor/player/persona/PersonaError.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
struct PackIdVersion;
namespace persona { class IPendingAppearanceContext; }
namespace persona { class PieceHandle; }
// clang-format on

namespace persona {

class PendingAppearance {
public:
    // PendingAppearance inner types define
    enum Status : uint {
        InitPending                 = 0,
        DownloadingPiecesInProgress = 1,
        LoadingPiecesInProgress     = 2,
        ReadyForCreation            = 3,
        ReadyForRemoval             = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 960>                                   mAppearance;
    ::ll::UntypedStorage<8, 48>                                    mCallback;
    ::ll::TypedStorage<8, 24, std::string>                         mCharacterName;
    ::ll::TypedStorage<4, 4, ::persona::PendingAppearance::Status> mStatus;
    ::ll::TypedStorage<4, 4, ::persona::PersonaError>              mError;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IDlcBatchModel>>     mDlcDownloader;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingAppearance& operator=(PendingAppearance const&);
    PendingAppearance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PendingAppearance(::persona::PendingAppearance&&);

    MCNAPI PendingAppearance(::PersonaAppearance const&, std::function<void(const std::string&)>, std::string const&);

    MCNAPI void _handlePieceLoading(
        ::persona::IPendingAppearanceContext&,
        ::persona::PieceHandle const&,
        std::vector<DlcId>&,
        std::vector<PackIdVersion>&,
        bool&
    );

    MCNAPI bool _initiateAppearanceLoading(::persona::IPendingAppearanceContext&);

    MCNAPI bool _loadingInProgress(::persona::IPendingAppearanceContext const&);

    MCNAPI void _onFailedToDownload(::persona::IPendingAppearanceContext&, ::persona::PersonaError);

    MCNAPI void flagForRemoval();

    MCNAPI bool hasError() const;

    MCNAPI bool isReadyForCreation() const;

    MCNAPI bool isReadyForRemoval() const;

    MCNAPI void update(::persona::IPendingAppearanceContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::persona::PendingAppearance&&);

    MCNAPI void* $ctor(::PersonaAppearance const&, std::function<void(const std::string&)>, std::string const&);
    // NOLINTEND
};

} // namespace persona
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
