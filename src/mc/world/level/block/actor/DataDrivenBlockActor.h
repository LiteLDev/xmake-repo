#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
#if defined(LL_PLAT_A) // @header-generator platform
class IBlockSource;
class Vec3;
namespace LeanDynamicProperty { struct String; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class DataDrivenBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DataDrivenBlockActor();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenBlockActor();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DataDrivenBlockActor(::BlockType const&, ::BlockPos const&);

    MCNAPI std::function<void(
        const std::string&,
        uint,
        const std::string&,
        uint,
        const std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>*
    )>
           getDynamicPropertiesCallback(::IBlockSource&);
#else // @header-generator platform
    MCAPI DataDrivenBlockActor(::BlockType const& blockType, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockType const&, ::BlockPos const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockType const& blockType, ::BlockPos const& pos);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
