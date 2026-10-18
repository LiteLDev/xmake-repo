#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/DeleteWorldError.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/InfiniteWorldConverter.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace World { class InfiniteWorldConverter; }
namespace World { class WorldEditor; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/world/ClearPlayerDataType.h"
#include "mc/client/world/DeleteWorldError.h"
#include "mc/client/world/ExportWorldFlags.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/InfiniteWorldConverter.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace World { class InfiniteWorldConverter; }
namespace World { class WorldEditor; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class WorldStorageManagerFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldStorageManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>            mWorldEditor;
    ::ll::TypedStorage<8, 8, ::World::InfiniteWorldConverter&> mWorldSizeConverter;
    ::ll::UntypedStorage<4, 12>                                mDuplicateWorldTask;
    ::ll::UntypedStorage<4, 12>                                mExportWorldTask;
    ::ll::UntypedStorage<1, 1>                                 mExportWorldStatus;
    ::ll::UntypedStorage<4, 8>                                 mClearPlayerDataError;
    ::ll::UntypedStorage<4, 12>                                mClearPlayerDataTask;
    ::ll::UntypedStorage<8, 16>                                mClearPlayerDataAsyncResult;
    ::ll::UntypedStorage<4, 16>                                mMakeWorldInfiniteTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageManagerFacet& operator=(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldStorageManagerFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldStorageManagerFacet(::World::WorldEditor&, ::World::InfiniteWorldConverter&);

    MCNAPI void clearDuplicateWorldTaskState();

    MCNAPI void clearExportWorldResult();

    MCNAPI void clearMakeWorldInfinite();

    MCNAPI void clearPlayerData(::World::ClearPlayerDataType, std::string const&);

    MCNAPI std::optional<World::DeleteWorldError> deleteWorld(std::string const&);

    MCNAPI void exportWorld(std::string const&, ::World::ExportWorldFlags);

    MCNAPI void exportWorldAsTemplate(std::string const&, ::World::ExportWorldFlags);

    MCNAPI ::OreUI::FacetTaskState getClearPlayerDataTaskState() const;

    MCNAPI std::optional<World::IWorldStorageHandler::DuplicateWorldResult> const& getDuplicateWorldError() const;

    MCNAPI ::OreUI::FacetTaskState getDuplicateWorldTaskState() const;

    MCNAPI std::optional<World::IWorldStorageHandler::ExportWorldResult> const& getExportWorldTaskResult() const;

    MCNAPI std::optional<World::InfiniteWorldConverter::Result> const& getMakeWorldInfiniteError() const;

    MCNAPI float getMakeWorldInfiniteProgress() const;

    MCNAPI ::OreUI::FacetTaskState getMakeWorldInfiniteState() const;

    MCNAPI void makeWorldInfinite(std::string const&);

    MCNAPI void resetClearPlayerData();

    MCNAPI void resetWorldIconToDefault(std::string const&);

    MCNAPI void saveScreenshotAsWorldIcon(std::string const&, std::string const&, std::string const&);

    MCNAPI void startDuplicateWorld(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[24]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::WorldEditor&, ::World::InfiniteWorldConverter&);
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
class WorldStorageManagerFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::WorldStorageManagerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>            mWorldEditor;
    ::ll::TypedStorage<8, 8, ::World::InfiniteWorldConverter&> mWorldSizeConverter;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::DuplicateWorldResult>>
        mDuplicateWorldTask;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::World::IWorldStorageHandler::ExportWorldResult>>
                                                                               mExportWorldTask;
    ::ll::TypedStorage<1, 1, ::World::IWorldStorageHandler::ExportWorldStatus> mExportWorldStatus;
    ::ll::TypedStorage<4, 8, ::std::optional<::World::IWorldStorageHandler::StartClearPlayerDataError>>
                                                                           mClearPlayerDataError;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>> mClearPlayerDataTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>>           mClearPlayerDataAsyncResult;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::InfiniteWorldConverter::Result>>
        mMakeWorldInfiniteTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldStorageManagerFacet& operator=(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet(WorldStorageManagerFacet const&);
    WorldStorageManagerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearDuplicateWorldTaskState();

    MCAPI void clearExportWorldResult();

    MCAPI void clearMakeWorldInfinite();

    MCAPI void clearPlayerData(::World::ClearPlayerDataType type, ::std::string const& worldID);

    MCAPI ::std::optional<::World::DeleteWorldError> deleteWorld(::std::string const& worldID);

    MCAPI void exportWorld(::std::string const& worldID, ::World::ExportWorldFlags flags);

    MCAPI void exportWorldAsTemplate(::std::string const& worldID, ::World::ExportWorldFlags flags);

    MCFOLD ::OreUI::FacetTaskState getClearPlayerDataTaskState() const;

    MCFOLD ::std::optional<::World::IWorldStorageHandler::DuplicateWorldResult> const& getDuplicateWorldError() const;

    MCFOLD ::OreUI::FacetTaskState getDuplicateWorldTaskState() const;

    MCAPI ::std::optional<::World::IWorldStorageHandler::ExportWorldResult> const& getExportWorldTaskResult() const;

    MCAPI ::std::optional<::World::InfiniteWorldConverter::Result> const& getMakeWorldInfiniteError() const;

    MCAPI float getMakeWorldInfiniteProgress() const;

    MCFOLD ::OreUI::FacetTaskState getMakeWorldInfiniteState() const;

    MCAPI void makeWorldInfinite(::std::string const& worldID);

    MCAPI void resetClearPlayerData();

    MCAPI void resetWorldIconToDefault(::std::string const& worldID);

    MCAPI void
    saveScreenshotAsWorldIcon(::std::string const& worldID, ::std::string const& path, ::std::string const& imageID);

    MCAPI void startDuplicateWorld(::std::string const& worldID);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
class WorldStorageManagerFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
