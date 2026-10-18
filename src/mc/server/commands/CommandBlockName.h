#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockStateCommandParam;
class CommandBlockNameResult;
class CommandOutput;
// clang-format on

class CommandBlockName {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mBlockNameHash;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64> mBlockNameHash;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    LLNDAPI std::string const& getBlockName() const;
    LLNDAPI std::string getDescriptionId() const;
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getDescriptionId() const;
#else // @header-generator platform
    MCAPI ::CommandBlockNameResult resolveBlock(int data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandBlockNameResult resolveBlock(int) const;

    MCNAPI ::CommandBlockNameResult resolveBlock(std::vector<BlockStateCommandParam> const&, ::CommandOutput&) const;

    MCNAPI ::CommandBlockNameResult
    resolveBlock(std::vector<BlockStateCommandParam> const&, int, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI ::CommandBlockNameResult
    resolveBlock(::std::vector<::BlockStateCommandParam> const& states, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandBlockName>();
// clang-format on
#endif // @header-generator platform
