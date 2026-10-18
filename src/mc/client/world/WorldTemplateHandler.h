#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/IWorldTemplateHandler.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileArchiver;
class IContentKeyProvider;
class ILevelListCache;
class WorldTemplateManager;
class WorldTemplateProvider;
struct LevelSummary;
struct WorldTemplateInfo;
namespace Social { class IUserManager; }
namespace World { struct WorldID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldTemplateHandler : public ::World::IWorldTemplateHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldTemplateProvider>>                  mWorldTemplateProvider;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                                     mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FileArchiver>>              mFileArchiver;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mWorldTemplateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateHandler& operator=(WorldTemplateHandler const&);
    WorldTemplateHandler(WorldTemplateHandler const&);
    WorldTemplateHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateHandler() /*override*/ = default;

    virtual void loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    ) /*override*/;

    virtual ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    saveTemplate(::LevelSummary const& levelSummary) const /*override*/;

    virtual bool isTemplateExportEnabled() const /*override*/;

    virtual ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& getLocalTemplates() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadTemplate(
        ::std::string const&                                                                            templateId,
        ::std::function<void(::std::variant<::World::WorldID, ::World::IWorldTemplateHandler::Result>)> onComplete
    );

    MCAPI ::std::optional<::World::IWorldTemplateHandler::WriteTemplateError>
    $saveTemplate(::LevelSummary const& levelSummary) const;

    MCFOLD bool $isTemplateExportEnabled() const;

    MCAPI ::std::vector<::std::unique_ptr<::WorldTemplateInfo const>> const& $getLocalTemplates() const;
    // NOLINTEND
};
#else // @header-generator platform
class WorldTemplateHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
