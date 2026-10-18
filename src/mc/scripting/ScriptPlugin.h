#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceInformation.h"
#include "mc/deps/script_core/runtime/scripting/IDependencyLoader.h"
#include "mc/deps/script_core/runtime/scripting/IPrinter.h"
#include "mc/deps/script_core/script_engine/scripting/Capabilities.h"
#include "mc/deps/script_core/script_engine/scripting/ModuleDescriptor.h"
#include "mc/deps/script_core/script_engine/scripting/ScriptContext.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/scripting/PluginExecutionGroup.h"
#include "mc/scripting/ScriptRuntimeType.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
class ScriptPluginHandleCounter;
class ScriptSentryLogger;
namespace Scripting { struct BaseError; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ScriptData; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace mce { class UUID; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader, public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<IScriptPluginSource>>       mPluginSource;
    ::ll::TypedStorage<8, 80, ::Scripting::ModuleDescriptor>              mModuleDescriptor;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ModuleDescriptor>>   mModuleDependencies;
    ::ll::TypedStorage<1, 1, ::Scripting::Capabilities>                   mCapabilities;
    ::ll::UntypedStorage<8, 32>                                           mMinEngineVersion;
    ::ll::UntypedStorage<8, 48>                                           mPackId;
    ::ll::TypedStorage<8, 24, std::string>                                mRuntimeName;
    ::ll::TypedStorage<4, 4, ::ScriptRuntimeType>                         mRuntimeType;
    ::ll::TypedStorage<8, 24, std::string>                                mRuntimeFileExt;
    ::ll::TypedStorage<8, 24, std::string>                                mMainScriptFilePath;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                   mScriptPaths;
    ::ll::TypedStorage<8, 32, ::Scripting::ScriptContext>                 mContext;
    ::ll::TypedStorage<1, 1, ::PluginExecutionGroup const>                mExecutionGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ScriptPluginHandleCounter>> mHandleCounter;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::IPrinter>>        mPrintLogger;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ScriptSentryLogger>>         mSentryLogger;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IScriptPluginSource>>       mPluginSource;
    ::ll::TypedStorage<8, 96, ::Scripting::ModuleDescriptor>                  mModuleDescriptor;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::ModuleDescriptor>>   mModuleDependencies;
    ::ll::TypedStorage<1, 1, ::Scripting::Capabilities>                       mCapabilities;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion const>                       mMinEngineVersion;
    ::ll::TypedStorage<8, 48, ::PackIdVersion>                                mPackId;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mRuntimeName;
    ::ll::TypedStorage<4, 4, ::ScriptRuntimeType>                             mRuntimeType;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mRuntimeFileExt;
    ::ll::TypedStorage<8, 32, ::std::string>                                  mMainScriptFilePath;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                   mScriptPaths;
    ::ll::TypedStorage<8, 32, ::Scripting::ScriptContext>                     mContext;
    ::ll::TypedStorage<1, 1, ::PluginExecutionGroup const>                    mExecutionGroup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ScriptPluginHandleCounter>> mHandleCounter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Scripting::IPrinter>>        mPrintLogger;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptSentryLogger>>         mSentryLogger;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPlugin();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptPlugin();
#else // @header-generator platform
    virtual ~ScriptPlugin() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ScriptData> onLoadScript(std::string const&);
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ScriptData> onLoadScript(::std::string const& name) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onInfo(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onWarn(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    virtual void onError(::Scripting::ContextId contextId, ::std::string_view message) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual void onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    virtual bool shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
#else // @header-generator platform
    virtual void onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPlugin(
        std::shared_ptr<IScriptPluginSource>,
        ::Scripting::ModuleDescriptor&&,
        std::vector<Scripting::ModuleDescriptor>&&,
        ::Scripting::Capabilities&&,
        ::MinEngineVersion const&,
        ::PackIdVersion const&,
        std::string const&,
        std::string const&,
        ::ResourceInformation::ResourceType,
        ::PluginExecutionGroup,
        std::unique_ptr<Scripting::IPrinter>
#else // @header-generator platform
    MCAPI ScriptPlugin(
        ::std::shared_ptr<::IScriptPluginSource>       pluginSource,
        ::Scripting::ModuleDescriptor&&                moduleDesc,
        ::std::vector<::Scripting::ModuleDescriptor>&& moduleDependencies,
        ::Scripting::Capabilities&&                    capabilities,
        ::MinEngineVersion const&                      minEngineVersion,
        ::PackIdVersion const&                         packId,
        ::std::string const&                           runtimeName,
        ::std::string const&                           mainScriptFilePath,
        ::ResourceInformation::ResourceType            pluginType,
        ::PluginExecutionGroup                         executionGroup,
        ::std::unique_ptr<::Scripting::IPrinter>       printLogger
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ScriptData> _loadScript(std::string const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::ScriptData> _loadScript(::std::string const& fileName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void enableHandleCounter(bool);

    MCNAPI ::Scripting::Capabilities const& getCapabilities() const;

    MCNAPI ::PluginExecutionGroup getExecutionGroup() const;

    MCNAPI ::ScriptPluginHandleCounter* getHandleCounter() const;

    MCNAPI std::string const& getMainScriptFilePath() const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI std::vector<Scripting::ModuleDescriptor> const& getModuleDependencies() const;

    MCNAPI ::Scripting::ModuleDescriptor const& getModuleDescriptor() const;

    MCNAPI ::mce::UUID getModuleUUID() const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::PackIdVersion const& getPackId() const;

    MCNAPI std::string const& getRuntimeName() const;

    MCNAPI ::Scripting::ScriptContext& getScriptContext();

    MCNAPI std::vector<std::string> const& getScriptFilePaths() const;

    MCNAPI bool hasValidScriptContext() const;

    MCNAPI std::optional<Scripting::ScriptData> loadScriptMain();

    MCNAPI void setScriptContext(::Scripting::ScriptContext&&);

    MCNAPI void setSentryLogger(std::unique_ptr<ScriptSentryLogger>);
#else // @header-generator platform
    MCAPI void enableHandleCounter(bool enabled);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        std::shared_ptr<IScriptPluginSource>,
        ::Scripting::ModuleDescriptor&&,
        std::vector<Scripting::ModuleDescriptor>&&,
        ::Scripting::Capabilities&&,
        ::MinEngineVersion const&,
        ::PackIdVersion const&,
        std::string const&,
        std::string const&,
        ::ResourceInformation::ResourceType,
        ::PluginExecutionGroup,
        std::unique_ptr<Scripting::IPrinter>
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::shared_ptr<::IScriptPluginSource>       pluginSource,
        ::Scripting::ModuleDescriptor&&                moduleDesc,
        ::std::vector<::Scripting::ModuleDescriptor>&& moduleDependencies,
        ::Scripting::Capabilities&&                    capabilities,
        ::MinEngineVersion const&                      minEngineVersion,
        ::PackIdVersion const&                         packId,
        ::std::string const&                           runtimeName,
        ::std::string const&                           mainScriptFilePath,
        ::ResourceInformation::ResourceType            pluginType,
        ::PluginExecutionGroup                         executionGroup,
        ::std::unique_ptr<::Scripting::IPrinter>       printLogger
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ScriptData> $onLoadScript(std::string const&);
#else // @header-generator platform
    MCAPI ::std::optional<::Scripting::ScriptData> $onLoadScript(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onInfo(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onInfo(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onWarn(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onWarn(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onError(::Scripting::ContextId, std::string_view) const;
#else // @header-generator platform
    MCAPI void $onError(::Scripting::ContextId contextId, ::std::string_view message) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI void $onException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;
#else // @header-generator platform
    MCAPI bool $shouldPrintException(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $onPromiseRejection(
        ::Scripting::ContextId        contextId,
        ::Scripting::BaseError const& error,
        ::entt::meta_any const&       errorAny,
        bool                          isHandled
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
