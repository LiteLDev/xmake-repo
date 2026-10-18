#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_C) // @header-generator platform
class DedicatedServerCommands {};
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AllowListFile;
class DedicatedServer;
class EditorAllowList;
class IMinecraftApp;
class Level;
class LevelStorage;
class Minecraft;
struct ScriptSettings;
// clang-format on

class DedicatedServerCommands {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupStandaloneServer(
        ::Bedrock::NotNullNonOwnerPtr<::Minecraft> const& minecraft,
        ::IMinecraftApp&                                  app,
        ::Level&                                          level,
        ::LevelStorage&,
        ::DedicatedServer& dedicatedServer,
        ::AllowListFile&   allowListFile,
        ::EditorAllowList& editorAllowList,
        ::ScriptSettings*  scriptSettings
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::string>& mSaveAllFileList();
    // NOLINTEND
};
#endif // @header-generator platform
#endif // @header-generator platform
