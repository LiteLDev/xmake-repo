#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryType.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_21_130::Brain {

struct MemoryDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mName;
    ::ll::UntypedStorage<1, 1>                mType;
    ::ll::TypedStorage<1, 1, bool>            mPersists;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                    mName;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_130::Brain::MemoryType::Value> mType;
    ::ll::TypedStorage<1, 1, bool>                                               mPersists;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& MEMORY_NAME();

    MCAPI static ::std::string_view const& MEMORY_PERSISTENCE();

    MCAPI static ::std::string_view const& MEMORY_TYPE();

    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
