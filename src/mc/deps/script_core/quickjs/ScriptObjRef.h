#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/IScriptRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/quickjs/NativeObjectOwnership.h"

// auto generated forward declare list
// clang-format off
struct JSRuntime;
struct JSValue;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::QuickJS {

class ScriptObjRef : public ::Scripting::IScriptRef {
public:
    // ScriptObjRef inner types declare
    // clang-format off
    struct GeneratorData;
    struct PromiseData;
    // clang-format on

    // ScriptObjRef inner types define
    struct GeneratorData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mNext;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk2b5b0c;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        GeneratorData& operator=(GeneratorData const&);
        GeneratorData(GeneratorData const&);
        GeneratorData();
#endif // @header-generator platform
    };

    struct PromiseData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> mResolve;
        ::ll::UntypedStorage<8, 16> mReject;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16> mUnk71b30f;
        ::ll::UntypedStorage<8, 16> mUnk1c1bd6;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        PromiseData& operator=(PromiseData const&);
        PromiseData(PromiseData const&);
        PromiseData();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::JSRuntime*> mJsRuntime;
    ::ll::UntypedStorage<8, 16> mJsValue;
    ::ll::TypedStorage<8, 40, std::variant<std::monostate, Scripting::QuickJS::ScriptObjRef::GeneratorData, Scripting::QuickJS::ScriptObjRef::PromiseData>> mSpecialData;
    ::ll::TypedStorage<1, 1, ::Scripting::QuickJS::NativeObjectOwnership> mNativeObjectOwnership;
    ::ll::TypedStorage<1, 1, bool> mPinned;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk60fd4e;
    ::ll::UntypedStorage<8, 16> mUnke0e095;
    ::ll::UntypedStorage<8, 40> mUnk50ff94;
    ::ll::UntypedStorage<1, 1>  mUnke9ae49;
    ::ll::UntypedStorage<1, 1>  mUnk7fb67c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptObjRef& operator=(ScriptObjRef const&);
    ScriptObjRef(ScriptObjRef const&);
    ScriptObjRef();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptObjRef();
#else // @header-generator platform
    virtual ~ScriptObjRef() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onReduceToSingleOwner();
#else // @header-generator platform
    virtual void onReduceToSingleOwner() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onPromoteToMultipleOwners();
#else // @header-generator platform
    virtual void onPromoteToMultipleOwners() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onFinalize();
#else // @header-generator platform
    virtual void onFinalize() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void pin();

    MCNAPI void unpin();
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReduceToSingleOwner();

    MCNAPI void $onPromoteToMultipleOwners();

    MCNAPI void $onFinalize();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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

} // namespace Scripting::QuickJS
