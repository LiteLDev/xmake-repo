#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/FallibleAction_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelSummaryBindings.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/world/AddWorldFromTemplateError.h"
#include "mc/client/world/CloseWorldError.h"
#include "mc/client/world/IWorldStorageHandler.h"
#include "mc/client/world/SaveWorldError.h"
#include "mc/client/world/WorldID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IEntitlementManager;
class NewPlayerSystem;
class TrialManager;
namespace OreUI { class IResourceAllowList; }
namespace World { class WorldEditor; }
namespace World { struct WorldData; }
// clang-format on

namespace OreUI {

class WorldEditorFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldEditorFacet> {
public:
    // WorldEditorFacet inner types define
    enum class InitializationResult : int {
        Success = 0,
        Failure = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::WorldEditor&>            mWorldEditor;
    ::ll::UntypedStorage<8, 24>                                mNewPlayerSystem;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>            mTrialManager;
    ::ll::UntypedStorage<8, 24>                                mEntitlementManager;
    ::ll::UntypedStorage<8, 24>                                mResourceAllowList;
    ::ll::UntypedStorage<8, 24>                                mCurrentWorldID;
    ::ll::UntypedStorage<8, 1496>                              mLevelDataWrapper;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>     mLevelDataBindings;
    ::ll::UntypedStorage<8, 696>                               mDefaultLevelSummary;
    ::ll::UntypedStorage<8, 120>                               mLevelSummaryBindings;
    ::ll::UntypedStorage<8, 1496>                              mDefaultLevelDataWrapper;
    ::ll::TypedStorage<8, 288, ::OreUI::LevelDataBindings>     mLevelDataSnapshot;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mWorldDirtySubscriber;
    ::ll::UntypedStorage<8, 24>                                mWorldIconDirtySubscriber;
    ::ll::UntypedStorage<8, 64>                                mAddWorldFromTemplateFunctor;
    ::ll::TypedStorage<8, 112, ::WorldSettingsRules>           mWorldSettingsRules;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                             mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                             mWorldClosedExternally;
    ::ll::UntypedStorage<4, 12>                                mSaveWorldTask;
    ::ll::UntypedStorage<4, 12>                                mLoadWorldTask;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldEditorFacet& operator=(WorldEditorFacet const&);
    WorldEditorFacet(WorldEditorFacet const&);
    WorldEditorFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldEditorFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldEditorFacet(
        ::World::WorldEditor&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>>,
        ::TrialManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::WorldSettingsRules
    );

    MCNAPI void _initializeDataBindings(::World::WorldData const&);

    MCNAPI void _resetLevelData();

    MCNAPI void addWorld();

    MCNAPI void clearSaveWorldTaskState();

    MCNAPI std::optional<World::CloseWorldError> closeWorld(std::string const&);

    MCNAPI ::OreUI::LevelDataBindings& getCurrentWorldData();

    MCNAPI std::string const& getCurrentWorldID() const;

    MCNAPI ::OreUI::LevelSummaryBindings& getCurrentWorldSummary();

    MCNAPI std::optional<World::IWorldStorageHandler::ReadWorldError> const& getLoadWorldError() const;

    MCNAPI ::OreUI::FacetTaskState getLoadWorldTaskState() const;

    MCNAPI std::optional<World::SaveWorldError> const& getSaveWorldError() const;

    MCNAPI ::OreUI::FacetTaskState getSaveWorldTaskState() const;

    MCNAPI bool isAchievementsDisabled() const;

    MCNAPI bool isEditorWorld() const;

    MCNAPI std::optional<World::IWorldStorageHandler::ReadWorldError> loadWorld(std::string const&);

    MCNAPI void reloadWorld();

    MCNAPI void saveLocalWorld(std::string const&);

    MCNAPI bool worldHasBeenModified();

    MCNAPI bool worldIsInitialized() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[20]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::World::WorldEditor&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<NewPlayerSystem>>,
        ::TrialManager const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IEntitlementManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>,
        ::WorldSettingsRules
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
