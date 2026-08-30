#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionContainer.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct NpcDialogueScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mSceneName;
    ::ll::TypedStorage<8, 24, std::string>            mText;
    ::ll::TypedStorage<8, 24, std::string>            mNPCName;
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> mActionsContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcDialogueScene& operator=(NpcDialogueScene const&);
    NpcDialogueScene(NpcDialogueScene const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~NpcDialogueScene();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
