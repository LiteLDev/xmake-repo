#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/npc/ActionContainer.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct NpcDialogueScene {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            mSceneName;
    ::ll::TypedStorage<8, 24, std::string>            mText;
    ::ll::TypedStorage<8, 24, std::string>            mNPCName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>          mSceneName;
    ::ll::TypedStorage<8, 32, ::std::string>          mText;
    ::ll::TypedStorage<8, 32, ::std::string>          mNPCName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::npc::ActionContainer> mActionsContainer;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    NpcDialogueScene& operator=(NpcDialogueScene const&);
    NpcDialogueScene(NpcDialogueScene const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~NpcDialogueScene();
#else // @header-generator platform
    MCAPI ~NpcDialogueScene();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
