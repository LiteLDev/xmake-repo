#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/world/level/dimension/MoonPhases.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptAimAssistRegistry; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptLootTableManager; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptPrimitiveManager; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptSoundDefinitionRegistry; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptTickingAreaManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct Version; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorld {
public:
    // ScriptWorld inner types define
    using Key = ::ServerLevel const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>>   mLevel;
    ::ll::UntypedStorage<8, 32>                               mLevelV010EventsHandle;
    ::ll::UntypedStorage<8, 32>                               mBeforeEventsHandle;
    ::ll::UntypedStorage<8, 32>                               mAfterEventsHandle;
    ::ll::UntypedStorage<8, 32>                               mStructureManager;
    ::ll::UntypedStorage<8, 32>                               mAimAssistRegistry;
    ::ll::UntypedStorage<8, 32>                               mLootTableManager;
    ::ll::UntypedStorage<8, 32>                               mTickingAreaManager;
    ::ll::UntypedStorage<8, 32>                               mPrimitiveShapesManager;
    ::ll::UntypedStorage<8, 32>                               mSoundDefinitionRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptWorld(::ScriptModuleMinecraft::ScriptWorld&&);

    MCNAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<ServerLevel*>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
    );

    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError>
    _playOrQueueMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result_deprecated<void>
    _playOrQueueMusic_010(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError> _playSoundInternal(
        std::string const&,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptWorldSoundOptions>
    );

    MCNAPI std::optional<Scripting::Error> _validateDynamicProperty_V010(
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const*
    ) const;

    MCNAPI int getAbsoluteTime() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWorldAfterEvents> getAfterEvents() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptWorldBeforeEvents> getBeforeEvents() const;

    MCNAPI int getDay() const;

    MCNAPI int getTimeOfDay() const;

    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError>
    playMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::Result_deprecated<void>
    playMusic_010(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError>
    queueMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::Result_deprecated<void>
    queueMusic_010(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>);

    MCNAPI ::Scripting::Result<void, Scripting::ArgumentOutOfBoundsError> setDynamicProperty(
        ::Scripting::ContextConfig const&,
        std::string const&,
        std::optional<std::variant<double, float, bool, std::string, Vec3>> const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorld&&);

    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<ServerLevel*>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
