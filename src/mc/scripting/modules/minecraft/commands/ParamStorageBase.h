#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

namespace ScriptModuleMinecraft {

class ParamStorageBase {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParamStorageBase();
#else // @header-generator platform
    virtual ~ParamStorageBase() = default;
#endif // @header-generator platform

    virtual void* getParamStorageValue() = 0;

    virtual bool* getParamStorageIsSet() = 0;

    virtual ::ScriptModuleMinecraft::ScriptCustomCommandParamType paramType() const = 0;

    virtual ::entt::meta_any paramAsAny() = 0;

    virtual bool paramIsSet() const = 0;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace ScriptModuleMinecraft
