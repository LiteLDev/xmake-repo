#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SculkSpreader;
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleGameTest {

class ScriptSculkSpreader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                  mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mCatalystPos;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSculkSpreader& operator=(ScriptSculkSpreader const&);
    ScriptSculkSpreader(ScriptSculkSpreader const&);
    ScriptSculkSpreader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<int> getNumberOfCursors() const;

    MCNAPI ::Scripting::Result_deprecated<int> getTotalCharge() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleGameTest::ScriptSculkSpreader>>
    getHandle(::BlockSource&, ::BlockPos const&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
