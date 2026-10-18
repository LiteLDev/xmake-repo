#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentParameterCacheHandle.h"

struct ItemCustomComponentData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::TypedStorage<8, 64, std::variant<ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle, cereal::DynamicValue>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ItemCustomComponentData& operator=(ItemCustomComponentData const&);
    ItemCustomComponentData(ItemCustomComponentData const&);
    ItemCustomComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ItemCustomComponentData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle, ::cereal::DynamicValue>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
};
