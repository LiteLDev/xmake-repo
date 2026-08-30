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
namespace mce { class UUID; }
// clang-format on

class ScriptPlugin : public ::Scripting::IDependencyLoader, public ::Scripting::IPrinter {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptPlugin();

    virtual std::optional<Scripting::ScriptData> onLoadScript(std::string const&);

    virtual void onInfo(::Scripting::ContextId, std::string_view) const;

    virtual void onWarn(::Scripting::ContextId, std::string_view) const;

    virtual void onError(::Scripting::ContextId, std::string_view) const;

    virtual void onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual bool shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    virtual void onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    );

    MCNAPI std::optional<Scripting::ScriptData> _loadScript(std::string const&);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<Scripting::ScriptData> $onLoadScript(std::string const&);

    MCNAPI void $onInfo(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onWarn(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onError(::Scripting::ContextId, std::string_view) const;

    MCNAPI void $onException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCNAPI bool
    $shouldPrintException(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&) const;

    MCNAPI void
    $onPromiseRejection(::Scripting::ContextId, ::Scripting::BaseError const&, ::entt::meta_any const&, bool) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
