#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/persona/IPendingAppearanceContext.h"
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/world/actor/player/persona/PersonaError.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IDlcBatchModel;
class IPersonaRepository;
class ISkinRepository;
class IStoreCatalogRepository;
struct PackIdVersion;
namespace persona { class PieceHandle; }
// clang-format on

namespace persona {

class PendingAppearanceContext : public ::persona::IPendingAppearanceContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaRepository&>  mPersonaRepo;
    ::ll::TypedStorage<8, 8, ::ISkinRepository&>     mSkinRepository;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&> mContentAcquisition;
    ::ll::UntypedStorage<8, 8>                       mStoreRepository;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingAppearanceContext& operator=(PendingAppearanceContext const&);
    PendingAppearanceContext(PendingAppearanceContext const&);
    PendingAppearanceContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::shared_ptr<IDlcBatchModel> createDlcBatchModel(std::vector<DlcId> const&, std::vector<PackIdVersion> const&);

    virtual void queuePersonaGeneralError(::persona::PersonaError);

    virtual bool isKnownUnloadedPiece(::persona::PieceHandle const&) const;

    virtual bool isPieceKnownByRepo(::persona::PieceHandle const&) const;

    virtual bool isPieceLoaded(::persona::PieceHandle const&) const;

    virtual bool isPieceLoading(::persona::PieceHandle const&) const;

    virtual bool loadCustomSkin(::persona::PieceHandle const&, ::SharedTypes::persona::ArmSizeType const&);

    virtual void loadPiece(::persona::PieceHandle const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PendingAppearanceContext(
        ::IPersonaRepository&,
        ::ISkinRepository&,
        ::IContentAcquisition&,
        ::IStoreCatalogRepository&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IPersonaRepository&, ::ISkinRepository&, ::IContentAcquisition&, ::IStoreCatalogRepository&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<IDlcBatchModel>
           $createDlcBatchModel(std::vector<DlcId> const&, std::vector<PackIdVersion> const&);

    MCNAPI void $queuePersonaGeneralError(::persona::PersonaError);

    MCNAPI bool $isKnownUnloadedPiece(::persona::PieceHandle const&) const;

    MCNAPI bool $isPieceKnownByRepo(::persona::PieceHandle const&) const;

    MCNAPI bool $isPieceLoaded(::persona::PieceHandle const&) const;

    MCNAPI bool $isPieceLoading(::persona::PieceHandle const&) const;

    MCNAPI bool $loadCustomSkin(::persona::PieceHandle const&, ::SharedTypes::persona::ArmSizeType const&);

    MCNAPI void $loadPiece(::persona::PieceHandle const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace persona
