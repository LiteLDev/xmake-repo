#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/world/PostCreateWorldAction.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/level/NetherWorldType.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class Experiments;
class IContentManager;
class LevelDataWrapper;
class LevelSeed64;
class MainMenuScreenModel;
struct LevelSummary;
struct LocalWorldInfo;
struct PackManagerContentSource;
struct SpawnSettings;
namespace Json { class Value; }
namespace Realms { struct World; }
// clang-format on

class SettingsScreenControllerBase : public ::MainMenuScreenController {
public:
    // SettingsScreenControllerBase inner types define
    using StringValidator = std::function<bool(const std::string&)>;

    using BooleanOptionGetter = std::function<bool()>;

    using StringOptionSetter = std::function<void(const std::string&)>;

    using StringFinished = std::function<void()>;

    using BooleanOptionSetter = std::function<void(bool)>;

    using IntegerOptionGetter = std::function<int()>;

    using IntegerOptionSetter = std::function<void(int)>;

public:
    // prevent constructor by default
    SettingsScreenControllerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsScreenControllerBase();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void _displayLockedWorldPopup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SettingsScreenControllerBase(std::shared_ptr<MainMenuScreenModel>);

    MCNAPI void _addResourcePacks(::LocalWorldInfo const&);

    MCNAPI bool
    _copyResourcePacks(::PackManagerContentSource*, ::IContentManager&, ::LevelSummary, std::function<void()>);

    MCNAPI ::ui::ViewRequest _createWorld(
        ::Experiments*,
        ::SettingsScreenMode,
        ::LevelSeed64,
        ::LevelSummary,
        ::LevelDataWrapper&,
        ::SpawnSettings,
        ::NetherWorldType,
        ::PackManagerContentSource*,
        ::IContentManager&,
        ::PostCreateWorldAction,
        ::DlcUIWrapper*,
        ::Realms::World&,
        std::function<void(std::function<void()>)>
    );

    MCNAPI void _initLevelData(::LevelDataWrapper&, bool);

    MCNAPI void _initNewWorldLevelData(::LevelDataWrapper&);

    MCNAPI ::ui::ViewRequest _playWorld(
        ::SettingsScreenMode,
        ::LevelSummary const&,
        ::LevelDataWrapper&,
        ::PackManagerContentSource*,
        ::IContentManager&,
        ::DlcUIWrapper*
    );

    MCNAPI void _removeResourcePacks();

    MCNAPI ::ui::ViewRequest _showLowDiskSpaceWarning();

    MCNAPI void confirmationHardcoreDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void confirmationNoAchievementsDialog(std::function<void(ModalScreenButtonId)>);

    MCNAPI void setUpCallbacksForBooleanOption(::OptionID, std::string const&);

    MCNAPI void setUpCallbacksForBooleanOption(::OptionID, std::string const&, std::string const&, std::string const&);

    MCNAPI void setUpCallbacksForBooleanOption(
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<bool()>,
        std::function<bool()>,
        std::function<void(bool)>
    );

    MCNAPI void setupCallbacksForStringOption(
        ::OptionID,
        std::string const&,
        std::function<bool(const std::string&)>,
        std::function<bool(const std::string&)>
    );

    MCNAPI void setupCallbacksForStringOption(
        std::string const&,
        std::string const&,
        std::string const&,
        std::function<bool()>,
        std::function<std::string()>,
        std::function<void(const std::string&)>,
        std::function<bool(const std::string&)>,
        std::function<bool(const std::string&)>,
        std::function<void()>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MainMenuScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $_displayLockedWorldPopup();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
