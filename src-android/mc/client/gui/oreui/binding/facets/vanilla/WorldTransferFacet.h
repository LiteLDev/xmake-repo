#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"

// auto generated forward declare list
// clang-format off
namespace World { class WorldTransferer; }
// clang-format on

namespace OreUI {

class WorldTransferFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldTransferFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldTransferer&> mWorldTransferer;
    ::ll::UntypedStorage<8, 128>                        mImportWorldFunctor_DEPRECATED;
    ::ll::UntypedStorage<4, 12>                         mBackupWorldTask;
    ::ll::UntypedStorage<4, 16>                         mImportWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferFacet& operator=(WorldTransferFacet const&);
    WorldTransferFacet(WorldTransferFacet const&);
    WorldTransferFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTransferFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldTransferFacet(::World::WorldTransferer&);

    MCNAPI void backupWorld(std::string const&);

    MCNAPI ::OreUI::FacetTaskState const getBackupWorldProgress();

    MCNAPI std::optional<World::IWorldStorageHandler::DuplicateWorldResult> const& getBackupWorldResult();

    MCNAPI ::OreUI::AsyncStatefulFunction_DEPRECATED<World::TransferResult()>& getImportWorldFunctor_DEPRICATED();

    MCNAPI ::OreUI::FacetTaskState const getImportWorldProgress();

    MCNAPI float getImportWorldProgressPercentage();

    MCNAPI std::optional<World::TransferResult> const& getImportWorldResult();

    MCNAPI void importWorld();

    MCNAPI void resetBackupWorld();

    MCNAPI void resetImportWorld();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[22]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::WorldTransferer&);
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
