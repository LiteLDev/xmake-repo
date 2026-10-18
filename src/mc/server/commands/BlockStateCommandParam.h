#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/Expected.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/Block.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class CommandOutput;
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockStateCommandParam {
public:
    // BlockStateCommandParam inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Type : uint {
#else // @header-generator platform
    enum class Type : int {
#endif // @header-generator platform
        Integer = 0,
        Float   = 1,
        Bool    = 2,
        String  = 3,
        Invalid = 4,
    };

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI ll::Expected<Block::BlockStateValueType> toStateValue() const;

    LLNDAPI static ll::Expected<Block::BlockStatesType> toStateMap(std::vector<BlockStateCommandParam> const&);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mBlockState;
    ::ll::TypedStorage<8, 24, std::string>                   mValue;
    ::ll::TypedStorage<4, 4, ::BlockStateCommandParam::Type> mType;
#else // @header-generator platform
    ::std::string                  mBlockState;
    ::std::string                  mValue;
    ::BlockStateCommandParam::Type mType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    BlockStateCommandParam& operator=(BlockStateCommandParam const&);
#else // @header-generator platform
#endif // @header-generator platform
    BlockStateCommandParam();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockStateCommandParam(std::string, std::string, ::BlockStateCommandParam::Type);
#else // @header-generator platform
    MCAPI BlockStateCommandParam(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _createCompoundTag(::CompoundTag&, ::CommandOutput&) const;
#else // @header-generator platform
    MCAPI bool _createCompoundTag(::CompoundTag& tag, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockState const* _getBlockState(::Block const&) const;

    MCNAPI std::optional<std::pair<HashedString, int>> getNameAndValue(::CommandOutput&, ::Block const&) const;

    MCNAPI bool setBlockState(::Block const**, ::CommandOutput&) const;

    MCNAPI ~BlockStateCommandParam();
#else // @header-generator platform
    MCAPI ::BlockState const* _getBlockState(::Block const& block) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, ::BlockStateCommandParam::Type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string state, ::std::string value, ::BlockStateCommandParam::Type type);
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::vector<::BlockStateCommandParam, ::std::allocator<::BlockStateCommandParam> >>();
// clang-format on
#endif // @header-generator platform
