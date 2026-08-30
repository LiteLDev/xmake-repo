#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/scripting/modules/minecraft/events/metadata/IScriptAfterEventSignalBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventBindingInfo; }
namespace Scripting { class Release; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventSignalBuilderBase : public ::ScriptModuleMinecraft::IScriptAfterEventSignalBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                   mPropertyNameToBind;
    ::ll::TypedStorage<8, 24, std::string>                                   mSignalTypeNameToBind;
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding (*)()>                mMaybeOverrideBindFunction;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Scripting::ClassBinding (*)()>> mRawBindFunction;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>>       mPropertyReleases;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>>       mSignalReleases;
    ::ll::TypedStorage<8, 8, ulong>                                          mHashCode;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventSignalBuilderBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAfterEventSignalBuilderBase();

    virtual std::vector<Scripting::Release> getEventDataReleases() const;

    virtual std::vector<Scripting::Release> getSignalReleases() const;

    virtual std::vector<Scripting::Release> getPropertyReleases() const;

    virtual std::string getEventDataName() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptAfterEventSignalBuilderBase(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&&,
        ::Scripting::ClassBinding (*)(),
        ::gsl::not_null<Scripting::ClassBinding (*)()>
    );

    MCNAPI ulong calculateHash(ulong) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&&,
        ::Scripting::ClassBinding (*)(),
        ::gsl::not_null<Scripting::ClassBinding (*)()>
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
    MCNAPI std::vector<Scripting::Release> $getEventDataReleases() const;

    MCNAPI std::vector<Scripting::Release> $getSignalReleases() const;

    MCNAPI std::vector<Scripting::Release> $getPropertyReleases() const;

    MCNAPI std::string $getEventDataName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
