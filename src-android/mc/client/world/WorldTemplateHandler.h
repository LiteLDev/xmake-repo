#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IWorldTemplateHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/FileArchiver.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class FilePickerSettings;
class IContentKeyProvider;
class ILevelListCache;
class WorldTemplateManager;
class WorldTemplateProvider;
struct LevelSummary;
struct WorldTemplateInfo;
namespace Social { class IUserManager; }
namespace World { struct WorldID; }
// clang-format on

namespace World {

class WorldTemplateHandler : public ::World::IWorldTemplateHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldTemplateProvider>> mWorldTemplateProvider;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                     mLevelListCache;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                mUserManager;
    ::ll::UntypedStorage<8, 24>                                      mKeyProvider;
    ::ll::UntypedStorage<8, 24>                                      mFileArchiver;
    ::ll::UntypedStorage<8, 24>                                      mWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateHandler& operator=(WorldTemplateHandler const&);
    WorldTemplateHandler(WorldTemplateHandler const&);
    WorldTemplateHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~WorldTemplateHandler();

    virtual void loadTemplate(std::string const&, std::function<void (std::variant<World::WorldID, World::IWorldTemplateHandler::Result>)>);

    virtual std::optional<World::IWorldTemplateHandler::WriteTemplateError> saveTemplate(::LevelSummary const&) const;

    virtual bool isTemplateExportEnabled() const;

    virtual std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getLocalTemplates() const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $loadTemplate(
        std::string const&,
        std::function<void(std::variant<World::WorldID, World::IWorldTemplateHandler::Result>)>
    );

    MCNAPI std::optional<World::IWorldTemplateHandler::WriteTemplateError> $saveTemplate(::LevelSummary const&) const;

    MCNAPI bool $isTemplateExportEnabled() const;

    MCNAPI std::vector<std::unique_ptr<const WorldTemplateInfo>> const& $getLocalTemplates() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
