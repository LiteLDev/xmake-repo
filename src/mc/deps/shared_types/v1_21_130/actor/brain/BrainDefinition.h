#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/actor/brain/InternalAccessMapDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinition.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionEquality.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/MemoryDefinitionHash.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace SharedTypes::v1_21_130::Brain {

struct BrainDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_set<SharedTypes::v1_21_130::Brain::MemoryDefinition, SharedTypes::v1_21_130::Brain::MemoryDefinitionHash, SharedTypes::v1_21_130::Brain::MemoryDefinitionEquality, std::allocator<SharedTypes::v1_21_130::Brain::MemoryDefinition>>> mMemories;
    ::ll::TypedStorage<8, 56, std::optional<SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition>> mInternalAccessMap;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_set<
            ::SharedTypes::v1_21_130::Brain::MemoryDefinition,
            ::SharedTypes::v1_21_130::Brain::MemoryDefinitionHash,
            ::SharedTypes::v1_21_130::Brain::MemoryDefinitionEquality>>
        mMemories;
    ::ll::TypedStorage<8, 64, ::std::optional<::SharedTypes::v1_21_130::Brain::InternalAccessMapDefinition>>
        mInternalAccessMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BrainDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::Brain
