#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/EditorConnectionJoinIntent.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PackCapability;
namespace Bedrock { class ActivationArguments; }
// clang-format on

class EditorBootstrapper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInitialized;
    ::ll::TypedStorage<1, 1, bool> mInEditorMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorBootstrapper();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isEditorModeEnabled() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackCapability getPackCapability(std::optional<bool>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& EDITOR_MODE_ARGUMENT_KEY();

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
    // NOLINTEND
};
