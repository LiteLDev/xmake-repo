#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ScriptStatCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptClientDiagnosticsListener;
class ScriptStat;
// clang-format on

class ScriptDiagnosticsCollectors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mClientStatsCollector;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mMemoryStatsCollector;
    ::ll::TypedStorage<8, 304, ::ScriptStatCollector> mNetworkStatsCollector;
    ::ll::UntypedStorage<8, 16>                       mClientDiagnostics;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsCollectors();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScriptDiagnosticsCollectors(::ScriptClientDiagnosticsListener&, ::Bedrock::NonOwnerPointer<Editor::IEditorManager>);

    MCNAPI std::optional<ScriptStat> _collectClientStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectMemoryStats(ulong, ulong, ulong);

    MCNAPI std::optional<ScriptStat> _collectNetworkStats(ulong, ulong, ulong);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptClientDiagnosticsListener&, ::Bedrock::NonOwnerPointer<Editor::IEditorManager>);
    // NOLINTEND
};
