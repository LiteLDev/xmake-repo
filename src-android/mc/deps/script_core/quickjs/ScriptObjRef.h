#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/IScriptRef.h"
#include "mc/deps/script_core/quickjs/NativeObjectOwnership.h"

// auto generated forward declare list
// clang-format off
struct JSRuntime;
struct JSValue;
// clang-format on

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
        ::ll::UntypedStorage<8, 16> mNext;
        // NOLINTEND
    };

    struct PromiseData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mResolve;
        ::ll::UntypedStorage<8, 16> mReject;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::JSRuntime*> mJsRuntime;
    ::ll::UntypedStorage<8, 16> mJsValue;
    ::ll::TypedStorage<8, 40, std::variant<std::monostate, Scripting::QuickJS::ScriptObjRef::GeneratorData, Scripting::QuickJS::ScriptObjRef::PromiseData>> mSpecialData;
    ::ll::TypedStorage<1, 1, ::Scripting::QuickJS::NativeObjectOwnership> mNativeObjectOwnership;
    ::ll::TypedStorage<1, 1, bool> mPinned;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptObjRef();

    virtual void onReduceToSingleOwner();

    virtual void onPromoteToMultipleOwners();

    virtual void onFinalize();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void pin();

    MCNAPI void unpin();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReduceToSingleOwner();

    MCNAPI void $onPromoteToMultipleOwners();

    MCNAPI void $onFinalize();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
