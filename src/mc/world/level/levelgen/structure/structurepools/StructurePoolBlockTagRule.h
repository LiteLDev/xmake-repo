#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class IStructurePoolBlockTagPredicate;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Util { class XXHash; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StructurePoolBlockTagRule {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IStructurePoolBlockTagPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 24, std::string const>                                     mResultKey;
    ::ll::TypedStorage<8, 24, std::string const>                                     mResultValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockTagPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 32, ::std::string const>                                       mResultKey;
    ::ll::TypedStorage<8, 32, ::std::string const>                                       mResultValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagRule();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolBlockTagRule(std::unique_ptr<IStructurePoolBlockTagPredicate>&&, std::string, std::string);
#else // @header-generator platform
    MCAPI StructurePoolBlockTagRule(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );

    MCAPI ~StructurePoolBlockTagRule();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<IStructurePoolBlockTagPredicate>&&, std::string, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        ::std::string                                          resultKey,
        ::std::string                                          resultValue
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
