#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDefinitions.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDescription.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 264, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription> mDescription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 224, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription> mDescription;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDefinitions>  mDefinitions;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::SemVersionConstant const& VERSION();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
