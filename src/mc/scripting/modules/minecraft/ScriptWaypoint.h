#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptDimensionLocation.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/scripting/modules/minecraft/ScriptWaypointTextureSelector.h"

// auto generated forward declare list
// clang-format off
class ServerWaypoint;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidWaypointTextureSelectorError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWaypoint {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ScriptWaypoint inner types define
    using PropertyVariantType = ::std::variant<
        bool,
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
        ::ScriptModuleMinecraft::ScriptDimensionLocation>;

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptWaypointTextureSelector> mTextureSelector;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<ScriptModuleMinecraft::ScriptRGB>>        mColor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>>    mColor;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                                    mIsEnabled;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope const>                   mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 88>                                                       mOnSetPropertyEvent;
    ::ll::UntypedStorage<8, 88>                                                       mOnRemoveEvent;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::variant<
                 bool,
                 ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
                 ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
                 ::ScriptModuleMinecraft::ScriptDimensionLocation> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnSetPropertyEvent;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnRemoveEvent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptWaypoint();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptWaypoint();
#else // @header-generator platform
    virtual ~ScriptWaypoint() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ServerWaypoint> createWaypoint() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ServerWaypoint> createWaypoint() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::Result<ScriptModuleMinecraft::ScriptDimensionLocation, ScriptModuleMinecraft::ScriptInvalidWaypointError, ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError> getDimensionLocation() const = 0;
#else // @header-generator platform
    virtual ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptDimensionLocation,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
    getDimensionLocation() const = 0;
#endif // @header-generator platform

    virtual bool isValid() const = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptWaypoint(
        ::Scripting::WeakLifetimeScope const&,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&,
        std::optional<ScriptModuleMinecraft::ScriptRGB> const&
    );

    MCNAPI ::Scripting::Result<
        std::optional<ScriptModuleMinecraft::ScriptRGB>,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::std::optional<::ScriptModuleMinecraft::ScriptRGB>,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#endif // @header-generator platform
    getColor() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<
#else // @header-generator platform
    MCAPI ::Scripting::Result<
#endif // @header-generator platform
        bool,
#if defined(LL_PLAT_A) // @header-generator platform
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#else // @header-generator platform
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#endif // @header-generator platform
    getIsEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Connector<void()>& getOnRemoveEvent();

    MCNAPI ::Bedrock::PubSub::Connector<void(const std::variant<
                                             bool,
                                             std::optional<ScriptModuleMinecraft::ScriptRGB>,
                                             ScriptModuleMinecraft::ScriptWaypointTextureSelector,
                                             ScriptModuleMinecraft::ScriptDimensionLocation>&)>&
    getOnSetPropertyEvent();

    MCNAPI ::Scripting::Result<
        ScriptModuleMinecraft::ScriptWaypointTextureSelector,
        ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointError,
        ::ScriptModuleMinecraft::ScriptInvalidWaypointTextureSelectorError>
#endif // @header-generator platform
    getTextureSelector() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const&,
        ::ScriptModuleMinecraft::ScriptWaypointTextureSelector const&,
        std::optional<ScriptModuleMinecraft::ScriptRGB> const&
    );
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
