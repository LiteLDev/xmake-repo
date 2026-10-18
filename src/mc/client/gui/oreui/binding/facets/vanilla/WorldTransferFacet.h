#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/AsyncStatefulFunction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/TransferResult.h"

// auto generated forward declare list
// clang-format off
namespace World { class WorldTransferer; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldTransferFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldTransferFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldTransferer&> mWorldTransferer;
    ::ll::TypedStorage<8, 152, ::OreUI::AsyncStatefulFunction_DEPRECATED<::World::TransferResult()>>
        mImportWorldFunctor_DEPRECATED;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::DuplicateWorldResult>>
                                                                                  mBackupWorldTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::TransferResult>> mImportWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTransferFacet& operator=(WorldTransferFacet const&);
    WorldTransferFacet(WorldTransferFacet const&);
    WorldTransferFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTransferFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldTransferFacet(::World::WorldTransferer& worldTransferer);

    MCAPI void backupWorld(::std::string const& world);

    MCAPI ::OreUI::FacetTaskState const getBackupWorldProgress();

    MCFOLD ::std::optional<::World::IWorldStorageHandler::DuplicateWorldResult> const& getBackupWorldResult();

    MCFOLD ::OreUI::AsyncStatefulFunction_DEPRECATED<::World::TransferResult()>& getImportWorldFunctor_DEPRICATED();

    MCFOLD ::OreUI::FacetTaskState const getImportWorldProgress();

    MCAPI float getImportWorldProgressPercentage();

    MCAPI ::std::optional<::World::TransferResult> const& getImportWorldResult();

    MCAPI void importWorld();

    MCAPI void resetBackupWorld();

    MCAPI void resetImportWorld();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::WorldTransferer& worldTransferer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class WorldTransferFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
