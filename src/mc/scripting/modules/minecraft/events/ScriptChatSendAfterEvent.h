#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/player/ScriptPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Player;
struct ChatEvent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptPlayer; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptChatSendIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptChatSendAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptChatSendAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptChatSendIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::UntypedStorage<8, 32>            mTargets;
    ::ll::UntypedStorage<8, 32>            mSender;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mMessage;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>>
                                                                                                           mTargets;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> mSender;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChatSendAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptChatSendAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI ScriptChatSendAfterEvent(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ScriptChatSendAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                             scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptChatSendAfterEvent(::ChatEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI ScriptChatSendAfterEvent(
        ::ChatEvent const&                    chatEvent,
        ::Player const&                       player,
        ::Scripting::WeakLifetimeScope const& scope
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void copyTo(::ChatEvent&, ::Scripting::WeakLifetimeScope const&) const;
#else // @header-generator platform
    MCAPI void copyTo(::ChatEvent& chatEvent, ::Scripting::WeakLifetimeScope const& scope) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::vector<Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
#endif // @header-generator platform
    getTargets_V010();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void>
        setTargets_V010(std::vector<Scripting::TypedObjectHandle<ScriptModuleMinecraft::ScriptPlayer>>);
#else // @header-generator platform
    MCAPI ::ScriptModuleMinecraft::ScriptChatSendAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI ::Scripting::Result_deprecated<void>
    setTargets_V010(::std::vector<::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> targets);

    MCAPI ~ScriptChatSendAfterEvent();
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bindV010();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bindV010();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptChatSendIntermediateData> const&,
        ::Scripting::WeakLifetimeScope const&
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptChatSendAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptChatSendIntermediateData> const& evtData,
        ::Scripting::WeakLifetimeScope const&                                             scope
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ChatEvent const&, ::Player const&, ::Scripting::WeakLifetimeScope const&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::ChatEvent const& chatEvent, ::Player const& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
