#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/actor/npc/NpcDialogueScene.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
// clang-format on

class NpcDialogueStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, NpcDialogueScene>> mScenes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::NpcDialogueScene const* getScene(std::string const&) const;

    MCNAPI void init(::ResourcePackManager&);

    MCNAPI bool parseFile(std::string const&, std::string const&, ::CurrentCmdVersion const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_NUM_BUTTONS();
    // NOLINTEND
};
