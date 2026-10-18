#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptActorRemoveAfterEventIntermediateData; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorRemoveAfterEvent {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptActorRemoveAfterEvent inner types define
    using QueueType = ::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mRemovedActorId;
    ::ll::TypedStorage<8, 24, std::string> mTypeId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mRemovedActorId;
    ::ll::TypedStorage<8, 32, ::std::string> mTypeId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptActorRemoveAfterEvent& operator=(ScriptActorRemoveAfterEvent const&);
#endif // @header-generator platform
    ScriptActorRemoveAfterEvent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptActorRemoveAfterEvent(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCAPI ScriptActorRemoveAfterEvent(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent const&);

    MCAPI ScriptActorRemoveAfterEvent(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const& actorRemoveEvent,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCFOLD ::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&
    operator=(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent&&);
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
    MCNAPI void* $ctor(
        std::shared_ptr<ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const&,
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptActorRemoveAfterEvent const&);

    MCAPI void* $ctor(
        ::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorRemoveAfterEventIntermediateData> const& actorRemoveEvent,
#endif // @header-generator platform
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
