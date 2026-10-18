#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/npc/NpcDialogueScene.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct NpcDialogueScene;
#endif // @header-generator platform
// clang-format on

class NpcDialogueStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, NpcDialogueScene>> mScenes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::NpcDialogueScene>> mScenes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NpcDialogueScene const* getScene(std::string const&) const;
#else // @header-generator platform
    MCFOLD ::NpcDialogueScene const* getScene(::std::string const& sceneName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void init(::ResourcePackManager&);
#else // @header-generator platform
    MCFOLD ::NpcDialogueScene* getScene(::std::string const& sceneName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool parseFile(std::string const&, std::string const&, ::CurrentCmdVersion const);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void init(::ResourcePackManager& resourcePackManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& MAX_NUM_BUTTONS();
#else // @header-generator platform
    MCAPI bool parseFile(
        ::std::string const&      fileData,
        ::std::string const&      fileName,
        ::CurrentCmdVersion const packCommandVersion
    );
#endif // @header-generator platform
    // NOLINTEND
};
