#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScreenDisplay {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mEntityRef;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptScreenDisplay();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::string, ScriptModuleMinecraft::ScriptRawMessageError> _getJsonString(
        ::Player&,
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageError> _getJsonString(
        ::Player& player,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptRawMessageError, ScriptModuleMinecraft::ScriptInvalidActorError>
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError>
#endif // @header-generator platform
        setActionBar(
#if defined(LL_PLAT_A) // @header-generator platform
            std::variant<
                std::string,
                ScriptModuleMinecraft::ScriptRawMessageInterface,
                std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                text
#endif // @header-generator platform
        ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> setActionBar_V010(
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> setActionBar_V010(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptRawMessageError,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::ArgumentOutOfBoundsError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptRawMessageError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::ArgumentOutOfBoundsError>
#endif // @header-generator platform
    setTitle(
#if defined(LL_PLAT_A) // @header-generator platform
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&,
        std::optional<ScriptModuleMinecraft::ScriptTitleDisplayOptions>
#else // @header-generator platform
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                                                                            title,
        ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<void, ScriptModuleMinecraft::ScriptRawMessageError, ScriptModuleMinecraft::ScriptInvalidActorError>
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError>
#endif // @header-generator platform
        updateSubtitle(
#if defined(LL_PLAT_A) // @header-generator platform
            std::variant<
                std::string,
                ScriptModuleMinecraft::ScriptRawMessageInterface,
                std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                subtitle
#endif // @header-generator platform
        ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<void> updateSubtitle_V010(
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<void> updateSubtitle_V010(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            subtitle
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
