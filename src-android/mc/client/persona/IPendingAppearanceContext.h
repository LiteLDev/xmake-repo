#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/ArmSizeType.h"
#include "mc/world/actor/player/persona/PersonaError.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IDlcBatchModel;
struct PackIdVersion;
namespace persona { class PieceHandle; }
// clang-format on

namespace persona {

class IPendingAppearanceContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::shared_ptr<IDlcBatchModel> createDlcBatchModel(std::vector<DlcId> const&, std::vector<PackIdVersion> const&) = 0;

    virtual void queuePersonaGeneralError(::persona::PersonaError) = 0;

    virtual bool isKnownUnloadedPiece(::persona::PieceHandle const&) const = 0;

    virtual bool isPieceKnownByRepo(::persona::PieceHandle const&) const = 0;

    virtual bool isPieceLoaded(::persona::PieceHandle const&) const = 0;

    virtual bool isPieceLoading(::persona::PieceHandle const&) const = 0;

    virtual bool loadCustomSkin(::persona::PieceHandle const&, ::SharedTypes::persona::ArmSizeType const&) = 0;

    virtual void loadPiece(::persona::PieceHandle const&) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace persona
