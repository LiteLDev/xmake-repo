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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                   mPropertyNameToBind;
    ::ll::TypedStorage<8, 24, std::string>                                   mSignalTypeNameToBind;
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding (*)()>                mMaybeOverrideBindFunction;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Scripting::ClassBinding (*)()>> mRawBindFunction;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>>       mPropertyReleases;
    ::ll::TypedStorage<8, 32, std::optional<Scripting::TaggedBinding>>       mSignalReleases;
    ::ll::TypedStorage<8, 8, ulong>                                          mHashCode;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                   mPropertyNameToBind;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSignalTypeNameToBind;
    ::ll::TypedStorage<8, 8, ::Scripting::ClassBinding (*)()>                  mMaybeOverrideBindFunction;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Scripting::ClassBinding (*)()>> mRawBindFunction;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>>     mPropertyReleases;
    ::ll::TypedStorage<8, 32, ::std::optional<::Scripting::TaggedBinding>>     mSignalReleases;
    ::ll::TypedStorage<8, 8, uint64>                                           mHashCode;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptAfterEventSignalBuilderBase& operator=(ScriptAfterEventSignalBuilderBase const&);
#endif // @header-generator platform
    ScriptAfterEventSignalBuilderBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptAfterEventSignalBuilderBase();
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getEventDataReleases() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getEventDataReleases() const;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getSignalReleases() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getSignalReleases() const;
#else // @header-generator platform
    virtual ::std::vector<::Scripting::Release> getPropertyReleases() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Scripting::Release> getPropertyReleases() const;
#else // @header-generator platform
    virtual ::std::string getEventDataName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getEventDataName() const;
#else // @header-generator platform
    virtual ~ScriptAfterEventSignalBuilderBase() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptAfterEventSignalBuilderBase(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&&,
        ::Scripting::ClassBinding (*)(),
        ::gsl::not_null<Scripting::ClassBinding (*)()>
#else // @header-generator platform
    MCAPI ScriptAfterEventSignalBuilderBase(::ScriptModuleMinecraft::ScriptAfterEventSignalBuilderBase const&);

    MCAPI ScriptAfterEventSignalBuilderBase(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&& bindingData,
        ::Scripting::ClassBinding (*maybeOverrideBindFunction)(),
        ::gsl::not_null<::Scripting::ClassBinding (*)()> rawBindFunction
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong calculateHash(ulong) const;
#else // @header-generator platform
    MCAPI uint64 calculateHash(uint64 typeHash) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&&,
        ::Scripting::ClassBinding (*)(),
        ::gsl::not_null<Scripting::ClassBinding (*)()>
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptAfterEventSignalBuilderBase const&);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptAfterEventBindingInfo&& bindingData,
        ::Scripting::ClassBinding (*maybeOverrideBindFunction)(),
        ::gsl::not_null<::Scripting::ClassBinding (*)()> rawBindFunction
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::Release> $getEventDataReleases() const;
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::Release> $getEventDataReleases() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::Release> $getSignalReleases() const;
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::Release> $getSignalReleases() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::Release> $getPropertyReleases() const;
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::Release> $getPropertyReleases() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getEventDataName() const;
#else // @header-generator platform
    MCAPI ::std::string $getEventDataName() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
