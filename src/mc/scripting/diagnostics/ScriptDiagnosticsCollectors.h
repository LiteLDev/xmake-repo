#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/ScriptStatCollector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptClientDiagnosticsListener;
class ScriptStat;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Editor { class IEditorManager; }
#endif // @header-generator platform
// clang-format on

class ScriptDiagnosticsCollectors {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mClientStatsCollector;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mMemoryStatsCollector;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mNetworkStatsCollector;
    ::ll::UntypedStorage<8, 16>                       mClientDiagnostics;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 368> mUnkd24054;
    ::ll::UntypedStorage<8, 368> mUnkba40b9;
    ::ll::UntypedStorage<8, 368> mUnkffcc92;
    ::ll::UntypedStorage<8, 8>   mUnk847b91;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptDiagnosticsCollectors& operator=(ScriptDiagnosticsCollectors const&);
    ScriptDiagnosticsCollectors(ScriptDiagnosticsCollectors const&);
#endif // @header-generator platform
    ScriptDiagnosticsCollectors();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    ScriptDiagnosticsCollectors(::ScriptClientDiagnosticsListener&, ::Bedrock::NonOwnerPointer<Editor::IEditorManager>);
#else // @header-generator platform
    MCNAPI ScriptDiagnosticsCollectors(
        ::ScriptClientDiagnosticsListener&                   clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectClientStats(ulong, ulong, ulong);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat> _collectClientStats(uint64, uint64, uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptStat> _collectNetworkStats(ulong, ulong, ulong);
#else // @header-generator platform
    MCNAPI ::std::optional<::ScriptStat>
    _collectNetworkStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectTickFrequency);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptClientDiagnosticsListener&, ::Bedrock::NonOwnerPointer<Editor::IEditorManager>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptClientDiagnosticsListener&                   clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );
#endif // @header-generator platform
    // NOLINTEND
};
