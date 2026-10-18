#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/EditorConnectionJoinIntent.h"

// auto generated forward declare list
// clang-format off
class LevelData;
#if defined(LL_PLAT_A) // @header-generator platform
class PackCapability;
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock { class ActivationArguments; }
// clang-format on

class EditorBootstrapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsInitialized;
    ::ll::TypedStorage<1, 1, bool> mInEditorMode;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1> mUnk9a3eaa;
    ::ll::UntypedStorage<1, 1> mUnk42942f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EditorBootstrapper& operator=(EditorBootstrapper const&);
    EditorBootstrapper(EditorBootstrapper const&);
    EditorBootstrapper();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EditorBootstrapper();
#else // @header-generator platform
    virtual ~EditorBootstrapper() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isEditorModeEnabled() const;
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void logLoadedLevelType(::LevelData const& levelData, bool levelLoadSucceeded) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability(std::optional<bool>);
#else // @header-generator platform
    MCNAPI void processActivationArguments(::Bedrock::ActivationArguments const& args);

#ifdef LL_PLAT_S
    MCNAPI void processLoadedLevel(::LevelData& levelData, bool levelLoadSucceeded, bool convertWorldToEditorProject);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EDITOR_MODE_ARGUMENT_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& JOIN_INTENT_ARGUMENT_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& EDITOR_MODE_ARGUMENT_VALUE();

    MCNAPI static std::string const& JOIN_INTENT_ARGUMENT_KEY();

    MCNAPI static std::optional<EditorConnectionJoinIntent>& msGlobalEditorJoinIntentOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::EditorConnectionJoinIntent>& msGlobalEditorJoinIntentOverride();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
