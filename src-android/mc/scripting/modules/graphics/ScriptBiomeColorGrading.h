#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleServerGraphics { struct BiomeKey; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeColorGrading {
public:
    // ScriptBiomeColorGrading inner types define
    using Key = ::ScriptModuleServerGraphics::BiomeKey;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel*>                         mServerLevel;
    ::ll::TypedStorage<8, 24, std::string>                           mBiomeId;
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::ScriptPlayer*> mPlayer;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>            mPlayerId;
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
