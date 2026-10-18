#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

class ScriptDeferredEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDeferredEventListener();
#else // @header-generator platform
    virtual ~ScriptDeferredEventListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

    virtual void onPreFlushAfterEvents();

    virtual void onPostFlushAfterEvents();

    virtual void onScriptTickStart();

    virtual void onScriptTickEnd();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);
#else // @header-generator platform
    MCFOLD void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPreFlushAfterEvents();
#else // @header-generator platform
    MCFOLD void $onPreFlushAfterEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onPostFlushAfterEvents();
#else // @header-generator platform
    MCFOLD void $onPostFlushAfterEvents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScriptTickStart();
#else // @header-generator platform
    MCFOLD void $onScriptTickStart();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onScriptTickEnd();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $onScriptTickEnd();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
