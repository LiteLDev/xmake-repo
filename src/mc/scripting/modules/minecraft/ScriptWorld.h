#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/scripting/modules/minecraft/ScriptTimeOfDay.h"
#include "mc/world/level/dimension/MoonPhases.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptAimAssistRegistry; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptGameRules; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptGlobalEventListeners; }
namespace ScriptModuleMinecraft { class ScriptLootTableManager; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPrimitiveManager; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSoundDefinitionRegistry; }
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { class ScriptTickingAreaManager; }
namespace ScriptModuleMinecraft { class ScriptV010Events; }
namespace ScriptModuleMinecraft { class ScriptWorldAfterEvents; }
namespace ScriptModuleMinecraft { class ScriptWorldBeforeEvents; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptMusicOptions; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptSoundOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct InvalidArgumentError; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptV010Events>>
        mLevelV010EventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldBeforeEvents>>
        mBeforeEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptWorldAfterEvents>>
        mAfterEventsHandle;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>>
        mStructureManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptAimAssistRegistry>>
        mAimAssistRegistry;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootTableManager>>
        mLootTableManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptTickingAreaManager>>
        mTickingAreaManager;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPrimitiveManager>>
        mPrimitiveShapesManager;
    ::ll::TypedStorage<
        8,
        32,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSoundDefinitionRegistry>>
        mSoundDefinitionRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorld& operator=(ScriptWorld const&);
    ScriptWorld(ScriptWorld const&);
    ScriptWorld();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWorld(::ScriptModuleMinecraft::ScriptWorld&&);
#else // @header-generator platform
    MCAPI ScriptWorld(::ScriptModuleMinecraft::ScriptWorld&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<ServerLevel*>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
#else // @header-generator platform
    MCAPI ScriptWorld(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners,
        ::Scripting::DependencyLocator&                      locator,
        ::Scripting::ContextConfig const&                    config,
        ::Scripting::Version                                 serverModuleVersion
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError>
    _playOrQueueMusic(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result_deprecated<void>
    _playOrQueueMusic_010(std::string const&, std::optional<ScriptModuleMinecraft::ScriptMusicOptions>, bool);

    MCNAPI ::Scripting::Result<void, Scripting::PropertyOutOfBoundsError> _playSoundInternal(
        std::string const&,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptWorldSoundOptions>
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playOrQueueMusic(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::Error> _validateDynamicProperty_V010(
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const*
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> _playOrQueueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions,
        bool                                                         shouldQueue
    );

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError> _playSoundInternal(
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
    );

    MCAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getAbsoluteTime() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    playMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> playMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCAPI ::Scripting::Result<void, ::Scripting::PropertyOutOfBoundsError>
    queueMusic(::std::string const& trackID, ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions);

    MCAPI ::Scripting::Result_deprecated<void> queueMusic_010(
        ::std::string const&                                         trackID,
        ::std::optional<::ScriptModuleMinecraft::ScriptMusicOptions> musicOptions
    );

    MCAPI ::Scripting::Result<void, ::Scripting::ArgumentOutOfBoundsError> setDynamicProperty(
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
    );

#ifdef LL_PLAT_C
    MCAPI ~ScriptWorld();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorld&&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptWorld&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&,
        ::gsl::not_null<ServerLevel*>,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners&,
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::Version
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&                scope,
        ::gsl::not_null<::ServerLevel*>                      level,
        ::ScriptModuleMinecraft::ScriptGlobalEventListeners& listeners,
        ::Scripting::DependencyLocator&                      locator,
        ::Scripting::ContextConfig const&                    config,
        ::Scripting::Version                                 serverModuleVersion
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
