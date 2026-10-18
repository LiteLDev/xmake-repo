#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/items/components/ScriptItemComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBookError; }
namespace ScriptModuleMinecraft { struct ScriptBookPageContentError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidItemStackError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBookItemComponent : public ::ScriptModuleMinecraft::ScriptItemComponent {
public:
    // ScriptBookItemComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ContentType = std::variant<
        std::string,
        ScriptModuleMinecraft::ScriptRawMessageInterface,
        std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>;

public:
    // prevent constructor by default
    ScriptBookItemComponent& operator=(ScriptBookItemComponent const&);
    ScriptBookItemComponent();
#else // @header-generator platform
    using ContentType = ::std::variant<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptRawMessageInterface,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>>;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptBookItemComponent();
#else // @header-generator platform
    virtual ~ScriptBookItemComponent() /*override*/ = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
#endif // @header-generator platform
    _getAuthor() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<std::vector<std::optional<std::string>>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<::std::vector<::std::optional<::std::string>>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
#endif // @header-generator platform
        _getContents() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<int, ScriptModuleMinecraft::ScriptInvalidItemStackError> _getPageCount() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _getPageCount() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
        std::vector<std::optional<ScriptModuleMinecraft::ScriptRawMessageInterface>>,
        ScriptModuleMinecraft::ScriptInvalidItemStackError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::std::vector<::std::optional<::ScriptModuleMinecraft::ScriptRawMessageInterface>>,
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
#endif // @header-generator platform
    _getRawContents() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<std::optional<std::string>, ScriptModuleMinecraft::ScriptInvalidItemStackError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::optional<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidItemStackError>
#endif // @header-generator platform
    _getTitle() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ScriptModuleMinecraft::ScriptBookError,
        ScriptModuleMinecraft::ScriptBookPageContentError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError,
        ::ScriptModuleMinecraft::ScriptBookPageContentError>
#endif // @header-generator platform
    _insertPage(
#if defined(LL_PLAT_A) // @header-generator platform
        int,
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>
#else // @header-generator platform
        int index,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> content
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<bool, ScriptModuleMinecraft::ScriptInvalidItemStackError> _isSigned() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidItemStackError> _isSigned() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        void,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ScriptModuleMinecraft::ScriptBookError,
        ScriptModuleMinecraft::ScriptBookPageContentError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidItemStackError,
        ::ScriptModuleMinecraft::ScriptBookError,
        ::ScriptModuleMinecraft::ScriptBookPageContentError>
#endif // @header-generator platform
    _setPageContent(
#if defined(LL_PLAT_A) // @header-generator platform
        int,
        std::variant<
            std::string,
            ScriptModuleMinecraft::ScriptRawMessageInterface,
            std::vector<std::variant<std::string, ScriptModuleMinecraft::ScriptRawMessageInterface>>>
#else // @header-generator platform
        int index,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> content
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
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
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
