#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentAfterEventIntermediateStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const&>       mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos const>    mPos;
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mRegion;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentAfterEventIntermediateStorage&
    operator=(ScriptBlockCustomComponentAfterEventIntermediateStorage const&);
    ScriptBlockCustomComponentAfterEventIntermediateStorage(
        ScriptBlockCustomComponentAfterEventIntermediateStorage const&
    );
    ScriptBlockCustomComponentAfterEventIntermediateStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
           tryGetComponentsToExecute() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
    tryGetComponentsToExecute(::Block const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
